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

  RCLCPP_INFO(this->get_logger(), "GraspGenerator constructed");
}

bool
GraspGenerator::parseYAML(const std::string & file_path, GraspVectorPtr object_to_gripper_grasps)
{
  // Load the file
  YAML::Node config = YAML::LoadFile(file_path);

  // Parsing
  try {
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

    const YAML::Node & grasps = config["grasps"];
    for (auto it = grasps.begin(); it != grasps.end(); ++it) {
      // Construct Grasp Message
      moveit_msgs::msg::Grasp grasp_msg;

      // Grasp id
      grasp_msg.id = it->first.as<std::string>();

      // Get Grasp info
      YAML::Node grasp = it->second;

      grasp_msg.grasp_quality = grasp["confidence"].as<double>();

      // Grasp grasp_pose
      std::vector<double> pos = grasp["position"].as<std::vector<double>>();
      double w = grasp["orientation"]["w"].as<double>();
      std::vector<double> xyz = grasp["orientation"]["xyz"].as<std::vector<double>>();

      // grasp_msg.grasp_pose.header.frame_id = ; // This should be Object frame
      grasp_msg.grasp_pose.pose.position.x = pos[0];
      grasp_msg.grasp_pose.pose.position.y = pos[1];
      grasp_msg.grasp_pose.pose.position.z = pos[2];

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
      object_to_gripper_grasps->push_back(grasp_msg);
    }
  } catch(const YAML::Exception & e) {
    RCLCPP_ERROR(this->get_logger(), "YAML error: %s", e.what());
    return false;
  }

  return true;
}

void
GraspGenerator::getGraspFromYAML(const std::shared_ptr<GoalHandle<ActionGetGrasp>> goal_handle)
{
  RCLCPP_INFO(this->get_logger(), "Executing getGraspFromYAML action");

  const auto goal = goal_handle->get_goal();
  auto result = std::make_shared<ActionGetGrasp::Result>();

  // Main logic
  // Get Object pose in World frame
  const auto world_to_object = goal->object_pose;

  // Get Target Gripper pose in Object frame
  // Compose the file full path
  const auto file_name = goal->isaac_grasp;
  std::string pkg_dir = ament_index_cpp::get_package_share_directory("grab2_grasp_generator");
  std::string file_path = pkg_dir + "/config/" + file_name + ".yaml";

  // Get ready to parse the yaml file
  bool parse_success;
  auto object_to_gripper_grasps = std::make_shared<GraspVector>();

  // Check if file exists to parse it
  if (std::filesystem::exists(file_path)) {
    RCLCPP_INFO(this->get_logger(), "Loading grasps from: %s", (file_name + ".yaml").c_str());
    parse_success = this->parseYAML(file_path, object_to_gripper_grasps);
  } else {
    RCLCPP_ERROR(this->get_logger(), "YAML file doesn't exist: %s", file_path.c_str());
    goal_handle->abort(result);
    return;
  }

  if (!parse_success) {
    goal_handle->abort(result);
    return;
  }

  // Transform grasps into the same frame as the detected object (world_to_object.header.frame_id)
  for (auto & object_to_gripper_grasp : *object_to_gripper_grasps) {
    auto object_to_gripper = object_to_gripper_grasp.grasp_pose.pose;

    // Get Target Gripper pose in World frame
    tf2::Transform  tf_world_to_object, tf_object_to_gripper;
    tf2::fromMsg(world_to_object.pose, tf_world_to_object);
    tf2::fromMsg(object_to_gripper, tf_object_to_gripper);

    // Target Gripper pose
    tf2::Transform tf_world_to_gripper = tf_world_to_object * tf_object_to_gripper;

    geometry_msgs::msg::PoseStamped target_grasp_pose;
    target_grasp_pose.header.frame_id = world_to_object.header.frame_id;
    tf2::toMsg(tf_world_to_gripper, target_grasp_pose.pose);

    object_to_gripper_grasp.grasp_pose = target_grasp_pose;
    RCLCPP_DEBUG(this->get_logger(), "Grasp ID: %s", object_to_gripper_grasp.id.c_str());
    RCLCPP_DEBUG(this->get_logger(),
      "Grasp in object frame Pos: [%.3f, %.3f, %.3f]",
      object_to_gripper.position.x, object_to_gripper.position.y, object_to_gripper.position.z
    );
    RCLCPP_DEBUG(this->get_logger(),
      "Grasp in world frame Pos: [%.3f, %.3f, %.3f]",
      target_grasp_pose.pose.position.x,
      target_grasp_pose.pose.position.y,
      target_grasp_pose.pose.position.z
    );
  }

  // Return result
  if (object_to_gripper_grasps && !object_to_gripper_grasps->empty()) {
    result->grasps = std::move(*object_to_gripper_grasps);
    object_to_gripper_grasps.reset();
    for (const auto & grasp : result->grasps) {
      RCLCPP_DEBUG(this->get_logger(), "Returning Grasp ID: %s", grasp.id.c_str());
      RCLCPP_DEBUG(this->get_logger(),
        "Return Grasp Pos: [%.3f, %.3f, %.3f]",
        grasp.grasp_pose.pose.position.x,
        grasp.grasp_pose.pose.position.y,
        grasp.grasp_pose.pose.position.z
      );
    }
  } else {
    goal_handle->abort(result);
    return;
  }

  goal_handle->succeed(result);
}


}  // namespace grab2_grasp_generator
