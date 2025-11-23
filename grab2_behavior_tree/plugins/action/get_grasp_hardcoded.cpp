// Copyright (c) 2025, ElSayed ElSheikh

#include "grab2_behavior_tree/plugins/action/get_grasp_hardcoded.hpp"

namespace grab2_behavior_tree
{

// Initialize counter
int GetGraspHardcoded::counter_ = 0;

GetGraspHardcoded::GetGraspHardcoded(
  const std::string & name,
  const BT::NodeConfig & conf
)
: BT::SyncActionNode(name, conf)
{
  // Cubes
  geometry_msgs::msg::PoseStamped pose_stamped;
  pose_stamped.header.frame_id = "world";

  pose_stamped.pose.position.x = -0.34;
  pose_stamped.pose.position.y = -0.2;
  pose_stamped.pose.position.z = 0.15;
  pose_stamped.pose.orientation.x = 1.0;
  pose_stamped.pose.orientation.y = 0.0;
  pose_stamped.pose.orientation.z = 0.0;
  pose_stamped.pose.orientation.w = 0.0;

  // 1st Cube
  grasp_poses_.push_back(pose_stamped);

  // 2nd Cube
  pose_stamped.pose.position.y += -0.1;
  grasp_poses_.push_back(pose_stamped);

  // 3rd Cube
  pose_stamped.pose.position.y += -0.1;
  grasp_poses_.push_back(pose_stamped);
}

BT::NodeStatus
GetGraspHardcoded::tick()
{
  if (counter_ > 2) {
    return BT::NodeStatus::FAILURE;
  }
  // Set grasp pose
  setOutput("grasp", grasp_poses_[counter_]);

  // Set pregrasp pose
  geometry_msgs::msg::PoseStamped ps(grasp_poses_[counter_]);
  ps.pose.position.z = 0.2;
  setOutput("pregrasp", ps);

  // Increment to next target
  counter_++;

  return BT::NodeStatus::SUCCESS;
}

}  // namespace grab2_behavior_tree

BT_REGISTER_NODES(factory)
{
  factory.registerNodeType<grab2_behavior_tree::GetGraspHardcoded>("GetGraspHardcoded");
}
