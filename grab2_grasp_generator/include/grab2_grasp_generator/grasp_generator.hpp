// Copyright (c) 2025, ElSayed ElSheikh

#ifndef GRAB2_GRASP_GENERATOR__GRASP_GENERATOR_HPP_
#define GRAB2_GRASP_GENERATOR__GRASP_GENERATOR_HPP_

#include <memory>
#include <vector>
#include <string>
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
  using ActionGetGrasp = grab2_msgs::action::GetIsaacGrasp;

  /**
   * @brief A constructor of grab2_grasp_generator::GraspGenerator
   * @param options Additional options for node creation
   */
  explicit GraspGenerator(const rclcpp::NodeOptions & options = rclcpp::NodeOptions());

  void getGraspFromYAML(const std::shared_ptr<GoalHandle<ActionGetGrasp>> goal_handle);

private:
  using GraspVector = std::vector<moveit_msgs::msg::Grasp>;
  using GraspVectorPtr = std::shared_ptr<GraspVector>;

  /**
   * @brief Method to parse the yaml file containing the grasps
   * @param file_path The full path to the yaml file
   * @param object_to_gripper_grasps The output vector of grasps
   * @return true if parsing was successful
   * @return false if parsing failed
   */
  bool parseYAML(
    const std::string & file_path,
    GraspVectorPtr object_to_gripper_grasps);

  // /**
  //  * @brief Method to transform the grasp pose from object frame
  //  * to planning or/ reference frame such as world frame
  //  *
  //  * @param grasp The grasp message to be transformed
  //  * @param world_to_object The pose of the object in the world frame
  //  */
  // void transfromGraspFrame(
  //   moveit_msgs::msg::Grasp & grasp,
  //   const geometry_msgs::msg::PoseStamped & world_to_object) const;

  // Action server that provides the grasps for a given object
  rclcpp_action::Server<ActionGetGrasp>::SharedPtr action_server_get_grasp_;
};

}  // namespace grab2_grasp_generator

#endif  // GRAB2_GRASP_GENERATOR__GRASP_GENERATOR_HPP_
