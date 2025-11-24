// Copyright (c) 2025, ElSayed ElSheikh

#ifndef GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__COMPUTE_TOP_DOWN_GRASP_HPP_
#define GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__COMPUTE_TOP_DOWN_GRASP_HPP_

#include <string>

#include "behaviortree_cpp/bt_factory.h"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "grab2_behavior_tree/utils.hpp"

namespace grab2_behavior_tree
{

class ComputeTopDownGrasp : public BT::SyncActionNode
{
public:
  explicit ComputeTopDownGrasp(
    const std::string & name,
    const BT::NodeConfig & conf
  );

  static BT::PortsList providedPorts()
  {
    return
      {
        BT::InputPort<geometry_msgs::msg::PoseStamped>("object_pose"),
        BT::InputPort<double>("grasp_offset", 0.12, "Distance above the object for grasp pose"),
        BT::InputPort<double>("pregrasp_offset", 0.1, "Vertical offset for pregrasp pose"),
        BT::OutputPort<geometry_msgs::msg::PoseStamped>("grasp"),
        BT::OutputPort<geometry_msgs::msg::PoseStamped>("pregrasp")
      }
    ;
  }
  BT::NodeStatus tick() override;
};

}  // namespace grab2_behavior_tree

#endif  // GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__COMPUTE_TOP_DOWN_GRASP_HPP_
