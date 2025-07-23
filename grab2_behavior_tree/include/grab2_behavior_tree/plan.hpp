#ifndef GRAB2_BEHAVIOR_TREE__Plan_HPP_
#define GRAB2_BEHAVIOR_TREE__Plan_HPP_

#include "behaviortree_ros2/bt_action_node.hpp"

#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "trajectory_msgs/msg/joint_trajectory.hpp"
#include "grab2_interfaces/action/plan_to_goal.hpp"

#include "grab2_behavior_tree/utils.hpp"

namespace grab2_behavior_tree
{

using PlanToGoal = grab2_interfaces::action::PlanToGoal;

class Plan: public BT::RosActionNode<PlanToGoal>
{
public:
  explicit Plan(
    const std::string & name,
    const BT::NodeConfig & conf,
    const BT::RosNodeParams & params
  );

  static BT::PortsList providedPorts()
  {
    return providedBasicPorts(
      {
        BT::InputPort<geometry_msgs::msg::PoseStamped>("target_ik"),
        BT::OutputPort<trajectory_msgs::msg::JointTrajectory>("trajectory")
      }
    );
  }

  bool setGoal(BT::RosActionNode<PlanToGoal>::Goal & goal) override;
  BT::NodeStatus onResultReceived(const WrappedResult & wr) override;

};

} // namespace grab2_behavior_tree

#endif // GRAB2_BEHAVIOR_TREE__Plan_HPP_