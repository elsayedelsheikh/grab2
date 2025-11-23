// Copyright (c) 2025, ElSayed ElSheikh

#ifndef GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__GET_GRASP_HARDCODED_HPP_
#define GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__GET_GRASP_HARDCODED_HPP_

#include <string>
#include <vector>

#include "behaviortree_cpp/bt_factory.h"
#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "grab2_behavior_tree/utils.hpp"

namespace grab2_behavior_tree
{

class GetGraspHardcoded : public BT::SyncActionNode
{
public:
  explicit GetGraspHardcoded(
    const std::string & name,
    const BT::NodeConfig & conf
  );

  static BT::PortsList providedPorts()
  {
    return
      {
        BT::OutputPort<geometry_msgs::msg::PoseStamped>("pregrasp"),
        BT::OutputPort<geometry_msgs::msg::PoseStamped>("grasp")
      }
    ;
  }
  BT::NodeStatus tick() override;

private:
  static int counter_;
  std::vector<geometry_msgs::msg::PoseStamped> grasp_poses_;
};

}  // namespace grab2_behavior_tree

#endif  // GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__GET_GRASP_HARDCODED_HPP_
