// Copyright (c) 2025, ElSayed ElSheikh

#ifndef GRAB2_PLANNER__PLANNER_SERVER_HPP_
#define GRAB2_PLANNER__PLANNER_SERVER_HPP_

#include <string>
#include <memory>

#include "rclcpp/version.h"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include <thread>
#include <future>
#include <mutex>
// #include <moveit/trajectory_processing/iterative_parabolic_time_parameterization.h>
// #include <moveit/robot_trajectory/robot_trajectory.h>


// For Jazzy and Later Support
#if RCLCPP_VERSION_GTE(28, 0, 0)
#include "moveit/move_group_interface/move_group_interface.hpp"
#else
#include "moveit/move_group_interface/move_group_interface.h"
#endif

#include "grab2_ros_common/node.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "grab2_msgs/action/compute_plan_to_pose.hpp"
#include "grab2_msgs/action/compute_plan_through_poses.hpp"

namespace grab2_planner
{

class PlannerServer : public grab2::Node
{
public:
  using ActionToPose = grab2_msgs::action::ComputePlanToPose;
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

  /**
//    * @brief Plans and executes sequentially through given poses.
//    * Supports asynchronous pre-planning for smoother transitions.
//    */
//   void planAndExecuteThroughPoses(
//     const std::vector<geometry_msgs::msg::Pose> &poses);

//   struct PlanResult
// {
//   bool success;
//   moveit::planning_interface::MoveGroupInterface::Plan plan;
// };


  // /**
  //  * @brief Execute a given MoveIt plan.
  //  */
  // bool executePlan(const PlanResult &plan_result);

  // /**
  //  * @brief Get the robot's current end-effector pose.
  //  */
  // geometry_msgs::msg::Pose getRobotCurrentPose();

  // /**
  //  * @brief Compute Euclidean distance between two poses.
  //  */
  // double distanceBetweenPoses(
  //   const geometry_msgs::msg::Pose &p1,
  //   const geometry_msgs::msg::Pose &p2);


  // PlanResult ComputePlan(const geometry_msgs::msg::Pose &start,
  //                const geometry_msgs::msg::Pose &goal);




private:
  void initialize();

  bool initialized_;
  std::string planning_group_;
  rclcpp_action::Server<ActionToPose>::SharedPtr action_server_pose_;
  rclcpp_action::Server<ActionThroughPoses>::SharedPtr action_server_poses_;
  moveit::planning_interface::MoveGroupInterfaceUniquePtr move_group_interface_;
  std::mutex planning_mutex_;
  rclcpp::Node::SharedPtr node_; 

};

}  // namespace grab2_planner

#endif  // GRAB2_PLANNER__PLANNER_SERVER_HPP_
