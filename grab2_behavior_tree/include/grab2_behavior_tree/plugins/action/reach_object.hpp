// Copyright (c) 2025, ElSayed ElSheikh

#ifndef GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__REACH_OBJECT_HPP_
#define GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__REACH_OBJECT_HPP_

#include <string>
#include "behaviortree_ros2/bt_action_node.hpp"

#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "trajectory_msgs/msg/joint_trajectory.hpp"
#include "grab2_msgs/action/reach_object.hpp"

#include "grab2_behavior_tree/utils.hpp"

namespace grab2_behavior_tree
{

using ReachObjectAction = grab2_msgs::action::ReachObject;

class ReachObject : public BT::RosActionNode<ReachObjectAction>
{
public:
  explicit ReachObject(
    const std::string & name,
    const BT::NodeConfig & conf,
    const BT::RosNodeParams & params
  );

  static BT::PortsList providedPorts()
  {
    return providedBasicPorts(
      {
        BT::InputPort<geometry_msgs::msg::PoseStamped>("target_pose"),
      }
    );
  }

  bool setGoal(BT::RosActionNode<ReachObjectAction>::Goal & goal) override;
  BT::NodeStatus onResultReceived(const WrappedResult & wr) override;
};

}  // namespace grab2_behavior_tree

#endif  // GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__REACH_OBJECT_HPP_
