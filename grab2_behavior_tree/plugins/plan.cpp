// Copyright (c) 2025, ElSayed ElSheikh

#include "grab2_behavior_tree/plan.hpp"

namespace grab2_behavior_tree
{
Plan::Plan(
  const std::string & name,
  const BT::NodeConfig & conf,
  const BT::RosNodeParams & params
)
: BT::RosActionNode<PlanToGoal>(name, conf, params)
{}

bool
Plan::setGoal(BT::RosActionNode<PlanToGoal>::Goal & goal)
{
  // Set Header
  goal.header.stamp = now();
  goal.header.frame_id = "panda_link0";

  // Set Goal Pose
  getInput("target_ik", goal.goal_pose);

  RCLCPP_DEBUG(logger(), "Goal Frame: [%s]", goal.goal_pose.header.frame_id.c_str());
  RCLCPP_DEBUG(logger(), "Goal Position (x): [%f]", goal.goal_pose.pose.position.x);
  RCLCPP_DEBUG(logger(), "Goal Position (y): [%f]", goal.goal_pose.pose.position.y);
  RCLCPP_DEBUG(logger(), "Goal Position (z): [%f]", goal.goal_pose.pose.position.z);

  return true;
}

BT::NodeStatus
Plan::onResultReceived(const WrappedResult & wr)
{
  // wr.result->error_code == wr.result-> SUCCESSFUL
  if (wr.code == rclcpp_action::ResultCode::SUCCEEDED) {
    RCLCPP_INFO(logger(), "[%s] Planning SUCCESS", name().c_str());
    setOutput("trajectory", wr.result->trajectory);
    return BT::NodeStatus::SUCCESS;
  } else {
    return BT::NodeStatus::FAILURE;
  }
  return BT::NodeStatus::SUCCESS;
}

}  // namespace grab2_behavior_tree

#include "behaviortree_ros2/plugins.hpp"
CreateRosNodePlugin(grab2_behavior_tree::Plan, "Plan")  // NOLINT
