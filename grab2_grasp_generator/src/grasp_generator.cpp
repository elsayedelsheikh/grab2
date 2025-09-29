// Copyright (c) 2025, ElSayed ElSheikh

#include "grab2_grasp_generator/grasp_generator.hpp"

#include "tf2/LinearMath/Transform.hpp"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"
#include "trajectory_msgs/msg/joint_trajectory.hpp"

#include "yaml-cpp/yaml.h"
#include "ament_index_cpp/get_package_share_directory.hpp"

namespace grab2_grasp_generator
{

GraspGenerator::GraspGenerator(const rclcpp::NodeOptions & options)
: Node("grasp_generator", options)
{
  this->action_server_get_grasp_ = create_action_server<ActionGetGrasp>(
    "get_isaac_grasp",
    std::bind(&GraspGenerator::getGraspFromYAML, this, std::placeholders::_1)
  );

  RCLCPP_INFO(this->get_logger(), "GraspGenerator initialized");
}

void
GraspGenerator::getGraspFromYAML(const std::shared_ptr<GoalHandle<ActionGetGrasp>> goal_handle)
{
  RCLCPP_INFO(this->get_logger(), "Executing getGraspFromYAML action");

  const auto goal = goal_handle->get_goal();
  auto result = std::make_shared<ActionGetGrasp::Result>();

  // Validate input
  const std::string & filename = goal->isaac_grasp;
  if (filename.empty()) {
    RCLCPP_ERROR(this->get_logger(), "Empty grasp file name provided");
    goal_handle->abort(result);
    return;
  }

  // Construct file path
  std::string pkg_dir =
    ament_index_cpp::get_package_share_directory("grab2_grasp_generator");
  std::string file_path =
    pkg_dir + "/config/" + filename + ".yaml";

  // Check if file exists to parse it
  if (!std::filesystem::exists(file_path)) {
    RCLCPP_ERROR(this->get_logger(), "YAML file doesn't exist: %s", file_path.c_str());
    goal_handle->abort(result);
    return;
  }

  // Parse YAML file
  RCLCPP_INFO(this->get_logger(), "Loading grasps from: %s",
    (filename + ".yaml").c_str());

  auto grasps_opt = parseYAML(file_path);

  if (!grasps_opt) {
    RCLCPP_ERROR(this->get_logger(), "Failed to parse YAML file");
    goal_handle->abort(result);
    return;
  }

  auto grasps = std::move(*grasps_opt);  // Target Gripper pose in Object frame

  // Transform all grasps to world frame (detected object frame)
  const auto & world_to_object = goal->object_pose;  // Object pose in World frame
  for (auto & grasp : grasps) {
    transfromGraspFrame(grasp, world_to_object);
  }

  // Return result
  result->grasps = std::move(grasps);
  RCLCPP_INFO(this->get_logger(), "Returning %zu grasps", result->grasps.size());

  for (const auto & grasp : result->grasps) {
    RCLCPP_DEBUG(this->get_logger(),
      "  Grasp '%s': [%.3f, %.3f, %.3f] quality=%.2f",
      grasp.id.c_str(),
      grasp.grasp_pose.pose.position.x,
      grasp.grasp_pose.pose.position.y,
      grasp.grasp_pose.pose.position.z,
      grasp.grasp_quality);
  }

  goal_handle->succeed(result);
}

void
GraspGenerator::transfromGraspFrame(
  moveit_msgs::msg::Grasp & grasp,
  const geometry_msgs::msg::PoseStamped & world_to_object) const
{
  // Store original pose for debug logging
  const auto object_to_gripper = grasp.grasp_pose.pose;

  // Get Target Gripper pose in World frame
  tf2::Transform  tf_world_to_object, tf_object_to_gripper;
  tf2::fromMsg(world_to_object.pose, tf_world_to_object);
  tf2::fromMsg(grasp.grasp_pose.pose, tf_object_to_gripper);

  // Target Gripper pose
  tf2::Transform tf_world_to_gripper = tf_world_to_object * tf_object_to_gripper;

  // Update grasp pose
  grasp.grasp_pose.header.frame_id = world_to_object.header.frame_id;
  tf2::toMsg(tf_world_to_gripper, grasp.grasp_pose.pose);

  RCLCPP_DEBUG(this->get_logger(), "Grasp '%s' transformed:", grasp.id.c_str());
  RCLCPP_DEBUG(this->get_logger(),
    "  Object frame Pos: [%.3f, %.3f, %.3f]",
    object_to_gripper.position.x,
    object_to_gripper.position.y,
    object_to_gripper.position.z);
  RCLCPP_DEBUG(this->get_logger(),
    "  Reference/World frame Pos: [%.3f, %.3f, %.3f]",
    grasp.grasp_pose.pose.position.x,
    grasp.grasp_pose.pose.position.y,
    grasp.grasp_pose.pose.position.z);
}

std::optional<GraspGenerator::GraspVector>
GraspGenerator::parseYAML(const std::string & file_path)
{
  GraspVector grasps;

  try {
    YAML::Node config = YAML::LoadFile(file_path);
    RCLCPP_DEBUG(this->get_logger(), "Parsing YAML: %s", file_path.c_str());

    // TODO(sayed): Gripper frame - This should be used to check if this is the right gripper
    // auto isaac_grip_frame = config["gripper_frame_link"].as<std::string>();
    // size_t pos = isaac_grip_frame.find_last_of('/');
    // std::string grip_frame;
    // if (pos != std::string::npos) {
    //   grip_frame = isaac_grip_frame.substr(pos + 1);
    // } else {
    //   grip_frame = isaac_grip_frame;
    // }

    if (!config["grasps"]) {
      RCLCPP_ERROR(this->get_logger(), "YAML file doesn't contain 'grasps' field");
      return std::nullopt;
    }

    const YAML::Node & yaml_grasps = config["grasps"];

    for (auto it = yaml_grasps.begin(); it != yaml_grasps.end(); ++it) {
      // Construct Grasp Message
      moveit_msgs::msg::Grasp grasp_msg;

      // Grasp id
      grasp_msg.id = it->first.as<std::string>();
      const YAML::Node & grasp = it->second;

      // Grasp quality or/ confidence
      grasp_msg.grasp_quality = grasp["confidence"].as<double>();

      // Grasp grasp_pose in Object frame
      // grasp_msg.grasp_pose.header.frame_id = ; // This should be Object frame
      std::vector<double> pos = grasp["position"].as<std::vector<double>>();
      grasp_msg.grasp_pose.pose.position.x = pos[0];
      grasp_msg.grasp_pose.pose.position.y = pos[1];
      grasp_msg.grasp_pose.pose.position.z = pos[2];

      double w = grasp["orientation"]["w"].as<double>();
      std::vector<double> xyz = grasp["orientation"]["xyz"].as<std::vector<double>>();
      grasp_msg.grasp_pose.pose.orientation.x = xyz[0];
      grasp_msg.grasp_pose.pose.orientation.y = xyz[1];
      grasp_msg.grasp_pose.pose.orientation.z = xyz[2];
      grasp_msg.grasp_pose.pose.orientation.w = w;

      const YAML::Node & grasp_cspace_pos = grasp["cspace_position"];
      for (auto it = grasp_cspace_pos.begin(); it != grasp_cspace_pos.end(); ++it) {
        trajectory_msgs::msg::JointTrajectory jt;
        jt.joint_names.push_back(it->first.as<std::string>());

        trajectory_msgs::msg::JointTrajectoryPoint pt;
        pt.positions.push_back(it->second.as<double>());
        pt.time_from_start = rclcpp::Duration::from_seconds(0.5);

        jt.points.push_back(pt);
        grasp_msg.grasp_posture = jt;
      }

      const YAML::Node & pregrasp_cspace_pos = grasp["pregrasp_cspace_position"];
      for (auto it = pregrasp_cspace_pos.begin(); it != pregrasp_cspace_pos.end(); ++it) {
        trajectory_msgs::msg::JointTrajectory jt;
        jt.joint_names.push_back(it->first.as<std::string>());

        trajectory_msgs::msg::JointTrajectoryPoint pt;
        pt.positions.push_back(it->second.as<double>());
        pt.time_from_start = rclcpp::Duration::from_seconds(0.5);

        jt.points.push_back(pt);
        grasp_msg.pre_grasp_posture = jt;
      }

      // Add the grasp to the vector
      grasps.push_back(grasp_msg);
    }
  } catch(const YAML::Exception & e) {
    RCLCPP_ERROR(this->get_logger(), "YAML error: %s", e.what());
    return std::nullopt;
  } catch (const std::exception & e) {
    RCLCPP_ERROR(this->get_logger(), "Exception: %s", e.what());
    return std::nullopt;
  }

  if (grasps.empty()) {
    RCLCPP_ERROR(this->get_logger(), "No grasps found in the YAML file");
    return std::nullopt;
  }

  return grasps;
}


}  // namespace grab2_grasp_generator
