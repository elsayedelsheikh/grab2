#include "grab2_behavior_tree/get_grasp_hardcoded.hpp"

namespace grab2_behavior_tree
{

// Initialize counter
int GetGrasp::counter_ = 0;

GetGrasp::GetGrasp(
  const std::string & name,
  const BT::NodeConfig & conf
)
: BT::SyncActionNode(name, conf)
{
  // Cubes
  geometry_msgs::msg::Pose pose;
  pose.position.x = 0.34;
  pose.position.y = 0.3;
  pose.position.z = 0.15;
  pose.orientation.x = 1.0;
  pose.orientation.y = 0.0;
  pose.orientation.z = 0.0;
  pose.orientation.w = 0.0;
  grasp_poses_.push_back(pose);

  // 2nd Cube
  pose.position.x = 0.24;
  grasp_poses_.push_back(pose);

  // 3rd Cube
  pose.position.x = 0.44;
  grasp_poses_.push_back(pose);
}

BT::NodeStatus
GetGrasp::tick()
{
  if (counter_ > 2) {
    return BT::NodeStatus::FAILURE;
  }
  // Set grasp pose
  setOutput("grasp", grasp_poses_[counter_]);

  // Set pregrasp pose
  geometry_msgs::msg::Pose pose;
  pose = grasp_poses_[counter_];
  pose.position.z = 0.2;
  setOutput("pregrasp", pose);


  // Increment to next target
  counter_++;

  return BT::NodeStatus::SUCCESS;
}

} // namespace grab2_behavior_tree

BT_REGISTER_NODES(factory)
{
  factory.registerNodeType<grab2_behavior_tree::GetGrasp>("GetGraspHardcoded");
}
