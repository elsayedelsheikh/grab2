// Copyright (c) 2025, ElSayed ElSheikh

#ifndef GRAB2_BEHAVIOR_TREE__GET_GRASP_HPP_
#define GRAB2_BEHAVIOR_TREE__GET_GRASP_HPP_

#include <string>

#include "behaviortree_cpp/bt_factory.h"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "grab2_behavior_tree/utils.hpp"

namespace grab2_behavior_tree
{

class GetGrasp : public BT::SyncActionNode
{
public:
  explicit GetGrasp(
    const std::string & name,
    const BT::NodeConfig & conf
  );

  static BT::PortsList providedPorts()
  {
    return
      {
        BT::InputPort<geometry_msgs::msg::PoseStamped>("object_pose"),
        BT::OutputPort<geometry_msgs::msg::PoseStamped>("pregrasp"),
        BT::OutputPort<geometry_msgs::msg::PoseStamped>("grasp")
      }
    ;
  }
  BT::NodeStatus tick() override;
};

}  // namespace grab2_behavior_tree

#endif  // GRAB2_BEHAVIOR_TREE__GET_GRASP_HPP_
