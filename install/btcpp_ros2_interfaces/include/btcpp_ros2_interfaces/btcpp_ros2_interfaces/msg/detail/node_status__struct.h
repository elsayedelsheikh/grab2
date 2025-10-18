// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from btcpp_ros2_interfaces:msg/NodeStatus.idl
// generated code does not contain a copyright notice

#ifndef BTCPP_ROS2_INTERFACES__MSG__DETAIL__NODE_STATUS__STRUCT_H_
#define BTCPP_ROS2_INTERFACES__MSG__DETAIL__NODE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'IDLE'.
enum
{
  btcpp_ros2_interfaces__msg__NodeStatus__IDLE = 0
};

/// Constant 'RUNNING'.
enum
{
  btcpp_ros2_interfaces__msg__NodeStatus__RUNNING = 1
};

/// Constant 'SUCCESS'.
enum
{
  btcpp_ros2_interfaces__msg__NodeStatus__SUCCESS = 2
};

/// Constant 'FAILURE'.
enum
{
  btcpp_ros2_interfaces__msg__NodeStatus__FAILURE = 3
};

/// Constant 'SKIPPED'.
enum
{
  btcpp_ros2_interfaces__msg__NodeStatus__SKIPPED = 4
};

/// Struct defined in msg/NodeStatus in the package btcpp_ros2_interfaces.
/**
  * NodeStatus Enums
 */
typedef struct btcpp_ros2_interfaces__msg__NodeStatus
{
  uint8_t status;
} btcpp_ros2_interfaces__msg__NodeStatus;

// Struct for a sequence of btcpp_ros2_interfaces__msg__NodeStatus.
typedef struct btcpp_ros2_interfaces__msg__NodeStatus__Sequence
{
  btcpp_ros2_interfaces__msg__NodeStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} btcpp_ros2_interfaces__msg__NodeStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BTCPP_ROS2_INTERFACES__MSG__DETAIL__NODE_STATUS__STRUCT_H_
