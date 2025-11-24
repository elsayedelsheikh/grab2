// Copyright (c) 2025, ElSayed ElSheikh

#include "grab2_behavior_tree/plugins/action/get_trajectory_from_yaml.hpp"

namespace grab2_behavior_tree
{

GetTrajectoryFromYAML::GetTrajectoryFromYAML(
  const std::string & name,
  const BT::NodeConfig & conf
)
: BT::SyncActionNode(name, conf),
  trajectories_loaded_(false),
  last_config_file_("")
{}

BT::NodeStatus
GetTrajectoryFromYAML::tick()
{
  // Get input ports
  auto config_file = getInput<std::string>("config_file");
  auto package_name = getInput<std::string>("package_name");
  auto trajectory_name = getInput<std::string>("trajectory_name");

  if (!config_file) {
    throw BT::RuntimeError("Missing required input [config_file]: ", config_file.error());
  }

  if (!package_name) {
    throw BT::RuntimeError("Missing required input [package_name]: ", package_name.error());
  }

  if (!trajectory_name) {
    throw BT::RuntimeError("Missing required input [trajectory_name]: ", trajectory_name.error());
  }

  // Resolve full path to config file
  std::string package_share_directory =
    ament_index_cpp::get_package_share_directory(package_name.value());
  std::string full_config_file_path =
    package_share_directory + "/config/" + config_file.value() + ".yaml";

  // Check if file exists
  if (!std::filesystem::exists(full_config_file_path)) {
    throw BT::RuntimeError("Config file '" + full_config_file_path + "' does not exist");
  }

  // Load trajectories from YAML file
  loadTrajectoriesFromYAML(full_config_file_path);

  // Get the requested trajectory
  auto trajectory = getTrajectory(trajectory_name.value());

  // Set timestamp
  // trajectory.header.stamp = rclcpp::Clock().now();

  // Set output
  setOutput("trajectory", trajectory);

  return BT::NodeStatus::SUCCESS;
}

trajectory_msgs::msg::JointTrajectory
GetTrajectoryFromYAML::getTrajectory(const std::string & trajectory_name)
{
  auto it = trajectories_.find(trajectory_name);
  if (it == trajectories_.end()) {
    throw BT::RuntimeError("Trajectory not found: " + trajectory_name);
  }
  return it->second;
}

void
GetTrajectoryFromYAML::loadTrajectoriesFromYAML(const std::string & config_file)
{
  // Only reload if it's a different file
  if (trajectories_loaded_ && config_file == last_config_file_) {
    return;
  }

  trajectories_.clear();

  try {
    YAML::Node config = YAML::LoadFile(config_file);

    if (!config["trajectories"]) {
      throw BT::RuntimeError("YAML file doesn't contain 'trajectories' field");
    }

    for (const auto & traj_node : config["trajectories"]) {
      std::string name = traj_node.first.as<std::string>();
      auto traj_data = traj_node.second;

      trajectory_msgs::msg::JointTrajectory traj_msg;

      // Load frame_id
      if (traj_data["frame_id"]) {
        traj_msg.header.frame_id = traj_data["frame_id"].as<std::string>();
      }

      // Load joint_names
      if (!traj_data["joint_names"]) {
        throw BT::RuntimeError("trajectory '" + name + "' missing joint_names");
      }

      for (const auto & j : traj_data["joint_names"]) {
        traj_msg.joint_names.push_back(j.as<std::string>());
      }

      // Load trajectory points
      if (!traj_data["points"]) {
        throw BT::RuntimeError("trajectory '" + name + "' missing points");
      }

      for (const auto & point_yaml_node : traj_data["points"]) {
        trajectory_msgs::msg::JointTrajectoryPoint traj_pt_msg;

        for (const auto & pos : point_yaml_node["positions"]) {
          traj_pt_msg.positions.push_back(pos.as<double>());
        }

        // Validate positions counts matches joint_names
        if (traj_pt_msg.positions.size() != traj_msg.joint_names.size()) {
          throw BT::RuntimeError(
                  "Position count mismatch in trajectory '" + name + "': " +
                  std::to_string(traj_pt_msg.positions.size()) + " positions for " +
                  std::to_string(traj_msg.joint_names.size()) + " joints"
          );
        }

        if (!point_yaml_node["time_from_start"]) {
          throw BT::RuntimeError("trajectory '" + name + "' point missing time_from_start");
        }

        double time_sec = point_yaml_node["time_from_start"].as<double>();
        traj_pt_msg.time_from_start.sec = static_cast<int32_t>(time_sec);
        traj_pt_msg.time_from_start.nanosec =
          static_cast<int32_t>((time_sec - traj_pt_msg.time_from_start.sec) * 1e-9);

        traj_msg.points.push_back(traj_pt_msg);
      }

      trajectories_[name] = traj_msg;
      RCLCPP_INFO(
        rclcpp::get_logger("GetTrajectoryFromYAML"),
        "Loaded trajectory %s with %zu points",
        name.c_str(), traj_msg.points.size()
      );
    }

    trajectories_loaded_ = true;
    last_config_file_ = config_file;

    RCLCPP_INFO(
      rclcpp::get_logger("GetTrajectoryFromYAML"),
      "Successfully loaded %zu trajectories from '%s'",
      trajectories_.size(), config_file.c_str()
    );
  } catch (const YAML::Exception & e) {
    throw BT::RuntimeError("YAML parsing error: " + std::string(e.what()));
  } catch (const std::exception & e) {
    throw BT::RuntimeError("Error loading trajectories: " + std::string(e.what()));
  }
}

}  // namespace grab2_behavior_tree

BT_REGISTER_NODES(factory)
{
  factory.registerNodeType<grab2_behavior_tree::GetTrajectoryFromYAML>("GetTrajectoryFromYAML");
}
