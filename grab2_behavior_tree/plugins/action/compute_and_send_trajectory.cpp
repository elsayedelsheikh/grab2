// Copyright (c) 2025, Zaynab Ahmed

#include "grab2_behavior_tree/plugins/action/compute_and_send_trajectory.hpp"

namespace grab2_behavior_tree
{

ComputeAndSendTrajectory::ComputeAndSendTrajectory(
  const std::string & name,
  const BT::NodeConfig & conf,
  const BT::RosNodeParams & params)
: BT::RosActionNode<ActionToJoint>(name, conf, params)
{}

bool ComputeAndSendTrajectory::setGoal(BT::RosActionNode<ActionToJoint>::Goal & goal)
{
  getInput("target_joints", goal.target_joints);
  return true;
}

BT::NodeStatus ComputeAndSendTrajectory::onResultReceived(
    const WrappedResult & wr)
{
  if (wr.result->error_code == wr.result->SUCCESSFUL) {
    config().blackboard->set("planned_trajectory", wr.result->trajectory);
    return BT::NodeStatus::SUCCESS;
  }
  return BT::NodeStatus::FAILURE;
}

void ComputeAndSendTrajectory::onHalt()
{
  RCLCPP_INFO(logger(), "[%s] Halting", name().c_str());
}

}  // namespace grab2_behavior_tree

BT_REGISTER_NODES(factory)
{
  BT::NodeBuilder builder =
      [](const std::string & name, const BT::NodeConfiguration & config)
      {
        BT::RosNodeParams params;
        params.nh = config.blackboard->get<rclcpp::Node::SharedPtr>("node");
        params.server_timeout = config.blackboard->get<std::chrono::milliseconds>("server_timeout");
        params.wait_for_server_timeout =
            config.blackboard->get<std::chrono::milliseconds>("wait_for_service_timeout");

        return std::make_unique<grab2_behavior_tree::ComputeAndSendTrajectory>(
            name, config, params);
      };

  factory.registerBuilder<grab2_behavior_tree::ComputeAndSendTrajectory>(
      "ComputeAndSendTrajectory", builder);
}
