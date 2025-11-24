// Copyright 2024 Marq Rasmussen
// Copyright 2025, ElSayed ElSheikh

#ifndef GRAB2_ROS_COMMON__BT_EXECUTION_SERVER_HPP_
#define GRAB2_ROS_COMMON__BT_EXECUTION_SERVER_HPP_

#include <memory>
#include <optional>
#include <thread>
#include <filesystem>
#include <string>

#include "behaviortree_cpp/bt_factory.h"
#include "behaviortree_cpp/loggers/groot2_publisher.h"
#include "behaviortree_ros2/bt_executor_parameters.hpp"
#include "behaviortree_ros2/bt_utils.hpp"

#include "btcpp_ros2_interfaces/srv/get_trees.hpp"

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "ament_index_cpp/get_package_share_directory.hpp"

namespace BT
{

/**
 * @brief TreeExecutionServer class hosts a ROS Action Server that is able
 * to load Behavior plugins, BehaviorTree.xml files and execute them.
 *
 * These are named in the ROS2 node's parameters, see
 * @link bt_executor_parameters.md @endlink
 *
 * A `BT::Groot2Publisher` is included inside (see BehaviorTree.CPP for more information).
 *
 * It can be customized by overriding its virtual functions.
 *
 * @tparam ActionT ROS2 action type to use for the server
 */
template<typename ActionT>
class TreeExecutionServer
{
public:
  using GoalType = typename ActionT::Goal;
  using ResultType = typename ActionT::Result;
  using FeedbackType = typename ActionT::Feedback;
  using GoalHandle = rclcpp_action::ServerGoalHandle<ActionT>;
  using GetTrees = btcpp_ros2_interfaces::srv::GetTrees;

  /**
   * @brief Constructor that will create its own instance of rclcpp::Node
   * @param options Node options
   * @param action_name Name of the action server
   */
  explicit TreeExecutionServer(const rclcpp::NodeOptions & options, const std::string & action_name)
  : TreeExecutionServer(std::make_shared<rclcpp::Node>("bt_action_server", options), action_name)
  {}

  /**
   * @brief Constructor to use when an already existing node should be used.
   * @param node Shared pointer to existing node
   * @param action_name Name of the action server
  */
  explicit TreeExecutionServer(
    const rclcpp::Node::SharedPtr & node,
    const std::string & action_name)
  : node_(node)
    , global_blackboard_(BT::Blackboard::create())
  {
    param_listener_ = std::make_shared<bt_server::ParamListener>(node_);
    params_ = param_listener_->get_params();

    // Create the action server
    RCLCPP_INFO(node_->get_logger(), "Starting Action Server: %s", action_name.c_str());

    action_server_ = rclcpp_action::create_server<ActionT>(
      node_,
      action_name,
      std::bind(
        &TreeExecutionServer::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
      std::bind(&TreeExecutionServer::handle_cancel, this, std::placeholders::_1),
      std::bind(&TreeExecutionServer::handle_accepted, this, std::placeholders::_1)
    );

    // Service to get loaded trees
    get_trees_service_ = node_->create_service<GetTrees>(
      "get_loaded_trees",
      [this](const std::shared_ptr<GetTrees::Request>,
      std::shared_ptr<GetTrees::Response> response) {
        response->tree_ids = factory_.registeredBehaviorTrees();
      }
    );

    // Single-shot timer for async registration
    rclcpp::VoidCallbackType callback = [this]() {
        if (!factory_initialized_) {
          executeRegistration();
        }
        single_shot_timer_->cancel();
      };

    single_shot_timer_ = node_->create_wall_timer(
      std::chrono::milliseconds(1),
      callback
    );
  }

  virtual ~TreeExecutionServer()
  {
    if (action_thread_.joinable()) {
      action_thread_.join();
    }
  }

  /**
   * @brief Gets the NodeBaseInterface of node_.
   * @details This function exists to allow running TreeExecutionServer as a component in a composable node container.
   * The name of this method shall not change to work properly with the component composer.
   */
  rclcpp::node_interfaces::NodeBaseInterface::SharedPtr get_node_base_interface()
  {
    return node_->get_node_base_interface();
  }

  /// @brief Gets the rclcpp::Node pointer
  rclcpp::Node::SharedPtr node()
  {
    return node_;
  }

  /// @brief Name of the tree being executed
  const std::string & treeName() const
  {
    return tree_name_;
  }

  /// @brief The goal received in the last request
  const std::shared_ptr<const GoalType> & goal() const
  {
    return current_goal_;
  }

  /// @brief Tree being executed.
  const BT::Tree & tree() const
  {
    return tree_;
  }

  /// @brief Pointer to the global blackboard
  BT::Blackboard::Ptr globalBlackboard()
  {
    return global_blackboard_;
  }

  /// @brief The behavior tree factory
  BT::BehaviorTreeFactory & factory()
  {
    return factory_;
  }

protected:
  /**
   * @brief Callback invoked when a goal is received and before the tree is created.
   * If it returns false, the goal will be rejected.
   *
   * @param goal The goal received from the action client
  */
  virtual bool onGoalReceived(const GoalType & goal)
  {
    return true;
  }

  /**
   * @brief Callback invoked after the tree is created.
   * It can be used, for instance, to initialize a logger or the global blackboard.
   *
   * @param tree The tree that was created
   * @param goal The goal that triggered the tree creation
  */
  virtual void onTreeCreated(BT::Tree & tree, const GoalType & goal)
  {}

  /**
   * @brief registerNodesIntoFactory is a callback invoked after the
   * plugins were registered into the BT::BehaviorTreeFactory.
   * It can be used to register additional custom nodes manually.
   *
   * @param factory The factory to use to register nodes
  */
  virtual void registerNodesIntoFactory(BT::BehaviorTreeFactory & factory)
  {}

  /**
   * @brief onLoopAfterTick invoked at each loop, after tree.tickOnce().
   * If it returns a valid NodeStatus, the tree will stop and return that status.
   * Return std::nullopt to continue the execution.
   *
   * @param status The status of the tree after the last tick
  */
  virtual std::optional<BT::NodeStatus> onLoopAfterTick(BT::NodeStatus status)
  {
    return std::nullopt;
  }

  /**
   * @brief onTreeExecutionCompleted is a callback invoked after the tree execution is completed,
   * i.e. if it returned SUCCESS/FAILURE or if the action was cancelled by the Action Client.
   *
   * @param status The status of the tree after the last tick
   * @param was_cancelled True if the action was cancelled by the Action Client
   * @param result The result object to be filled (can be modified)
  */
  virtual void onTreeExecutionCompleted(
    BT::NodeStatus status, bool was_cancelled,
    ResultType & result)
  {}

  /**
   * @brief onLoopFeedback is a callback invoked at each loop, after tree.tickOnce().
   * Use this to populate the feedback message.
   *
   * @param feedback The feedback object to be filled (can be modified)
   * @return true if feedback should be published, false otherwise
  */
  virtual bool onLoopFeedback(FeedbackType & feedback)
  {
    return false;
  }

  /**
   * @brief Extract tree name from the goal. Override this to customize behavior.
   *
   * Default implementation returns empty string to use main_tree_to_execute from XML.
   * Override this method if your goal contains a tree name field.
   *
   * @param goal The goal received from the action client
   * @return Tree name to execute, or empty string to use main_tree_to_execute from XML
  */
  virtual std::string getTreeName(const GoalType & goal)
  {
    return "";
  }

protected:
  /**
   * @brief Method to register the tree and BT custom nodes.
   * It will call registerNodesIntoFactory().
   *
   * This callback will invoked asynchronously when this rclcpp Node is attached
   * to a rclcpp Executor.
   * Alternatively, it can be called synchronously in the constructor of a
   * __derived__ class of TreeExecutionServer.
   */
  void executeRegistration()
  {
    // Before executing check if we have new Behaviors or Subtrees to reload
    factory_.clearRegisteredBehaviorTrees();

    params_ = param_listener_->get_params();

    // User defined method
    registerNodesIntoFactory(factory_);

    // Load plugins from multiple directories
    RegisterPlugins(params_, factory_, node_);

    // Modified: Load single tree from file path parameter
    registerSingleTree();

    factory_initialized_ = true;
  }

private:
  rclcpp::Node::SharedPtr node_;
  typename rclcpp_action::Server<ActionT>::SharedPtr action_server_;
  std::thread action_thread_;

  std::shared_ptr<bt_server::ParamListener> param_listener_;
  bt_server::Params params_;

  rclcpp::Service<GetTrees>::SharedPtr get_trees_service_;

  BT::BehaviorTreeFactory factory_;
  std::shared_ptr<BT::Groot2Publisher> groot_publisher_;

  std::string tree_name_;
  std::shared_ptr<const GoalType> current_goal_;
  BT::Tree tree_;
  BT::Blackboard::Ptr global_blackboard_;
  bool factory_initialized_ = false;

  rclcpp::WallTimer<rclcpp::VoidCallbackType>::SharedPtr single_shot_timer_;

  /**
   * @brief Register a single behavior tree from the tree_file parameter
   */
  void registerSingleTree()
  {
    // Declare parameter if not exists
    if (!node_->has_parameter("tree_file")) {
      node_->declare_parameter<std::string>("tree_file", "");
    }

    std::string bt_xml_filename;
    node_->get_parameter("tree_file", bt_xml_filename);

    if (bt_xml_filename.empty()) {
      RCLCPP_WARN(
        node_->get_logger(),
        "Parameter 'tree_file' is empty. No behavior tree will be loaded.");
      return;
    }

    const auto entry = std::filesystem::directory_entry(bt_xml_filename);

    if (!entry.exists()) {
      RCLCPP_ERROR(
        node_->get_logger(),
        "Behavior tree file does not exist: %s", bt_xml_filename.c_str());
      return;
    }

    if (entry.path().extension() != ".xml") {
      RCLCPP_ERROR(
        node_->get_logger(),
        "File is not an XML file: %s", bt_xml_filename.c_str());
      return;
    }

    try {
      factory_.registerBehaviorTreeFromFile(entry.path().string());
      RCLCPP_INFO(
        node_->get_logger(),
        "Registered BehaviorTree: %s", entry.path().filename().c_str());
    } catch (const std::exception & e) {
      RCLCPP_ERROR(
        node_->get_logger(),
        "Failed to register BehaviorTree: %s\n%s",
        entry.path().filename().c_str(), e.what());
    }
  }

  /**
   * @brief handle the goal requested: accept or reject.
   * @param uuid Goal ID
   * @param goal A shared pointer to the specific goal
   * @return GoalResponse response of the goal processed
   */
  rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID & uuid,
    std::shared_ptr<const GoalType> goal)
  {
    RCLCPP_INFO(node_->get_logger(), "Received goal request");

    if (onGoalReceived(*goal)) {
      return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    } else {
      return rclcpp_action::GoalResponse::REJECT;
    }
  }

  /**
   * @brief Accepts cancellation requests of action server.
   * @param goal_handle A server goal handle to cancel
   * @return CancelResponse response of the goal cancelled
   */
  rclcpp_action::CancelResponse handle_cancel(
    const std::shared_ptr<GoalHandle> goal_handle)
  {
    RCLCPP_INFO(node_->get_logger(), "Received request to cancel goal");
    if (!goal_handle->is_active()) {
      RCLCPP_WARN(
        node_->get_logger(),
        "Rejecting request to cancel goal because the server is not processing one.");
      return rclcpp_action::CancelResponse::REJECT;
    }
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  /**
   * @brief Handles accepted goals and starts a thread to process them
   * @param goal_handle Server goal handle to process feedback and set the response when finished
   */
  void handle_accepted(const std::shared_ptr<GoalHandle> goal_handle)
  {
    // Join the previous execute thread before replacing it with a new one
    if (action_thread_.joinable()) {
      action_thread_.join();
    }
    // To avoid blocking the executor start a new thread to process the goal
    action_thread_ = std::thread{[this, goal_handle]() {execute(goal_handle);}};
  }

  /**
   * @brief Background processes to execute the BehaviorTree and handle stop requests
   * @param goal_handle Server goal handle to process feedback and set the response when finished
   */
  void execute(const std::shared_ptr<GoalHandle> goal_handle)
  {
    current_goal_ = goal_handle->get_goal();
    BT::NodeStatus status = BT::NodeStatus::RUNNING;
    auto action_result = std::make_shared<ResultType>();

    // Before executing check if we have new Behaviors or Subtrees to reload
    if (param_listener_->is_old(params_)) {
      executeRegistration();
    }

    // Loop until something happens with ROS or the node completes
    try {
      // This blackboard will be owned by "MainTree". Its parent is global_blackboard_
      auto root_blackboard = BT::Blackboard::create(global_blackboard_);

      tree_name_ = getTreeName(*current_goal_);

      // If tree_name is empty, use main_tree_to_execute from XML
      // Otherwise, create the specific tree by name
      if (tree_name_.empty()) {
        // Get the list of registered trees
        auto registered_trees = factory_.registeredBehaviorTrees();
        if (registered_trees.empty()) {
          throw std::runtime_error("No behavior trees registered in factory");
        }

        // Use the first registered tree (which should be the main_tree_to_execute)
        tree_name_ = registered_trees.front();
        tree_ = factory_.createTree(tree_name_, root_blackboard);
        RCLCPP_INFO(node_->get_logger(), "Executing main tree: %s", tree_name_.c_str());
      } else {
        tree_ = factory_.createTree(tree_name_, root_blackboard);
        RCLCPP_INFO(node_->get_logger(), "Executing specified tree: %s", tree_name_.c_str());
      }

      // Call user defined function after the tree has been created
      onTreeCreated(tree_, *current_goal_);
      groot_publisher_.reset();
      groot_publisher_ = std::make_shared<BT::Groot2Publisher>(tree_, params_.groot2_port);

      // Loop until the tree is done or a cancel is requested
      const auto period = std::chrono::milliseconds(
        static_cast<int>(1000.0 / params_.tick_frequency)
      );
      auto loop_deadline = std::chrono::steady_clock::now() + period;

      // Operations to be done if the tree execution is aborted, either by
      // cancel requested or by onLoopAfterTick()
      auto stop_action =
        [this, &action_result](BT::NodeStatus status, const std::string & message)
        {
          tree_.haltTree();
          onTreeExecutionCompleted(status, true, *action_result);
          RCLCPP_WARN(node_->get_logger(), "%s", message.c_str());
        };

      while (rclcpp::ok() && status == BT::NodeStatus::RUNNING) {
        if (goal_handle->is_canceling()) {
          stop_action(status, "Action Server canceling and halting Behavior Tree");
          goal_handle->canceled(action_result);
          return;
        }

        // Tick the tree once
        status = tree_.tickExactlyOnce();

        if (const auto res = onLoopAfterTick(status); res.has_value()) {
          stop_action(res.value(), "Action Server aborted by onLoopAfterTick()");
          goal_handle->abort(action_result);
          return;
        }

        // Publish feedback if user wants to
        auto feedback = std::make_shared<FeedbackType>();
        if (onLoopFeedback(*feedback)) {
          goal_handle->publish_feedback(feedback);
        }

        const auto now = std::chrono::steady_clock::now();
        if (now < loop_deadline) {
          tree_.sleep(
            std::chrono::duration_cast<std::chrono::system_clock::duration>(loop_deadline - now));
        }
        loop_deadline += period;
      }
    } catch (const std::exception & ex) {
      std::string error_msg = std::string("Behavior Tree exception: ") + ex.what();
      RCLCPP_ERROR(node_->get_logger(), "%s", error_msg.c_str());
      onTreeExecutionCompleted(BT::NodeStatus::FAILURE, false, *action_result);
      goal_handle->abort(action_result);
      return;
    }

    // Call user defined onTreeExecutionCompleted function
    onTreeExecutionCompleted(status, false, *action_result);

    // Return success or aborted for the action result
    if (status == BT::NodeStatus::SUCCESS) {
      RCLCPP_INFO(node_->get_logger(), "Goal succeeded");
      goal_handle->succeed(action_result);
    } else {
      RCLCPP_ERROR(node_->get_logger(), "Goal aborted");
      goal_handle->abort(action_result);
    }
  }
};

}  // namespace BT

#endif  // GRAB2_ROS_COMMON__BT_EXECUTION_SERVER_HPP_
