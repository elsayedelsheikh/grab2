#include "builtin_interfaces/msg/duration.hpp"
#include "trajectory_msgs/msg/joint_trajectory_point.hpp"
#include "grab2_behavior_tree/set_joint_trajectory_goal.hpp"

namespace grab2_behavior_tree
{

SetJointTrajectoryGoal::SetJointTrajectoryGoal(
  const std::string & name,
  const BT::NodeConfig & conf
)
: BT::SyncActionNode(name, conf)
{

}

BT::NodeStatus
SetJointTrajectoryGoal::tick()
{
  // Initialize JointTrajectory
  trajectory_msgs::msg::JointTrajectory jt;
  jt.header.frame_id = "panda_link0";
  jt.joint_names = {
    "panda_joint1",
    "panda_joint2",
    "panda_joint3",
    "panda_joint4",
    "panda_joint5",
    "panda_joint6",
    "panda_joint7"
  };

  // Initialize Duration
  builtin_interfaces::msg::Duration duration;

  // Initialize Point
  trajectory_msgs::msg::JointTrajectoryPoint pt;
  pt.positions = {
    0.0,
    -0.7841,
    0.0,
    -2.3571,
    0.0,
    1.787,
    0.7672
  };
  
  // 1st Point
  duration.sec = 1.0;
  pt.positions[0] = 1.57;
  pt.time_from_start = duration;
  jt.points.push_back(pt);
  
  // Second Point
  duration.sec = 3.0;
  pt.positions[0] = 0.0;
  pt.time_from_start = duration;
  jt.points.push_back(pt);

  // Set output
  setOutput("trajectory", jt);

  return BT::NodeStatus::SUCCESS;
}

} // namespace grab2_behavior_tree

BT_REGISTER_NODES(factory)
{
  factory.registerNodeType<grab2_behavior_tree::SetJointTrajectoryGoal>("SetJointTrajectoryGoal");
}
