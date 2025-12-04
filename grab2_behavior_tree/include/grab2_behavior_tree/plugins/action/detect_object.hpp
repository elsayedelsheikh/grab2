// Copyright (c) 2025, ElSayed ElSheikh

#ifndef GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__DETECT_OBJECT_HPP_
#define GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__DETECT_OBJECT_HPP_

#include <string>
#include <memory>
#include <chrono>
#include <cmath>  // for M_PI

#include "behaviortree_cpp/bt_factory.h"
#include "behaviortree_ros2/ros_node_params.hpp"
#include "behaviortree_ros2/bt_topic_sub_node.hpp"

#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "vision_msgs/msg/detection3_d.hpp"
#include "vision_msgs/msg/detection3_d_array.hpp"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"

namespace grab2_behavior_tree
{


class DetectObject : public BT::RosTopicSubNode<vision_msgs::msg::Detection3DArray>
{
public:
  explicit DetectObject(
    const std::string & name,
    const BT::NodeConfig & conf,
    const BT::RosNodeParams & params
  );

  static BT::PortsList providedPorts()
  {
    return
      {
        BT::OutputPort<std::string>("class", "Detected object class_id"),
        BT::OutputPort<geometry_msgs::msg::PoseStamped>("pose", "Detected object pose")
      };
  }

  BT::NodeStatus onTick(const std::shared_ptr<vision_msgs::msg::Detection3DArray> & last_msg)
  override;
};

}  // namespace grab2_behavior_tree

#endif  // GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__DETECT_OBJECT_HPP_
