#pragma once

#include "behaviortree_cpp/condition_node.h"
#include "behaviortree_ros2/bt_topic_sub_node.hpp"  // For BT::RosNodeParams
#include "sensor_msgs/msg/joint_state.hpp"
#include "rclcpp/rclcpp.hpp"

namespace grab2_behavior_tree
{

class CheckGripperHasObject : public BT::ConditionNode
{
public:
  CheckGripperHasObject(
    const std::string& name,
    const BT::NodeConfig& config,
    const BT::RosNodeParams& params);

  static BT::PortsList providedPorts();
  BT::NodeStatus tick() override;

private:
  void jointStateCallback(const sensor_msgs::msg::JointState::SharedPtr msg);
  double getGripperPosition();
  double getGripperEffort();

  BT::RosNodeParams params_; 

  rclcpp::Node::SharedPtr node_;
  rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_state_sub_;
  sensor_msgs::msg::JointState::SharedPtr latest_joint_state_;
  double force_threshold_ = 0.5;
  double position_threshold_ = 0.01;
};

}  // namespace grab2_behavior_tree