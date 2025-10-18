// Copyright (c) 2025, ElSayed ElSheikh

#ifndef GRAB2_GRASP_GENERATOR__GRASP_GENERATOR_HPP_
#define GRAB2_GRASP_GENERATOR__GRASP_GENERATOR_HPP_

#include <memory>
#include <vector>
#include <string>
#include <optional>
#include <filesystem>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

#include "grab2_ros_common/node.hpp"
#include "grab2_msgs/action/get_isaac_grasp.hpp"
#include "grab2_grasp_generator/visibility_control.h"

#include "moveit_msgs/msg/grasp.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"

namespace grab2_grasp_generator
{

class GraspGenerator : public grab2::Node
{
public:
  using GraspVector = std::vector<moveit_msgs::msg::Grasp>;
  using ActionGetGrasp = grab2_msgs::action::GetIsaacGrasp;

  /**
   * @brief A constructor of grab2_grasp_generator::GraspGenerator
   * @param options Additional options for node creation
   */
  explicit GraspGenerator(const rclcpp::NodeOptions & options = rclcpp::NodeOptions());

  /**
   * @brief Handles the getGraspFromYAML action request.
   *
   * This method reads grasp configurations from a specified YAML file,
   * transforms each grasp pose from the object's local frame to the reference
   * (world) frame using the provided object pose, and returns the transformed
   * grasps in the action response.
   *
   * @param goal_handle The goal handle for the action request.
   */
  void getGraspFromYAML(const std::shared_ptr<GoalHandle<ActionGetGrasp>> goal_handle);

  /**
   * @brief Method to parse the yaml file containing the grasps
   *
   * @param file_path The full path to the isaac_grasp YAML file
   * @return std::optional<GraspVector> The parsed grasps or std::nullopt on failure
   */
  std::optional<GraspVector> parseYAML(const std::string & file_path);

  /**
   * @brief Method to transform the grasp pose from object frame
   * to planning or/ reference frame such as world frame
   *
   * @param grasp The grasp message to be transformed
   * @param world_to_object The pose of the object in the world frame
   */
  void transfromGraspFrame(
    moveit_msgs::msg::Grasp & grasp,
    const geometry_msgs::msg::PoseStamped & world_to_object) const;

private:
  // Action server that provides the grasps for a given object
  rclcpp_action::Server<ActionGetGrasp>::SharedPtr action_server_get_grasp_;
};

}  // namespace grab2_grasp_generator

#endif  // GRAB2_GRASP_GENERATOR__GRASP_GENERATOR_HPP_
