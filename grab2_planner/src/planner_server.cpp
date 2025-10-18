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

  // this->action_server_poses_ = create_action_server<ActionThroughPoses>(
  //   "compute_plan_through_poses",
  //   std::bind(&PlannerServer::computePlanThroughPoses, this, std::placeholders::_1)
  // );

  this->action_server_poses_ = create_action_server<ActionThroughPoses>(
    "compute_plan_through_poses",
    [this](const std::shared_ptr<GoalHandle<ActionThroughPoses>> goal_handle)
    {
      // Run in background thread safely
      std::thread([this, goal_handle]() {
        this->computePlanThroughPoses(goal_handle);
      }).detach();
    }
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
        planning_group_,
        "robot_description");
  #else

    move_group_interface_ =
      std::make_unique<moveit::planning_interface::MoveGroupInterface>(
        this->shared_from_this(),
        planning_group_);
  #endif


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

  // Planning logic
  const auto target = goal->target_pose.pose;

  moveit::planning_interface::MoveGroupInterface::Plan plan_msg;
  move_group_interface_->setPoseTarget(target);

  auto const success = static_cast<bool>(move_group_interface_->plan(plan_msg));

  if (success) {
    // For Jazzy and Later Support
    #if RCLCPP_VERSION_GTE(28, 0, 0)
    result->trajectory = plan_msg.trajectory.joint_trajectory;
    #else
    result->trajectory = plan_msg.trajectory_.joint_trajectory;
    #endif

    goal_handle->succeed(result);
  } else {
    result->error_string = "Failed to plan";
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
    RCLCPP_ERROR(this->get_logger(), "No goals provided!");
    result->error_code = result->INVALID_GOAL;
    result->error_string = "No goals provided";
    goal_handle->abort(result);
    return;
  }


  std::vector<moveit::planning_interface::MoveGroupInterface::Plan> successful_plans;
  std::vector<size_t> successful_indices;
  std::vector<size_t> failed_indices;


  moveit::core::RobotStatePtr current_state = move_group_interface_->getCurrentState();
  move_group_interface_->setStartState(*current_state);


  // PLAN for all poses first (store successful plans)
  for (size_t i = 0; i < goal->goals.size(); ++i) {
    if (!goal_handle->is_active()) {
      RCLCPP_WARN(this->get_logger(), "Goal no longer active, stopping planning loop");
      break;
    }


    const auto &pose = goal->goals[i].pose;
    move_group_interface_->setPoseTarget(pose);


    RCLCPP_INFO(this->get_logger(), "Planning for pose %zu...", i);
    moveit::planning_interface::MoveGroupInterface::Plan plan;
    bool success = static_cast<bool>(move_group_interface_->plan(plan));


    if (!success) {
      RCLCPP_WARN(this->get_logger(), "Failed to plan for pose index %zu (pos: [%.3f, %.3f, %.3f])",
                  i, pose.position.x, pose.position.y, pose.position.z);
      failed_indices.push_back(i);
      continue;
    }


    // store successful plan
    successful_plans.push_back(plan);
    successful_indices.push_back(i);


    // update start state for next plan using last point of this plan
    if (!plan.trajectory_.joint_trajectory.points.empty()) {
      const auto &last_pt = plan.trajectory_.joint_trajectory.points.back();
      moveit::core::RobotState next_start_state(*current_state);
      next_start_state.setVariablePositions(plan.trajectory_.joint_trajectory.joint_names,
                                           last_pt.positions);
      move_group_interface_->setStartState(next_start_state);
      *current_state = next_start_state;
    }
  } 


  if (successful_plans.empty()) {
    RCLCPP_ERROR(this->get_logger(), "Failed to plan for ALL poses!");
    result->error_code = result->INVALID_GOAL;
    result->error_string = "Failed to plan any valid trajectories.";
    goal_handle->abort(result);
    return;
  }


  RCLCPP_INFO(this->get_logger(), "Planned successfully for %zu poses.", successful_indices.size());
  if (!failed_indices.empty()) {
    RCLCPP_INFO(this->get_logger(), "Failed to plan for %zu poses.", failed_indices.size());
    for (auto idx : failed_indices) {
      RCLCPP_WARN(this->get_logger(), "Pose index %zu failed.", idx);
    }
  }


  // EXECUTE the successful plans sequentially
  for (size_t k = 0; k < successful_plans.size(); ++k) {
    if (!goal_handle->is_active()) {
      RCLCPP_WARN(this->get_logger(), "Goal not active, aborting execution.");
      result->error_code = result->INVALID_GOAL;
      result->error_string = "Goal cancelled or preempted during execution.";
      goal_handle->abort(result);
      return;
    }


    RCLCPP_INFO(this->get_logger(), "Executing planned segment %zu (pose index %zu)...", k, successful_indices[k]);
    auto exec_ret = move_group_interface_->execute(successful_plans[k]);


    if (exec_ret != moveit::core::MoveItErrorCode::SUCCESS) {
      RCLCPP_ERROR(this->get_logger(), "Execution failed for planned segment %zu (pose index %zu).", k, successful_indices[k]);
      result->error_code = result->INVALID_GOAL;
      result->error_string = "Execution failed for one of the planned segments.";
      goal_handle->abort(result);
      return;
    }
  }

  result->trajectory = successful_plans.back().trajectory_.joint_trajectory;
  result->error_code = result->SUCCESSFUL;
  goal_handle->succeed(result);
  RCLCPP_INFO(this->get_logger(), "Successfully executed %zu planned segments.", successful_plans.size());
}

// TODO: implementation with threads and optimization 
// no need for streching or smoothing just minimize the error 


}  // namespace grab2_planner

#include "rclcpp_components/register_node_macro.hpp"

// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
// RCLCPP_COMPONENTS_REGISTER_NODE(grab2_planner::PlannerServer)
