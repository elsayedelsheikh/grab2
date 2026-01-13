// Copyright (c) 2026, Zaynap Ahmad

#ifndef GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__DETECTION_2D_MARKER_HPP_
#define GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__DETECTION_2D_MARKER_HPP_

#include <string>
#include <memory>
#include "behaviortree_ros2/bt_topic_sub_node.hpp"
#include "vision_msgs/msg/detection2_d_array.hpp"
#include "geometry_msgs/msg/point.hpp"

namespace grab2_behavior_tree
{

class Detect2DMarker
  : public BT::RosTopicSubNode<vision_msgs::msg::Detection2DArray>
{
public:
  Detect2DMarker(
    const std::string & name,
    const BT::NodeConfig & conf,
    const BT::RosNodeParams & params);

  static BT::PortsList providedPorts()
  {
    return {
      BT::OutputPort<std::string>("marker_id"),
      BT::OutputPort<geometry_msgs::msg::Point>("center"),
      BT::OutputPort<std::string>("frame_id")
    };
  }

  BT::NodeStatus onTick(
    const std::shared_ptr<vision_msgs::msg::Detection2DArray> & last_msg) override;
};

}  // namespace grab2_behavior_tree

#endif  // GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__DETECTION_2D_MARKER_HPP_
