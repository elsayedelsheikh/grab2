// Copyright (c) 2025, ElSayed ElSheikh

#ifndef GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__GET_TRAJECTORY_FROM_YAML_HPP_
#define GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__GET_TRAJECTORY_FROM_YAML_HPP_

#include <string>
#include <unordered_map>
#include <filesystem>

#include "yaml-cpp/yaml.h"
#include "behaviortree_cpp/bt_factory.h"

#include "rclcpp/rclcpp.hpp"
#include "ament_index_cpp/get_package_share_directory.hpp"

#include "builtin_interfaces/msg/duration.hpp"
#include "trajectory_msgs/msg/joint_trajectory.hpp"
#include "trajectory_msgs/msg/joint_trajectory_point.hpp"

namespace grab2_behavior_tree
{

class GetTrajectoryFromYAML : public BT::SyncActionNode
{
public:
  explicit GetTrajectoryFromYAML(
    const std::string & name,
    const BT::NodeConfig & conf
  );

  static BT::PortsList providedPorts()
  {
    return
      {
        BT::InputPort<std::string>(
          "trajectory_prefix",
          "traj", "Trajectory prefix for the loaded joint trajectories"),
        BT::InputPort<std::string>(
          "package_name", "Package containing the config_file"),
        BT::InputPort<std::string>(
          "config_file",
          "Path to the config file inside the package's config/ directory"),
      }
    ;
  }
  BT::NodeStatus tick() override;

private:
  void loadTrajectoriesFromYAML(const std::string & config_file);

  bool trajectories_loaded_;
  std::string last_config_file_;
  std::string trajectory_prefix_;
};

}  // namespace grab2_behavior_tree

#endif  // GRAB2_BEHAVIOR_TREE__PLUGINS__ACTION__GET_TRAJECTORY_FROM_YAML_HPP_
