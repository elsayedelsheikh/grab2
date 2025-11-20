// Copyright (c) 2025, ElSayed ElSheikh

#include "grab2_planner/planner_server.hpp"

namespace grab2_planner
{

PlannerServer::PlannerServer()
: Node("planner_server",
    rclcpp::NodeOptions().automatically_declare_parameters_from_overrides(true)),
  initialized_(false)
{
  this->action_server_pose_ = create_action_server<ActionToPose>(
    "compute_plan_to_target_ik",
    std::bind(&PlannerServer::computePlan, this, std::placeholders::_1)
  );

  this->action_server_poses_ = create_action_server<ActionThroughPoses>(
    "compute_plan_through_poses",
    std::bind(&PlannerServer::computePlanThroughPoses, this, std::placeholders::_1)
  );

  RCLCPP_INFO(this->get_logger(), "PlannerServer constructed");
}

void
PlannerServer::initialize()
{
  if (!initialized_) {
    // Get planning group from parameters
    this->get_parameter_or("planning_group", planning_group_, std::string("panda_arm"));

    // Create MoveGroupInterface
  #if RCLCPP_VERSION_GTE(28, 0, 0)

    move_group_interface_ =
      std::make_unique<moveit::planning_interface::MoveGroupInterface>(
        this->shared_from_this(),
        planning_group_);

    initialized_ = true;
    RCLCPP_INFO(this->get_logger(), "PlannerServer initialized with planning group: %s",
                planning_group_.c_str());
  }
}

void
PlannerServer::computePlan(const std::shared_ptr<GoalHandle<ActionToPose>> goal_handle)
{
  RCLCPP_INFO(this->get_logger(), "Executing ComputePlanToTargetIK");

  const auto goal = goal_handle->get_goal();
  auto result = std::make_shared<ActionToPose::Result>();

  if (!initialized_) {
    initialize();

  }
  goal_handle->abort(result);

}

void PlannerServer::computePlanThroughPoses(
  const std::shared_ptr<GoalHandle<ActionThroughPoses>> goal_handle)
{
  RCLCPP_INFO(this->get_logger(), "Executing ComputePlanThroughPoses");

  const auto goal = goal_handle->get_goal();
  auto result = std::make_shared<ActionThroughPoses::Result>();

  if (!initialized_) {
    initialize();
  }

  if (goal->goals.empty()) {
    result->error_code = result->INVALID_GOAL;
    result->error_string = "No goals provided";
    goal_handle->abort(result);
    return;
  }

  moveit::planning_interface::MoveGroupInterface::Plan plan;
  moveit_msgs::msg::RobotTrajectory combined_trajectory;
  std::vector<size_t> successful_indices;
  std::vector<size_t> failed_indices;

  moveit::core::RobotStatePtr current_state = move_group_interface_->getCurrentState();
  move_group_interface_->setStartState(*current_state);

  double total_duration = 0.0;

  for (size_t i = 0; i < goal->goals.size(); ++i) {
    const auto & pose = goal->goals[i].pose;
    move_group_interface_->setPoseTarget(pose);

    RCLCPP_INFO(this->get_logger(), "Planning for pose %zu...", i);
    bool success = static_cast<bool>(move_group_interface_->plan(plan));

    if (!success) {
      RCLCPP_WARN(this->get_logger(), "Failed to plan for pose index %zu", i);
      failed_indices.push_back(i);
      continue;
    }

    const auto & traj = plan.trajectory_.joint_trajectory;

    // Append trajectory points
    if (combined_trajectory.joint_trajectory.joint_names.empty()) {
      combined_trajectory.joint_trajectory.joint_names = traj.joint_names;
    }
    combined_trajectory.joint_trajectory.points.insert(
      combined_trajectory.joint_trajectory.points.end(),
      traj.points.begin(),
      traj.points.end()
    );

    // Add duration (time_from_start of last point)
    if (!traj.points.empty()) {
      total_duration += traj.points.back().time_from_start.sec +
        traj.points.back().time_from_start.nanosec * 1e-9;
    }

    successful_indices.push_back(i);

    // Update start state
    moveit::core::RobotState next_state(*current_state);
    next_state.setVariablePositions(traj.joint_names, traj.points.back().positions);
    move_group_interface_->setStartState(next_state);
    *current_state = next_state;
  }

  if (successful_indices.empty()) {
    result->error_code = result->INVALID_GOAL;
    result->error_string = "Failed to plan any valid trajectories.";
    goal_handle->abort(result);
    return;
  }

  result->trajectory = combined_trajectory.joint_trajectory;
  result->total_duration = total_duration;
  result->successful_count = successful_indices.size();
  result->failed_count = failed_indices.size();

  // for (auto idx : failed_indices) {
  //   result->failed_indices.push_back((idx));
  // }

  result->error_code = result->SUCCESSFUL;
  result->error_string = "Planning completed successfully.";

  goal_handle->succeed(result);

  RCLCPP_INFO(this->get_logger(),
              "Planning finished: %zu successful, %zu failed, total duration %.2f sec",
              successful_indices.size(), failed_indices.size(), total_duration);
}
}

  // namespace grab2_planner

#include "rclcpp_components/register_node_macro.hpp"

// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
// RCLCPP_COMPONENTS_REGISTER_NODE(grab2_planner::PlannerServer)
