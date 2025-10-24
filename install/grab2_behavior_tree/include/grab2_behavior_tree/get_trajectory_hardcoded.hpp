// Copyright (c) 2025, ElSayed ElSheikh

#ifndef GRAB2_BEHAVIOR_TREE__GET_TRAJECTORY_HARDCODED_HPP_
#define GRAB2_BEHAVIOR_TREE__GET_TRAJECTORY_HARDCODED_HPP_

#include <string>
#include "behaviortree_cpp/bt_factory.h"
#include "trajectory_msgs/msg/joint_trajectory.hpp"

namespace grab2_behavior_tree
{

class SetJointTrajectoryGoal : public BT::SyncActionNode
{
public:
  explicit SetJointTrajectoryGoal(
    const std::string & name,
    const BT::NodeConfig & conf
  );

  static BT::PortsList providedPorts()
  {
    return
      {
        BT::OutputPort<trajectory_msgs::msg::JointTrajectory>("trajectory")
      }
    ;
  }
  BT::NodeStatus tick() override;
};

}  // namespace grab2_behavior_tree

#endif  // GRAB2_BEHAVIOR_TREE__GET_TRAJECTORY_HARDCODED_HPP_
