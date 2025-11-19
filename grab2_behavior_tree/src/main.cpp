// Copyright (c) 2025, ElSayed ElSheikh

#include "rclcpp/rclcpp.hpp"
#include "behaviortree_cpp/bt_factory.h"  // BehaviorTreeFactory
#include "behaviortree_cpp/utils/shared_library.h"  // loader
#include "behaviortree_cpp/loggers/groot2_publisher.h"

#include "behaviortree_ros2/plugins.hpp"  // RegisterRosNode

BT::NodeStatus SaySomethingSimple(BT::TreeNode & self);

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<rclcpp::Node>("task_planner");

  BT::BehaviorTreeFactory factory;
  BT::SharedLibrary loader;

  // Register Native BT Nodes
  factory.registerFromPlugin(loader.getOSName("grab2_get_grasp"));
  factory.registerFromPlugin(loader.getOSName("grab2_get_grasp_hardcoded"));
  factory.registerFromPlugin(loader.getOSName("grab2_get_trajectory_from_yaml"));

  // Declare Parameters
  node->declare_parameter("behavior_tree", "");
  node->declare_parameter("jc_action", "/panda_arm_controller/follow_joint_trajectory");
  node->declare_parameter("gc_action", "/panda_hand_controller/gripper_cmd");

  // Get Parameters
  std::string jc_action = node->get_parameter("jc_action").as_string();
  std::string gc_action = node->get_parameter("gc_action").as_string();

  // Register ROS2 BT Nodes
  RegisterRosNode(
    factory,
    loader.getOSName("grab2_move"),
    {node, jc_action});
  RegisterRosNode(
    factory,
    loader.getOSName("grab2_grip"),
    {node, gc_action});
  RegisterRosNode(
    factory,
    loader.getOSName("grab2_plan"),
    {node, "/plan_to_goal"});
  RegisterRosNode(
    factory,
    loader.getOSName("grab2_detect_object"),
    {node, "/eef_camera/bbox_3d"});

  // SaySomething BT Node
  BT::PortsList say_something_ports = {BT::InputPort<std::string>("message")};
  factory.registerSimpleAction("SaySomething", SaySomethingSimple, say_something_ports);

  // Create tree
  std::string bt_xml = node->get_parameter("behavior_tree").as_string();
  auto tree = factory.createTreeFromFile(bt_xml);

  BT::Groot2Publisher publisher(tree);  // Port Defaults to 1667

  tree.tickWhileRunning();
  return 0;
}

BT::NodeStatus SaySomethingSimple(BT::TreeNode & self)
{
  auto msg = self.getInput<std::string>("message");
  if (!msg) {
    throw BT::RuntimeError("missing required input [message]: ", msg.error());
  }

  std::cout << "Robot says: " << msg.value() << std::endl;
  return BT::NodeStatus::SUCCESS;
}
