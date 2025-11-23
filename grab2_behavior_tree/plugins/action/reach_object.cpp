// Copyright (c) 2025, ElSayed ElSheikh

#include "grab2_behavior_tree/plugins/action/reach_object.hpp"

namespace grab2_behavior_tree
{
ReachObject::ReachObject(
  const std::string & name,
  const BT::NodeConfig & conf,
  const BT::RosNodeParams & params
)
: BT::RosActionNode<ReachObjectAction>(name, conf, params)
{}

bool
ReachObject::setGoal(BT::RosActionNode<ReachObjectAction>::Goal & goal)
{
  // Set Goal Pose
  getInput("target_pose", goal.target_pose);

  RCLCPP_DEBUG(logger(), "Goal Frame: [%s]", goal.target_pose.header.frame_id.c_str());
  RCLCPP_DEBUG(logger(), "Goal Position (x): [%f]", goal.target_pose.pose.position.x);
  RCLCPP_DEBUG(logger(), "Goal Position (y): [%f]", goal.target_pose.pose.position.y);
  RCLCPP_DEBUG(logger(), "Goal Position (z): [%f]", goal.target_pose.pose.position.z);

  return true;
}

BT::NodeStatus
ReachObject::onResultReceived(const WrappedResult & wr)
{
  if (wr.code == rclcpp_action::ResultCode::SUCCEEDED) {
    RCLCPP_INFO(logger(), "[%s] Reach Object SUCCESS", name().c_str());
    return BT::NodeStatus::SUCCESS;
  } else {
    return BT::NodeStatus::FAILURE;
  }
  return BT::NodeStatus::SUCCESS;
}

}  // namespace grab2_behavior_tree

#include "behaviortree_ros2/plugins.hpp"
CreateRosNodePlugin(grab2_behavior_tree::ReachObject, "ReachObject")  // NOLINT
