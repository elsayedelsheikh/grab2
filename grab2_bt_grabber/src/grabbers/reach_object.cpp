// Copyright (c) 2025, ElSayed ElSheikh

#include "grab2_bt_grabber/grabbers/reach_object.hpp"

namespace grab2_bt_grabber
{

ReachObject::ReachObject(const rclcpp::NodeOptions & options)
: TreeExecutionServer(options, "reach_object")
{
  this->configure();
}

void
ReachObject::configure()
{
  // Initialize parameters
  // Declare the default behavior_tree
  std::string bt_xml_filename;
  if (!node()->has_parameter("tree_file")) {
    std::string pkg_share_dir = ament_index_cpp::get_package_share_directory("grab2_bt_grabber");
    node()->declare_parameter<std::string>(
      "tree_file",
      pkg_share_dir +
      "/behavior_trees/reach_object.xml");
  }

  // Declare arm controller action parameter
  if (!node()->has_parameter("arm_controller_action")) {
    node()->declare_parameter<std::string>(
      "arm_controller_action",
      "arm_controller/follow_joint_trajectory");
  }

  // Declare gripper controller action parameter
  if (!node()->has_parameter("gripper_controller_action")) {
    node()->declare_parameter<std::string>(
      "gripper_controller_action",
      "hand_controller/gripper_cmd");
  }
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

  // Set blackboard parameters from ROS2 parameters
  std::string arm_action;
  if (node()->has_parameter("arm_controller_action")) {
    node()->get_parameter("arm_controller_action", arm_action);
  } else {
    RCLCPP_ERROR(node()->get_logger(), "Parameter 'arm_controller_action' not found!");
  }

  std::string gripper_action;
  if (node()->has_parameter("gripper_controller_action")) {
    node()->get_parameter("gripper_controller_action", gripper_action);
  } else {
    RCLCPP_ERROR(node()->get_logger(), "Parameter 'gripper_controller_action' not found!");
  }

  blackboard->set<std::string>("arm_controller_action", arm_action);
  blackboard->set<std::string>("gripper_controller_action", gripper_action);
}

}  // namespace grab2_bt_grabber
