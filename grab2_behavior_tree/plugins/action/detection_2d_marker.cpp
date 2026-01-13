// Copyright (c) 2026, Zaynap Ahmad
#include "grab2_behavior_tree/plugins/action/detection_2d_marker.hpp"
#include <cmath>

namespace grab2_behavior_tree
{

Detect2DMarker::Detect2DMarker(
  const std::string & name,
  const BT::NodeConfig & conf,
  const BT::RosNodeParams & params)
: BT::RosTopicSubNode<vision_msgs::msg::Detection2DArray>(name, conf, params){}
BT::NodeStatus Detect2DMarker::onTick(
  const std::shared_ptr<vision_msgs::msg::Detection2DArray> & last_msg)
{
  if (!last_msg || last_msg->detections.empty()) {
    RCLCPP_WARN(logger(), "[%s] No 2D markers detected", name().c_str());
    return BT::NodeStatus::FAILURE;
  }

  double min_dist = std::numeric_limits<double>::max();
  vision_msgs::msg::Detection2D nearest;

  for (const auto & det : last_msg->detections)
  {
    double x = det.bbox.center.position.x;
    double y = det.bbox.center.position.y;

    double dist = std::sqrt(x * x + y * y);

    if (dist < min_dist) {
      min_dist = dist;
      nearest = det;
    }
  }

  geometry_msgs::msg::Point center;
  center.x = nearest.bbox.center.position.x;
  center.y = nearest.bbox.center.position.y;
  center.z = 0.0;
  std::string marker_id = nearest.results[0].hypothesis.class_id;

    setOutput("marker_id", marker_id);
  setOutput("center", center);
  setOutput("frame_id", last_msg->header.frame_id);

  RCLCPP_INFO(logger(), "[%s] Nearest marker id: %s",
              name().c_str(), marker_id.c_str());

  return BT::NodeStatus::SUCCESS;
}

}  // namespace grab2_behavior_tree

#include "behaviortree_ros2/plugins.hpp"
CreateRosNodePlugin(grab2_behavior_tree::Detect2DMarker, "Detect2DMarker")
