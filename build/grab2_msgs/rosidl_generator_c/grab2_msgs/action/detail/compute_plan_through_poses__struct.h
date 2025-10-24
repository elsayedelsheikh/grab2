// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from grab2_msgs:action/ComputePlanThroughPoses.idl
// generated code does not contain a copyright notice

#ifndef GRAB2_MSGS__ACTION__DETAIL__COMPUTE_PLAN_THROUGH_POSES__STRUCT_H_
#define GRAB2_MSGS__ACTION__DETAIL__COMPUTE_PLAN_THROUGH_POSES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'goals'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in action/ComputePlanThroughPoses in the package grab2_msgs.
typedef struct grab2_msgs__action__ComputePlanThroughPoses_Goal
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__PoseStamped__Sequence goals;
  /// Optional (seconds), used when forming the trajectory message
  double interpolation_dt;
} grab2_msgs__action__ComputePlanThroughPoses_Goal;

// Struct for a sequence of grab2_msgs__action__ComputePlanThroughPoses_Goal.
typedef struct grab2_msgs__action__ComputePlanThroughPoses_Goal__Sequence
{
  grab2_msgs__action__ComputePlanThroughPoses_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__ComputePlanThroughPoses_Goal__Sequence;


// Constants defined in the message

/// Constant 'SUCCESSFUL'.
enum
{
  grab2_msgs__action__ComputePlanThroughPoses_Result__SUCCESSFUL = 0l
};

/// Constant 'INVALID_GOAL'.
enum
{
  grab2_msgs__action__ComputePlanThroughPoses_Result__INVALID_GOAL = -1l
};

/// Constant 'INVALID_JOINTS'.
enum
{
  grab2_msgs__action__ComputePlanThroughPoses_Result__INVALID_JOINTS = -2l
};

/// Constant 'OLD_HEADER_TIMESTAMP'.
enum
{
  grab2_msgs__action__ComputePlanThroughPoses_Result__OLD_HEADER_TIMESTAMP = -3l
};

// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"
// Member 'error_string'
#include "rosidl_runtime_c/string.h"
// Member 'failed_indices'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/ComputePlanThroughPoses in the package grab2_msgs.
typedef struct grab2_msgs__action__ComputePlanThroughPoses_Result
{
  trajectory_msgs__msg__JointTrajectory trajectory;
  int32_t error_code;
  /// Human-readable explanation of the error
  /// Examples:
  ///  - INVALID_GOAL: The reason for the invalid goal (e.g., no goals provided or unreachable pose)
  ///  - INVALID_JOINTS: The mismatch between expected and provided joints
  ///  - OLD_HEADER_TIMESTAMP: Timestamp in the past
  rosidl_runtime_c__String error_string;
  /// Total time of the combined trajectory (seconds)
  double total_duration;
  /// Number of poses planned successfully
  int32_t successful_count;
  /// Number of poses that failed
  int32_t failed_count;
  /// Indices of poses that failed to plan
  rosidl_runtime_c__int32__Sequence failed_indices;
} grab2_msgs__action__ComputePlanThroughPoses_Result;

// Struct for a sequence of grab2_msgs__action__ComputePlanThroughPoses_Result.
typedef struct grab2_msgs__action__ComputePlanThroughPoses_Result__Sequence
{
  grab2_msgs__action__ComputePlanThroughPoses_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__ComputePlanThroughPoses_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ComputePlanThroughPoses in the package grab2_msgs.
typedef struct grab2_msgs__action__ComputePlanThroughPoses_Feedback
{
  /// ----- Feedback Definition -----
  /// (0–100) Planning progress feedback
  float progress_percentage;
  /// Optional short text (e.g., "Planning pose 3/5")
  rosidl_runtime_c__String current_status;
} grab2_msgs__action__ComputePlanThroughPoses_Feedback;

// Struct for a sequence of grab2_msgs__action__ComputePlanThroughPoses_Feedback.
typedef struct grab2_msgs__action__ComputePlanThroughPoses_Feedback__Sequence
{
  grab2_msgs__action__ComputePlanThroughPoses_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__ComputePlanThroughPoses_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "grab2_msgs/action/detail/compute_plan_through_poses__struct.h"

/// Struct defined in action/ComputePlanThroughPoses in the package grab2_msgs.
typedef struct grab2_msgs__action__ComputePlanThroughPoses_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  grab2_msgs__action__ComputePlanThroughPoses_Goal goal;
} grab2_msgs__action__ComputePlanThroughPoses_SendGoal_Request;

// Struct for a sequence of grab2_msgs__action__ComputePlanThroughPoses_SendGoal_Request.
typedef struct grab2_msgs__action__ComputePlanThroughPoses_SendGoal_Request__Sequence
{
  grab2_msgs__action__ComputePlanThroughPoses_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__ComputePlanThroughPoses_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ComputePlanThroughPoses in the package grab2_msgs.
typedef struct grab2_msgs__action__ComputePlanThroughPoses_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} grab2_msgs__action__ComputePlanThroughPoses_SendGoal_Response;

// Struct for a sequence of grab2_msgs__action__ComputePlanThroughPoses_SendGoal_Response.
typedef struct grab2_msgs__action__ComputePlanThroughPoses_SendGoal_Response__Sequence
{
  grab2_msgs__action__ComputePlanThroughPoses_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__ComputePlanThroughPoses_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ComputePlanThroughPoses in the package grab2_msgs.
typedef struct grab2_msgs__action__ComputePlanThroughPoses_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} grab2_msgs__action__ComputePlanThroughPoses_GetResult_Request;

// Struct for a sequence of grab2_msgs__action__ComputePlanThroughPoses_GetResult_Request.
typedef struct grab2_msgs__action__ComputePlanThroughPoses_GetResult_Request__Sequence
{
  grab2_msgs__action__ComputePlanThroughPoses_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__ComputePlanThroughPoses_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "grab2_msgs/action/detail/compute_plan_through_poses__struct.h"

/// Struct defined in action/ComputePlanThroughPoses in the package grab2_msgs.
typedef struct grab2_msgs__action__ComputePlanThroughPoses_GetResult_Response
{
  int8_t status;
  grab2_msgs__action__ComputePlanThroughPoses_Result result;
} grab2_msgs__action__ComputePlanThroughPoses_GetResult_Response;

// Struct for a sequence of grab2_msgs__action__ComputePlanThroughPoses_GetResult_Response.
typedef struct grab2_msgs__action__ComputePlanThroughPoses_GetResult_Response__Sequence
{
  grab2_msgs__action__ComputePlanThroughPoses_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__ComputePlanThroughPoses_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "grab2_msgs/action/detail/compute_plan_through_poses__struct.h"

/// Struct defined in action/ComputePlanThroughPoses in the package grab2_msgs.
typedef struct grab2_msgs__action__ComputePlanThroughPoses_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  grab2_msgs__action__ComputePlanThroughPoses_Feedback feedback;
} grab2_msgs__action__ComputePlanThroughPoses_FeedbackMessage;

// Struct for a sequence of grab2_msgs__action__ComputePlanThroughPoses_FeedbackMessage.
typedef struct grab2_msgs__action__ComputePlanThroughPoses_FeedbackMessage__Sequence
{
  grab2_msgs__action__ComputePlanThroughPoses_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__ComputePlanThroughPoses_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAB2_MSGS__ACTION__DETAIL__COMPUTE_PLAN_THROUGH_POSES__STRUCT_H_
