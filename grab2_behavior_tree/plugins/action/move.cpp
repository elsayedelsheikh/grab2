// Copyright (c) 2025, ElSayed ElSheikh

#include "grab2_behavior_tree/plugins/action/move.hpp"

namespace grab2_behavior_tree
{
Move::Move(
  const std::string & name,
  const BT::NodeConfig & conf,
  const BT::RosNodeParams & params
)
: BT::RosActionNode<FollowTrajectory>(name, conf, params)
{}

bool
Move::setGoal(BT::RosActionNode<FollowTrajectory>::Goal & goal)
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
Move::onResultReceived(const WrappedResult & wr)
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
Move::onHalt()
{
  RCLCPP_INFO(
    logger(), "[%s] Execution %s",
    name().c_str(),
    colorize("Stop", AnsiColor::YELLOW).c_str()
  );
}

}  // namespace grab2_behavior_tree

#include "behaviortree_ros2/plugins.hpp"
CreateRosNodePlugin(grab2_behavior_tree::Move, "Move")  // NOLINT
