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

  GraspGenerator();

  void getGraspFromYAML(const std::shared_ptr<GoalHandle<ActionGetGrasp>> goal_handle);

private:
  using GraspVector = std::vector<moveit_msgs::msg::Grasp>;
  using GraspVectorPtr = std::shared_ptr<GraspVector>;
  bool parseYAML(
    const std::string & file_path,
    GraspVectorPtr object_to_gripper_grasps);

  rclcpp_action::Server<ActionGetGrasp>::SharedPtr action_server_get_grasp_;
};

}  // namespace grab2_grasp_generator

#endif  // GRAB2_GRASP_GENERATOR__GRASP_GENERATOR_HPP_
