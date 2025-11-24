// Copyright (c) 2025, ElSayed ElSheikh

#include "grab2_behavior_tree/plugins/action/grip.hpp"

namespace grab2_behavior_tree
{

Grip::Grip(
  const std::string & name, const BT::NodeConfig & conf,
  const BT::RosNodeParams & params)
: BT::RosActionNode<GripperCommand>(name, conf, params)
{}

bool
Grip::setGoal(BT::RosActionNode<GripperCommand>::Goal & goal)
{
  goal.command.max_effort = 50.0;
  getInput("pose", goal.command.position);
  return true;
}

BT::NodeStatus
Grip::onResultReceived(const WrappedResult & wr)
{
  if (wr.result->reached_goal) {
    RCLCPP_INFO(logger(), "[%s] Gripping SUCCESS", name().c_str());
    return BT::NodeStatus::SUCCESS;
  }
  return BT::NodeStatus::FAILURE;
}

BT::NodeStatus
Grip::onFeedback(const std::shared_ptr<const Feedback> feedback)
{
  RCLCPP_INFO(logger(), "[%s] Grip State:", name().c_str());
  RCLCPP_INFO(logger(), "[%s]   Position: %.3f", name().c_str(), feedback->position);
  RCLCPP_INFO(logger(), "[%s]   Effort: %.3f", name().c_str(), feedback->effort);
  RCLCPP_INFO(logger(), "[%s]   Stalled: %s", name().c_str(), feedback->stalled ? "true" : "false");
  RCLCPP_INFO(
    logger(), "[%s]   Reached Goal: %s",
    name().c_str(), feedback->reached_goal ? "true" : "false");
  return BT::NodeStatus::RUNNING;
}

}  // namespace grab2_behavior_tree

#include "behaviortree_ros2/plugins.hpp"
CreateRosNodePlugin(grab2_behavior_tree::Grip, "Grip");  // NOLINT
