#ifndef GRAB2_BEHAVIOR_TREE__GET_GRASP_HPP_
#define GRAB2_BEHAVIOR_TREE__GET_GRASP_HPP_

#include "behaviortree_cpp/bt_factory.h"

#include "geometry_msgs/msg/pose.hpp"

#include "grab2_behavior_tree/utils.hpp"

namespace grab2_behavior_tree
{

class GetGrasp: public BT::SyncActionNode
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
        BT::OutputPort<geometry_msgs::msg::Pose>("pregrasp"),
        BT::OutputPort<geometry_msgs::msg::Pose>("grasp")
      }
    ;
  }
  BT::NodeStatus tick() override;

private:
  static int counter_;
  std::vector<geometry_msgs::msg::Pose> grasp_poses_;
};

} // namespace grab2_behavior_tree

#endif // GRAB2_BEHAVIOR_TREE__GET_GRASP_HPP_

