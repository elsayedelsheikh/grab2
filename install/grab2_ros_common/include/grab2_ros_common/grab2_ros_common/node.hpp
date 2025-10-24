// Copyright (c) 2025, ElSayed ElSheikh

#ifndef GRAB2_ROS_COMMON__NODE_HPP_
#define GRAB2_ROS_COMMON__NODE_HPP_

#include <string>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

namespace grab2
{

class Node : public rclcpp::Node
{
public:
  Node(
    const std::string & node_name,
    const rclcpp::NodeOptions & options = rclcpp::NodeOptions()
  )
  : rclcpp::Node(node_name, options)
  {}

  Node(
    const std::string & node_name,
    const std::string & ns,
    const rclcpp::NodeOptions & options = rclcpp::NodeOptions()
  )
  : rclcpp::Node(node_name, ns, options)
  {}

  // ROS2 Action Server
  template<typename ActionT>
  using GoalHandle = rclcpp_action::ServerGoalHandle<ActionT>;

  template<typename ActionT>
  using ExecuteCallback = std::function<void (const std::shared_ptr<GoalHandle<ActionT>>)>;

  template<typename ActionT>
  typename rclcpp_action::Server<ActionT>::SharedPtr create_action_server(
    const std::string & name,
    ExecuteCallback<ActionT> execute_callback)
  {
    auto handle_goal = [this, name](
      const rclcpp_action::GoalUUID & uuid,
      std::shared_ptr<const typename ActionT::Goal> goal) -> rclcpp_action::GoalResponse
      {
        (void)uuid;
        (void)goal;
        RCLCPP_INFO(this->get_logger(), "Received goal request for %s", name.c_str());
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
      };

    auto handle_cancel = [this, name](
      const std::shared_ptr<GoalHandle<ActionT>> goal_handle) -> rclcpp_action::CancelResponse
      {
        (void)goal_handle;
        RCLCPP_INFO(this->get_logger(), "Received request to cancel goal for %s", name.c_str());
        return rclcpp_action::CancelResponse::ACCEPT;
      };

    auto handle_accepted = [this, execute_callback](
      const std::shared_ptr<GoalHandle<ActionT>> goal_handle)
      {
        std::thread{[execute_callback, goal_handle]() {
            execute_callback(goal_handle);
          }}.detach();
      };

    return rclcpp_action::create_server<ActionT>(
      this->get_node_base_interface(),
      this->get_node_clock_interface(),
      this->get_node_logging_interface(),
      this->get_node_waitables_interface(),
      name,
      handle_goal,
      handle_cancel,
      handle_accepted);
  }
};

}  // namespace grab2

#endif  // GRAB2_ROS_COMMON__NODE_HPP_
