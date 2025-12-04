// Copyright (c) 2025, ElSayed ElSheikh

#include "grab2_behavior_tree/plugins/action/follow_joint_trajectory.hpp"

namespace grab2_behavior_tree
{
FollowJointTrajectoryAction::FollowJointTrajectoryAction(
  const std::string & name,
  const BT::NodeConfig & conf,
  const BT::RosNodeParams & params
)
: BT::RosActionNode<ActionMsg>(name, conf, params)
{}

bool
FollowJointTrajectoryAction::setGoal(BT::RosActionNode<ActionMsg>::Goal & goal)
{
  getInput("trajectory", goal.trajectory);
  RCLCPP_INFO(
    logger(), "[%s] Sending trajectory with %zu points",
    name().c_str(),
    goal.trajectory.points.size()
  );
  return true;
}

BT::NodeStatus
FollowJointTrajectoryAction::onResultReceived(const WrappedResult & wr)
{
  if (wr.result->error_code == wr.result->SUCCESSFUL) {
    RCLCPP_INFO(
      logger(), "[%s] Execution %s",
      name().c_str(),
      colorize("SUCCESS", AnsiColor::GREEN).c_str()
    );
    return BT::NodeStatus::SUCCESS;
  }
  return BT::NodeStatus::FAILURE;
}
void
FollowJointTrajectoryAction::onHalt()
{
  RCLCPP_INFO(
    logger(), "[%s] Execution %s",
    name().c_str(),
    colorize("Stop", AnsiColor::YELLOW).c_str()
  );
}

}  // namespace grab2_behavior_tree

BT_REGISTER_NODES(factory)
{
  BT::NodeBuilder builder =
    [](const std::string & name, const BT::NodeConfiguration & config)
    {
      BT::RosNodeParams params;
      params.nh = config.blackboard->get<rclcpp::Node::SharedPtr>("node");
      params.default_port_value = "follow_joint_trajectory";
      params.server_timeout= config.blackboard->get<std::chrono::milliseconds>("server_timeout");
      params.wait_for_server_timeout = config.blackboard->get<std::chrono::milliseconds>("wait_for_service_timeout");

      return std::make_unique<grab2_behavior_tree::FollowJointTrajectoryAction>(
        name, config, params);
    };

  factory.registerBuilder<grab2_behavior_tree::FollowJointTrajectoryAction>(
    "FollowJointTrajectory", builder);
}
