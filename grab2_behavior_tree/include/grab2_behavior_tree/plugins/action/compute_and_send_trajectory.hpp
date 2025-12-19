// Copyright (c) 2025, Zaynab Ahmed
#pragma once

#include <memory>
#include <string>

#include "behaviortree_cpp/bt_factory.h"
#include "behaviortree_ros2/bt_action_node.hpp"
#include "behaviortree_ros2/ros_node_params.hpp"
#include "rclcpp/rclcpp.hpp"
#include "grab2_msgs/action/compute_plan_to_joint.hpp"

#include "grab2_behavior_tree/utils.hpp"


namespace grab2_behavior_tree
{

using ActionToJoint = grab2_msgs::action::ComputePlanToJoint;


class ComputeAndSendTrajectory : public BT::RosActionNode<ActionToJoint>
{
public:
    ComputeAndSendTrajectory(
        const std::string & name,
        const BT::NodeConfig & conf,
        const BT::RosNodeParams & params);

    bool setGoal(Goal & goal) override;

    BT::NodeStatus onResultReceived(const WrappedResult & wr) override;

    void onHalt() override;
    // BT::NodeStatus tick() override; // for testing


    static BT::PortsList providedPorts()
    {
        return {
            BT::InputPort<trajectory_msgs::msg::JointTrajectory>("target_joints", "Target joint positions"),
            BT::OutputPort<trajectory_msgs::msg::JointTrajectory>("planned_trajectory", "Trajectory computed by planner")
        };
    }
};

}  // namespace grab2_behavior_tree
