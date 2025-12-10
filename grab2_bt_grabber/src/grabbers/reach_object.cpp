// Copyright (c) 2025, ElSayed ElSheikh

#include "grab2_bt_grabber/grabbers/reach_object.hpp"

namespace grab2_bt_grabber
{

ReachObject::ReachObject(const rclcpp::NodeOptions & options)
: TreeExecutionServer(options)
{
  this->configure();
}

void
ReachObject::configure()
{
  // Initialize parameters
  // Declare the default behavior_tree
  if (!node()->has_parameter("tree_file")) {
    std::string pkg_share_dir = ament_index_cpp::get_package_share_directory("grab2_bt_grabber");
    node()->declare_parameter<std::string>(
      "tree_file",
      pkg_share_dir +
      "/behavior_trees/reach_object.xml");
  }

  // Declare the default controller action names
  if (!node()->has_parameter("arm_controller_action")) {
    node()->declare_parameter<std::string>(
      "arm_controller_action",
      "follow_joint_trajectory");
  }

  if (!node()->has_parameter("gripper_controller_action")) {
    node()->declare_parameter<std::string>(
      "gripper_controller_action",
      "gripper_cmd");
  }

  int server_timeout_ms, wait_for_service_timeout_ms;
  node()->get_parameter_or("server_timeout_ms", server_timeout_ms, 2000);
  node()->get_parameter_or("wait_for_service_timeout_ms", wait_for_service_timeout_ms, 3000);

  // Get global blackboard
  auto blackboard = globalBlackboard();

  // Set blackboard keys before tree is created
  blackboard->set<std::chrono::milliseconds>(
    "server_timeout",
    std::chrono::milliseconds(server_timeout_ms));  // goal acknowledgment timeout
  blackboard->set<std::chrono::milliseconds>(
    "wait_for_service_timeout",
    std::chrono::milliseconds(wait_for_service_timeout_ms));  // find service timeout
}

std::string
ReachObject::getTreeName(const GoalType & goal)
{
  if (!goal.target_tree.empty()) {
    return goal.target_tree;
  }
  return "";
}

void
ReachObject::onTreeCreated(BT::Tree & tree, const GoalType & goal)
{
  // Get blackboard
  auto blackboard = tree.rootBlackboard();

  // Set goal object pose on blackboard
  blackboard->set<geometry_msgs::msg::PoseStamped>("target_pose", goal.target_pose);
  std::stringstream ss;
  ss << "frame: " << goal.target_pose.header.frame_id
     << ", x: " << goal.target_pose.pose.position.x
     << ", y: " << goal.target_pose.pose.position.y
     << ", z: " << goal.target_pose.pose.position.z;
  RCLCPP_DEBUG(
    node()->get_logger(), "Received target goal: %s", ss.str().c_str()
  );

  // Set controller action names on blackboard
  std::string arm_action, gripper_action;
  node()->get_parameter("arm_controller_action", arm_action);
  node()->get_parameter("gripper_controller_action", gripper_action);
  blackboard->set<std::string>("arm_controller_action", arm_action);
  blackboard->set<std::string>("gripper_controller_action", gripper_action);
}

}  // namespace grab2_bt_grabber
