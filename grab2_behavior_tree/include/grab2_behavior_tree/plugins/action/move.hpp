// Copyright (c) 2025, ElSayed ElSheikh

#ifndef GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__MOVE_HPP_
#define GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__MOVE_HPP_

#include <string>
#include "behaviortree_ros2/bt_action_node.hpp"

#include "trajectory_msgs/msg/joint_trajectory.hpp"
#include "control_msgs/action/follow_joint_trajectory.hpp"

#include "grab2_behavior_tree/utils.hpp"

namespace grab2_behavior_tree
{

using FollowTrajectory = control_msgs::action::FollowJointTrajectory;

class Move : public BT::RosActionNode<FollowTrajectory>
{
public:
  explicit Move(
    const std::string & name,
    const BT::NodeConfig & conf,
    const BT::RosNodeParams & params
  );

  static BT::PortsList providedPorts()
  {
    return providedBasicPorts(
      {
        BT::InputPort<trajectory_msgs::msg::JointTrajectory>("trajectory")
      }
    );
  }

  bool setGoal(BT::RosActionNode<FollowTrajectory>::Goal & goal) override;
  BT::NodeStatus onResultReceived(const WrappedResult & wr) override;

  // Note that cancelGoal() is done automatically.
  void onHalt() override;

  // BT::NodeStatus onFeedback(const std::shared_ptr<const Feedback> /*feedback*/) override
  // {
  //   return BT::NodeStatus::RUNNING;
  // }
};

}  // namespace grab2_behavior_tree

#endif  // GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__MOVE_HPP_
