// Copyright (c) 2025, ElSayed ElSheikh

#ifndef GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__PLAN_HPP_
#define GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__PLAN_HPP_

#include <string>
#include "behaviortree_ros2/bt_action_node.hpp"

#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "trajectory_msgs/msg/joint_trajectory.hpp"
#include "grab2_msgs/action/compute_plan_to_pose.hpp"

#include "grab2_behavior_tree/utils.hpp"

namespace grab2_behavior_tree
{

using PlanToGoal = grab2_msgs::action::ComputePlanToPose;

class Plan : public BT::RosActionNode<PlanToGoal>
{
public:
  explicit Plan(
    const std::string & name,
    const BT::NodeConfig & conf,
    const BT::RosNodeParams & params
  );

  static BT::PortsList providedPorts()
  {
    return providedBasicPorts(
      {
        BT::InputPort<geometry_msgs::msg::PoseStamped>("target_ik"),
        BT::OutputPort<trajectory_msgs::msg::JointTrajectory>("trajectory")
      }
    );
  }

  bool setGoal(BT::RosActionNode<PlanToGoal>::Goal & goal) override;
  BT::NodeStatus onResultReceived(const WrappedResult & wr) override;
};

}  // namespace grab2_behavior_tree

#endif  // GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__PLAN_HPP_
