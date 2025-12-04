// Copyright (c) 2025, ElSayed ElSheikh

#include "grab2_behavior_tree/plugins/action/reach_object.hpp"

namespace grab2_behavior_tree
{
ReachObjectAction::ReachObjectAction(
  const std::string & name,
  const BT::NodeConfig & conf,
  const BT::RosNodeParams & params
)
: BT::RosActionNode<ActionMsg>(name, conf, params)
{}

bool
ReachObjectAction::setGoal(BT::RosActionNode<ActionMsg>::Goal & goal)
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
ReachObjectAction::onResultReceived(const WrappedResult & wr)
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

BT_REGISTER_NODES(factory)
{
  BT::NodeBuilder builder =
    [](const std::string & name, const BT::NodeConfiguration & config)
    {
      BT::RosNodeParams params;
      params.nh = config.blackboard->get<rclcpp::Node::SharedPtr>("node");
      params.default_port_value = "reach_object";
      params.server_timeout= config.blackboard->get<std::chrono::milliseconds>("server_timeout");
      params.wait_for_server_timeout = config.blackboard->get<std::chrono::milliseconds>("wait_for_service_timeout");

      return std::make_unique<grab2_behavior_tree::ReachObjectAction>(
        name, config, params);
    };

  factory.registerBuilder<grab2_behavior_tree::ReachObjectAction>(
    "ReachObject", builder);
}
