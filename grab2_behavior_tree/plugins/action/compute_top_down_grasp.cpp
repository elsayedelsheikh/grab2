// Copyright (c) 2025, ElSayed ElSheikh

#include <cmath>  // for M_PI
#include "grab2_behavior_tree/plugins/action/compute_top_down_grasp.hpp"

#include "tf2/utils.hpp"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"

namespace grab2_behavior_tree
{

ComputeTopDownGrasp::ComputeTopDownGrasp(
  const std::string & name,
  const BT::NodeConfig & conf
)
: BT::SyncActionNode(name, conf)
{
}

BT::NodeStatus
ComputeTopDownGrasp::tick()
{
  // Get object pose
  geometry_msgs::msg::PoseStamped object_pose;
  if (!getInput("object_pose", object_pose)) {
    throw BT::RuntimeError("missing required input [object_pose]");
  }

  // Get offsets
  double grasp_offset, pregrasp_offset;
  getInput("grasp_offset", grasp_offset);
  getInput("pregrasp_offset", pregrasp_offset);

  // Generate Grasp Pose
  geometry_msgs::msg::PoseStamped grasp_pose(object_pose);
  grasp_pose.pose.position.z += grasp_offset;

  // Orientation
  tf2::Quaternion target_quat;
  double yaw = tf2::getYaw(grasp_pose.pose.orientation);
  target_quat.setRPY(M_PI, 0, yaw);
  grasp_pose.pose.orientation = tf2::toMsg(target_quat);

  // Set grasp pose
  setOutput("grasp", grasp_pose);

  // Set pre-grasp pose
  grasp_pose.pose.position.z += pregrasp_offset;
  setOutput("pregrasp", grasp_pose);

  return BT::NodeStatus::SUCCESS;
}

}  // namespace grab2_behavior_tree

BT_REGISTER_NODES(factory)
{
  factory.registerNodeType<grab2_behavior_tree::ComputeTopDownGrasp>("ComputeTopDownGrasp");
}
