// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from btcpp_ros2_interfaces:action/Sleep.idl
// generated code does not contain a copyright notice

#ifndef BTCPP_ROS2_INTERFACES__ACTION__DETAIL__SLEEP__STRUCT_H_
#define BTCPP_ROS2_INTERFACES__ACTION__DETAIL__SLEEP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Sleep in the package btcpp_ros2_interfaces.
typedef struct btcpp_ros2_interfaces__action__Sleep_Goal
{
  int32_t msec_timeout;
} btcpp_ros2_interfaces__action__Sleep_Goal;

// Struct for a sequence of btcpp_ros2_interfaces__action__Sleep_Goal.
typedef struct btcpp_ros2_interfaces__action__Sleep_Goal__Sequence
{
  btcpp_ros2_interfaces__action__Sleep_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} btcpp_ros2_interfaces__action__Sleep_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Sleep in the package btcpp_ros2_interfaces.
typedef struct btcpp_ros2_interfaces__action__Sleep_Result
{
  bool done;
} btcpp_ros2_interfaces__action__Sleep_Result;

// Struct for a sequence of btcpp_ros2_interfaces__action__Sleep_Result.
typedef struct btcpp_ros2_interfaces__action__Sleep_Result__Sequence
{
  btcpp_ros2_interfaces__action__Sleep_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} btcpp_ros2_interfaces__action__Sleep_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Sleep in the package btcpp_ros2_interfaces.
typedef struct btcpp_ros2_interfaces__action__Sleep_Feedback
{
  int32_t cycle;
} btcpp_ros2_interfaces__action__Sleep_Feedback;

// Struct for a sequence of btcpp_ros2_interfaces__action__Sleep_Feedback.
typedef struct btcpp_ros2_interfaces__action__Sleep_Feedback__Sequence
{
  btcpp_ros2_interfaces__action__Sleep_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} btcpp_ros2_interfaces__action__Sleep_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "btcpp_ros2_interfaces/action/detail/sleep__struct.h"

/// Struct defined in action/Sleep in the package btcpp_ros2_interfaces.
typedef struct btcpp_ros2_interfaces__action__Sleep_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  btcpp_ros2_interfaces__action__Sleep_Goal goal;
} btcpp_ros2_interfaces__action__Sleep_SendGoal_Request;

// Struct for a sequence of btcpp_ros2_interfaces__action__Sleep_SendGoal_Request.
typedef struct btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__Sequence
{
  btcpp_ros2_interfaces__action__Sleep_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Sleep in the package btcpp_ros2_interfaces.
typedef struct btcpp_ros2_interfaces__action__Sleep_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} btcpp_ros2_interfaces__action__Sleep_SendGoal_Response;

// Struct for a sequence of btcpp_ros2_interfaces__action__Sleep_SendGoal_Response.
typedef struct btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__Sequence
{
  btcpp_ros2_interfaces__action__Sleep_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Sleep in the package btcpp_ros2_interfaces.
typedef struct btcpp_ros2_interfaces__action__Sleep_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} btcpp_ros2_interfaces__action__Sleep_GetResult_Request;

// Struct for a sequence of btcpp_ros2_interfaces__action__Sleep_GetResult_Request.
typedef struct btcpp_ros2_interfaces__action__Sleep_GetResult_Request__Sequence
{
  btcpp_ros2_interfaces__action__Sleep_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} btcpp_ros2_interfaces__action__Sleep_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "btcpp_ros2_interfaces/action/detail/sleep__struct.h"

/// Struct defined in action/Sleep in the package btcpp_ros2_interfaces.
typedef struct btcpp_ros2_interfaces__action__Sleep_GetResult_Response
{
  int8_t status;
  btcpp_ros2_interfaces__action__Sleep_Result result;
} btcpp_ros2_interfaces__action__Sleep_GetResult_Response;

// Struct for a sequence of btcpp_ros2_interfaces__action__Sleep_GetResult_Response.
typedef struct btcpp_ros2_interfaces__action__Sleep_GetResult_Response__Sequence
{
  btcpp_ros2_interfaces__action__Sleep_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} btcpp_ros2_interfaces__action__Sleep_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "btcpp_ros2_interfaces/action/detail/sleep__struct.h"

/// Struct defined in action/Sleep in the package btcpp_ros2_interfaces.
typedef struct btcpp_ros2_interfaces__action__Sleep_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  btcpp_ros2_interfaces__action__Sleep_Feedback feedback;
} btcpp_ros2_interfaces__action__Sleep_FeedbackMessage;

// Struct for a sequence of btcpp_ros2_interfaces__action__Sleep_FeedbackMessage.
typedef struct btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__Sequence
{
  btcpp_ros2_interfaces__action__Sleep_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BTCPP_ROS2_INTERFACES__ACTION__DETAIL__SLEEP__STRUCT_H_
