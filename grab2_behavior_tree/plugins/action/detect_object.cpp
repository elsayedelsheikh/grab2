// Copyright (c) 2025, ElSayed ElSheikh

#include <cmath>  // for M_PI
#include "vision_msgs/msg/detection3_d.hpp"
#include "grab2_behavior_tree/plugins/action/detect_object.hpp"

#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"


namespace grab2_behavior_tree
{
DetectObject::DetectObject(
  const std::string & name,
  const BT::NodeConfig & conf,
  const BT::RosNodeParams & params
)
: BT::RosTopicSubNode<vision_msgs::msg::Detection3DArray>(name, conf, params)
{}


BT::NodeStatus
DetectObject::onTick(const std::shared_ptr<vision_msgs::msg::Detection3DArray> & last_msg)
{
  if (last_msg) {
    if (!last_msg->detections.empty()) {
      RCLCPP_INFO(logger(), "[%s] Found toy", name().c_str());
      auto & detection = last_msg->detections.back();
      // Set grasp
      geometry_msgs::msg::PoseStamped target;
      target.header.frame_id = last_msg->header.frame_id;
      target.pose = detection.bbox.center;

      setOutput("class", "car");  // TODO(ElSayed): Use /semantics topic to get class_id
      setOutput("pose", target);
      return BT::NodeStatus::SUCCESS;

    } else {
      RCLCPP_INFO(logger(), "[%s] Can't find any toys", name().c_str());
    }
  }
  return BT::NodeStatus::FAILURE;
}

}  // namespace grab2_behavior_tree

#include "behaviortree_ros2/plugins.hpp"
CreateRosNodePlugin(grab2_behavior_tree::DetectObject, "DetectObject")  // NOLINT
