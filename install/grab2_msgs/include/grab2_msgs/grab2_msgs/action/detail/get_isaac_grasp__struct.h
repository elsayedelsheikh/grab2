// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from grab2_msgs:action/GetIsaacGrasp.idl
// generated code does not contain a copyright notice

#ifndef GRAB2_MSGS__ACTION__DETAIL__GET_ISAAC_GRASP__STRUCT_H_
#define GRAB2_MSGS__ACTION__DETAIL__GET_ISAAC_GRASP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'isaac_grasp'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/GetIsaacGrasp in the package grab2_msgs.
typedef struct grab2_msgs__action__GetIsaacGrasp_Goal
{
  /// Object Pose
  geometry_msgs__msg__PoseStamped object_pose;
  /// Path to the isaac_grasp YAML file
  rosidl_runtime_c__String isaac_grasp;
} grab2_msgs__action__GetIsaacGrasp_Goal;

// Struct for a sequence of grab2_msgs__action__GetIsaacGrasp_Goal.
typedef struct grab2_msgs__action__GetIsaacGrasp_Goal__Sequence
{
  grab2_msgs__action__GetIsaacGrasp_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__GetIsaacGrasp_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'grasps'
#include "moveit_msgs/msg/detail/grasp__struct.h"

/// Struct defined in action/GetIsaacGrasp in the package grab2_msgs.
typedef struct grab2_msgs__action__GetIsaacGrasp_Result
{
  /// All grasps
  moveit_msgs__msg__Grasp__Sequence grasps;
} grab2_msgs__action__GetIsaacGrasp_Result;

// Struct for a sequence of grab2_msgs__action__GetIsaacGrasp_Result.
typedef struct grab2_msgs__action__GetIsaacGrasp_Result__Sequence
{
  grab2_msgs__action__GetIsaacGrasp_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__GetIsaacGrasp_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/GetIsaacGrasp in the package grab2_msgs.
typedef struct grab2_msgs__action__GetIsaacGrasp_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} grab2_msgs__action__GetIsaacGrasp_Feedback;

// Struct for a sequence of grab2_msgs__action__GetIsaacGrasp_Feedback.
typedef struct grab2_msgs__action__GetIsaacGrasp_Feedback__Sequence
{
  grab2_msgs__action__GetIsaacGrasp_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__GetIsaacGrasp_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "grab2_msgs/action/detail/get_isaac_grasp__struct.h"

/// Struct defined in action/GetIsaacGrasp in the package grab2_msgs.
typedef struct grab2_msgs__action__GetIsaacGrasp_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  grab2_msgs__action__GetIsaacGrasp_Goal goal;
} grab2_msgs__action__GetIsaacGrasp_SendGoal_Request;

// Struct for a sequence of grab2_msgs__action__GetIsaacGrasp_SendGoal_Request.
typedef struct grab2_msgs__action__GetIsaacGrasp_SendGoal_Request__Sequence
{
  grab2_msgs__action__GetIsaacGrasp_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__GetIsaacGrasp_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GetIsaacGrasp in the package grab2_msgs.
typedef struct grab2_msgs__action__GetIsaacGrasp_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} grab2_msgs__action__GetIsaacGrasp_SendGoal_Response;

// Struct for a sequence of grab2_msgs__action__GetIsaacGrasp_SendGoal_Response.
typedef struct grab2_msgs__action__GetIsaacGrasp_SendGoal_Response__Sequence
{
  grab2_msgs__action__GetIsaacGrasp_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__GetIsaacGrasp_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GetIsaacGrasp in the package grab2_msgs.
typedef struct grab2_msgs__action__GetIsaacGrasp_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} grab2_msgs__action__GetIsaacGrasp_GetResult_Request;

// Struct for a sequence of grab2_msgs__action__GetIsaacGrasp_GetResult_Request.
typedef struct grab2_msgs__action__GetIsaacGrasp_GetResult_Request__Sequence
{
  grab2_msgs__action__GetIsaacGrasp_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__GetIsaacGrasp_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__struct.h"

/// Struct defined in action/GetIsaacGrasp in the package grab2_msgs.
typedef struct grab2_msgs__action__GetIsaacGrasp_GetResult_Response
{
  int8_t status;
  grab2_msgs__action__GetIsaacGrasp_Result result;
} grab2_msgs__action__GetIsaacGrasp_GetResult_Response;

// Struct for a sequence of grab2_msgs__action__GetIsaacGrasp_GetResult_Response.
typedef struct grab2_msgs__action__GetIsaacGrasp_GetResult_Response__Sequence
{
  grab2_msgs__action__GetIsaacGrasp_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__GetIsaacGrasp_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "grab2_msgs/action/detail/get_isaac_grasp__struct.h"

/// Struct defined in action/GetIsaacGrasp in the package grab2_msgs.
typedef struct grab2_msgs__action__GetIsaacGrasp_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  grab2_msgs__action__GetIsaacGrasp_Feedback feedback;
} grab2_msgs__action__GetIsaacGrasp_FeedbackMessage;

// Struct for a sequence of grab2_msgs__action__GetIsaacGrasp_FeedbackMessage.
typedef struct grab2_msgs__action__GetIsaacGrasp_FeedbackMessage__Sequence
{
  grab2_msgs__action__GetIsaacGrasp_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__GetIsaacGrasp_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAB2_MSGS__ACTION__DETAIL__GET_ISAAC_GRASP__STRUCT_H_
