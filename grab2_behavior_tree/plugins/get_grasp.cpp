// Copyright (c) 2025, ElSayed ElSheikh

#include <cmath>  // for M_PI
#include "grab2_behavior_tree/get_grasp.hpp"

#include "tf2/utils.hpp"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"

namespace grab2_behavior_tree
{

GetGrasp::GetGrasp(
  const std::string & name,
  const BT::NodeConfig & conf
)
: BT::SyncActionNode(name, conf)
{
}

BT::NodeStatus
GetGrasp::tick()
{
  // Get object pose
  geometry_msgs::msg::PoseStamped object_pose;
  getInput("object_pose", object_pose);

  // Generate Grasp Pose
  // TODO(ElSayed): Get Grasp pose from a yaml file that corresponds to the object type
  geometry_msgs::msg::PoseStamped grasp_pose(object_pose);

  // Position
  grasp_pose.pose.position.z += 0.12;

  // Orientation
  double yaw = tf2::getYaw(grasp_pose.pose.orientation);
  tf2::Quaternion target_quat;
  target_quat.setRPY(M_PI, 0, yaw);
  grasp_pose.pose.orientation = tf2::toMsg(target_quat);

  // Set grasp pose
  setOutput("grasp", grasp_pose);

  // Set pre-grasp pose
  grasp_pose.pose.position.z += 0.1;
  setOutput("pregrasp", grasp_pose);


  return BT::NodeStatus::SUCCESS;
}

}  // namespace grab2_behavior_tree

BT_REGISTER_NODES(factory)
{
  factory.registerNodeType<grab2_behavior_tree::GetGrasp>("GetGrasp");
}
