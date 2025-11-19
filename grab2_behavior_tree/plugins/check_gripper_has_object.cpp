#include "grab2_behavior_tree/check_gripper_has_object.hpp"  // Include the header!
#include "behaviortree_cpp/condition_node.h"
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/joint_state.hpp"

namespace grab2_behavior_tree
{

// Constructor definition
CheckGripperHasObject::CheckGripperHasObject(
  const std::string& name,
  const BT::NodeConfig& config,
  const BT::RosNodeParams& params)
  : BT::ConditionNode(name, config), params_(params)  // Now OK
{
  node_ = params.nh.lock();
  if (!node_) {
    throw BT::RuntimeError("CheckGripperHasObject: Missing ROS node handle");
  }

  joint_state_sub_ = node_->create_subscription<sensor_msgs::msg::JointState>(
    "/joint_states", 10,
    std::bind(&CheckGripperHasObject::jointStateCallback, this, std::placeholders::_1)
  );

  getInput("force_threshold", force_threshold_);
  getInput("position_threshold", position_threshold_);
}

// providedPorts
BT::PortsList CheckGripperHasObject::providedPorts()
{
  return {
    BT::InputPort<double>("force_threshold", 0.5, "Force threshold to detect object"),
    BT::InputPort<double>("position_threshold", 0.01, "Minimum gripper opening when holding object"),
    BT::OutputPort<bool>("has_object", "Whether gripper has object")
  };
}

// tick
BT::NodeStatus CheckGripperHasObject::tick()
{
  if (!latest_joint_state_) {
    RCLCPP_WARN(node_->get_logger(), "[%s] No joint state received yet", name().c_str());
    return BT::NodeStatus::FAILURE;
  }

  double gripper_position = getGripperPosition();
  double gripper_effort = getGripperEffort();

  bool has_object = (gripper_position > position_threshold_) && 
                    (gripper_effort > force_threshold_);

  setOutput("has_object", has_object);

  if (has_object) {
    RCLCPP_INFO(node_->get_logger(), 
                "[%s] Object detected: pos=%.3f, effort=%.3f", 
                name().c_str(), gripper_position, gripper_effort);
    return BT::NodeStatus::SUCCESS;
  } else {
    RCLCPP_WARN(node_->get_logger(), 
                "[%s] No object: pos=%.3f, effort=%.3f", 
                name().c_str(), gripper_position, gripper_effort);
    return BT::NodeStatus::FAILURE;
  }
}

// Callback
void CheckGripperHasObject::jointStateCallback(const sensor_msgs::msg::JointState::SharedPtr msg)
{
  latest_joint_state_ = msg;
}

double CheckGripperHasObject::getGripperPosition()
{
  for (size_t i = 0; i < latest_joint_state_->name.size(); ++i) {
    if (latest_joint_state_->name[i].find("finger") != std::string::npos) {
      return latest_joint_state_->position[i];
    }
  }
  return 0.0;
}

double CheckGripperHasObject::getGripperEffort()
{
  for (size_t i = 0; i < latest_joint_state_->name.size(); ++i) {
    if (latest_joint_state_->name[i].find("finger") != std::string::npos) {
      return std::abs(latest_joint_state_->effort[i]);
    }
  }
  return 0.0;
}

} // namespace grab2_behavior_tree

#include "behaviortree_ros2/plugins.hpp"
CreateRosNodePlugin(grab2_behavior_tree::CheckGripperHasObject, "CheckGripperHasObject")