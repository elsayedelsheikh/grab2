// Copyright (c) 2025, ElSayed ElSheikh

#ifndef GRAB2_PLANNER__PLANNER_SERVER_HPP_
#define GRAB2_PLANNER__PLANNER_SERVER_HPP_

#include <string>
#include <memory>

#include "rclcpp/version.h"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

// For Jazzy and Later Support
#if RCLCPP_VERSION_GTE(28, 0, 0)
#include "moveit/move_group_interface/move_group_interface.hpp"
#else
#include "moveit/move_group_interface/move_group_interface.h"
#endif

#include "grab2_ros_common/node.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "grab2_msgs/action/compute_plan_to_target_ik.hpp"
#include "grab2_msgs/action/compute_plan_through_poses.hpp"

namespace grab2_planner
{

class PlannerServer : public grab2::Node
{
public:
  using ActionToPose = grab2_msgs::action::ComputePlanToTargetIK;
  using ActionThroughPoses = grab2_msgs::action::ComputePlanThroughPoses;

  PlannerServer();

  /**
   * @brief The action server callback which calls planner to get the trajectory
   * ComputePlanToPose
   */
  void computePlan(
    const std::shared_ptr<GoalHandle<ActionToPose>> goal_handle);

  /**
   * @brief The action server callback which calls planner to get the trajectory
   * ComputePlanThroughPoses
   */
  void computePlanThroughPoses(
    const std::shared_ptr<GoalHandle<ActionThroughPoses>> goal_handle);

private:
  void initialize();

  bool initialized_;
  std::string planning_group_;
  rclcpp_action::Server<ActionToPose>::SharedPtr action_server_pose_;
  rclcpp_action::Server<ActionThroughPoses>::SharedPtr action_server_poses_;
  moveit::planning_interface::MoveGroupInterfaceUniquePtr move_group_interface_;
};

}  // namespace grab2_planner

#endif  // GRAB2_PLANNER__PLANNER_SERVER_HPP_
