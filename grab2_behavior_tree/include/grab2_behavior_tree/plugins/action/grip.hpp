// Copyright (c) 2025, ElSayed ElSheikh

#ifndef GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__GRIP_HPP_
#define GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__GRIP_HPP_

#include <string>
#include <memory>
#include "behaviortree_ros2/bt_action_node.hpp"

#include "control_msgs/action/gripper_command.hpp"

#include "grab2_behavior_tree/utils.hpp"

namespace grab2_behavior_tree
{

using GripperCommand = control_msgs::action::GripperCommand;

class Grip : public BT::RosActionNode<GripperCommand>
{
public:
  explicit Grip(
    const std::string & name,
    const BT::NodeConfig & conf,
    const BT::RosNodeParams & params);

  static BT::PortsList providedPorts()
  {
    return providedBasicPorts(
      {
        BT::InputPort<double>("pose", "0.04", "Double: Default value is (0.04): open")
      });
  }

  bool setGoal(BT::RosActionNode<GripperCommand>::Goal & goal) override;
  BT::NodeStatus onResultReceived(const WrappedResult & wr) override;
  BT::NodeStatus onFeedback(const std::shared_ptr<const Feedback> feedback) override;
};

}  // namespace grab2_behavior_tree

#endif  // GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__GRIP_HPP_
