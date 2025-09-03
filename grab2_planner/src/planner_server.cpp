#include "grab2_planner/planner_server.hpp"

namespace grab2_planner
{

PlannerServer::PlannerServer()
: Node("planner_server",
    rclcpp::NodeOptions().automatically_declare_parameters_from_overrides(true)),
  initialized_(false)
{
  this->action_server_pose_ = create_action_server<ActionToPose>(
    "compute_plan_to_pose",
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
    // Get planning group from paramters
    this->get_parameter_or("planning_group", planning_group_, std::string("panda_arm"));

    // Create MoveGroupInterface
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
  RCLCPP_INFO(this->get_logger(), "Executing ComputePlanToPose");

  const auto goal = goal_handle->get_goal();
  auto result = std::make_shared<ActionToPose::Result>();

  if (!initialized_) {
    initialize();
  }

  // Planning logic
  const auto target = goal->goal.pose;

  moveit::planning_interface::MoveGroupInterface::Plan plan_msg;
  move_group_interface_->setPoseTarget(target);

  auto const success = static_cast<bool>(move_group_interface_->plan(plan_msg));

  if(success) {
    result->trajectory = plan_msg.trajectory.joint_trajectory;
    goal_handle->succeed(result);
  } else {
    result->error_string = "Failed to plan";
    goal_handle->abort(result);
    RCLCPP_ERROR(this->get_logger(), "Planning failed!");
  }
}

void PlannerServer::computePlanThroughPoses(
  const std::shared_ptr<GoalHandle<ActionThroughPoses>> goal_handle)
{
  RCLCPP_INFO(this->get_logger(), "Executing ComputePlanThroughPoses");

  const auto goal = goal_handle->get_goal();
  auto result = std::make_shared<ActionThroughPoses::Result>();

  // Check if we need to initialize
  if (!initialized_) {
    initialize();
  }

  // TODO: Implement your planning logic here
  // Example:
  // - Use move_group_interface_ to plan through goal->target_poses
  // - Fill result->trajectory

  // For now, just abort
  goal_handle->abort(result);
}

}  // namespace grab2_planner

#include "rclcpp_components/register_node_macro.hpp"

// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
// RCLCPP_COMPONENTS_REGISTER_NODE(grab2_planner::PlannerServer)
