// Copyright (c) 2025, ElSayed ElSheikh

#include "grab2_behavior_tree/plugins/action/detect_object.hpp"

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

BT_REGISTER_NODES(factory)
{
  BT::NodeBuilder builder =
    [](const std::string & name, const BT::NodeConfiguration & config)
    {
      BT::RosNodeParams params;
      params.nh = config.blackboard->get<rclcpp::Node::SharedPtr>("node");
      params.default_port_value = "detect_bbox_3d";
      params.server_timeout= config.blackboard->get<std::chrono::milliseconds>("server_timeout");
      params.wait_for_server_timeout = config.blackboard->get<std::chrono::milliseconds>("wait_for_service_timeout");

      return std::make_unique<grab2_behavior_tree::DetectObject>(
        name, config, params);
    };

  factory.registerBuilder<grab2_behavior_tree::DetectObject>(
    "DetectObject", builder);
}
