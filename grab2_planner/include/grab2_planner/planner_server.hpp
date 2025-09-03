// Copyright (c) 2025, ElSayed ElSheikh

#ifndef GRAB2_PLANNER__PLANNER_SERVER_HPP_
#define GRAB2_PLANNER__PLANNER_SERVER_HPP_

#include <string>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "moveit/move_group_interface/move_group_interface.hpp"

#include "geometry_msgs/msg/pose.hpp"
#include "grab2_msgs/action/compute_plan_to_pose.hpp"
#include "grab2_msgs/action/compute_plan_through_poses.hpp"

namespace grab2_planner
{

class PlannerServer : public rclcpp::Node
{
public:
  using ActionToPose = grab2_msgs::action::ComputePlanToPose;
  using ActionThroughPoses = grab2_msgs::action::ComputePlanThroughPoses;

  template<typename ActionT>
  using GoalHandle = rclcpp_action::ServerGoalHandle<ActionT>;

  template<typename ActionT>
  using ExecuteCallback = std::function<void(const std::shared_ptr<GoalHandle<ActionT>>)>;

  PlannerServer();

protected:
  std::string planning_group_;
  rclcpp_action::Server<ActionToPose>::SharedPtr action_server_pose_;
  rclcpp_action::Server<ActionThroughPoses>::SharedPtr action_server_poses_;
  moveit::planning_interface::MoveGroupInterfaceUniquePtr move_group_interface_;

  bool initialized_;
  void initialize();

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

  template<typename ActionT>
  typename rclcpp_action::Server<ActionT>::SharedPtr create_action_server(
    const std::string & name,
    ExecuteCallback<ActionT> execute_callback)
  {
    auto handle_goal = [this, name](
      const rclcpp_action::GoalUUID & uuid,
      std::shared_ptr<const typename ActionT::Goal> goal) -> rclcpp_action::GoalResponse
      {
        (void)uuid;
        (void)goal;
        RCLCPP_INFO(this->get_logger(), "Received goal request for %s", name.c_str());
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
      };

    auto handle_cancel = [this, name](
      const std::shared_ptr<GoalHandle<ActionT>> goal_handle) -> rclcpp_action::CancelResponse
      {
        (void)goal_handle;
        RCLCPP_INFO(this->get_logger(), "Received request to cancel goal for %s", name.c_str());
        return rclcpp_action::CancelResponse::ACCEPT;
      };

    auto handle_accepted = [this, execute_callback](
      const std::shared_ptr<GoalHandle<ActionT>> goal_handle)
      {
        std::thread{[execute_callback, goal_handle]() {
            execute_callback(goal_handle);
          }}.detach();
      };

    return rclcpp_action::create_server<ActionT>(
      this->get_node_base_interface(),
      this->get_node_clock_interface(),
      this->get_node_logging_interface(),
      this->get_node_waitables_interface(),
      name,
      handle_goal,
      handle_cancel,
      handle_accepted);
  }

  // template<typename ActionT>
  // rclcpp_action::GoalResponse handle_goal(
  //   const rclcpp_action::GoalUUID & /* uuid */,
  //   std::shared_ptr<const typename ActionT::Goal>/* goal */)
  // {
  //   RCLCPP_INFO(this->get_logger(), "Received goal request");
  //   return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  // }

  // template<typename ActionT>
  // rclcpp_action::CancelResponse handle_cancel(
  //   const std::shared_ptr<GoalHandle<ActionT>>/* goal_handle */)
  // {
  //   RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
  //   return rclcpp_action::CancelResponse::ACCEPT;
  // }
};

}  // namespace grab2_planner

#endif  // GRAB2_PLANNER__PLANNER_SERVER_HPP_
