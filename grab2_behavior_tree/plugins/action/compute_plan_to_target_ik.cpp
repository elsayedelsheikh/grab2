// Copyright (c) 2025, ElSayed ElSheikh

#include "grab2_behavior_tree/plugins/action/compute_plan_to_target_ik.hpp"

namespace grab2_behavior_tree
{
ComputePlanToTargetIKAction::ComputePlanToTargetIKAction(
  const std::string & name,
  const BT::NodeConfig & conf,
  const BT::RosNodeParams & params
)
: BT::RosActionNode<ActionMsg>(name, conf, params)
{}

bool
ComputePlanToTargetIKAction::setGoal(BT::RosActionNode<ActionMsg>::Goal & goal)
{
  // Set Goal Pose
  getInput("target_ik", goal.target_pose);
  if (!goal.target_pose.header.frame_id.empty()) {
    RCLCPP_INFO(
      logger(), "Received target IK with frame id: [%s]",
      goal.target_pose.header.frame_id.c_str());
  }

  RCLCPP_DEBUG(logger(), "TargetIK Frame: [%s]", goal.target_pose.header.frame_id.c_str());
  RCLCPP_DEBUG(logger(), "TargetIK Pose.x: [%f]", goal.target_pose.pose.position.x);
  RCLCPP_DEBUG(logger(), "TargetIK Pose.y: [%f]", goal.target_pose.pose.position.y);
  RCLCPP_DEBUG(logger(), "TargetIK Pose.z: [%f]", goal.target_pose.pose.position.z);

  return true;
}

BT::NodeStatus
ComputePlanToTargetIKAction::onResultReceived(const WrappedResult & wr)
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

BT_REGISTER_NODES(factory)
{
  BT::NodeBuilder builder =
    [](const std::string & name, const BT::NodeConfiguration & config)
    {
      BT::RosNodeParams params;
      params.nh = config.blackboard->get<rclcpp::Node::SharedPtr>("node");
      params.default_port_value = "compute_plan_to_target_ik";
      params.server_timeout = config.blackboard->get<std::chrono::milliseconds>("server_timeout");
      params.wait_for_server_timeout =
        config.blackboard->get<std::chrono::milliseconds>("wait_for_service_timeout");

      return std::make_unique<grab2_behavior_tree::ComputePlanToTargetIKAction>(
        name, config, params);
    };

  factory.registerBuilder<grab2_behavior_tree::ComputePlanToTargetIKAction>(
    "ComputePlanToTargetIK", builder);
}
