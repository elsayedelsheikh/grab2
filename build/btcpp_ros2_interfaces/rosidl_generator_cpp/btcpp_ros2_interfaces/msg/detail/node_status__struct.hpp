// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from btcpp_ros2_interfaces:msg/NodeStatus.idl
// generated code does not contain a copyright notice

#ifndef BTCPP_ROS2_INTERFACES__MSG__DETAIL__NODE_STATUS__STRUCT_HPP_
#define BTCPP_ROS2_INTERFACES__MSG__DETAIL__NODE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__btcpp_ros2_interfaces__msg__NodeStatus __attribute__((deprecated))
#else
# define DEPRECATED__btcpp_ros2_interfaces__msg__NodeStatus __declspec(deprecated)
#endif

namespace btcpp_ros2_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeStatus_
{
  using Type = NodeStatus_<ContainerAllocator>;

  explicit NodeStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit NodeStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    uint8_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t IDLE =
    0u;
  static constexpr uint8_t RUNNING =
    1u;
  static constexpr uint8_t SUCCESS =
    2u;
  static constexpr uint8_t FAILURE =
    3u;
  static constexpr uint8_t SKIPPED =
    4u;

  // pointer types
  using RawPtr =
    btcpp_ros2_interfaces::msg::NodeStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const btcpp_ros2_interfaces::msg::NodeStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::msg::NodeStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<btcpp_ros2_interfaces::msg::NodeStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::msg::NodeStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::msg::NodeStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      btcpp_ros2_interfaces::msg::NodeStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<btcpp_ros2_interfaces::msg::NodeStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::msg::NodeStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<btcpp_ros2_interfaces::msg::NodeStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__btcpp_ros2_interfaces__msg__NodeStatus
    std::shared_ptr<btcpp_ros2_interfaces::msg::NodeStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__btcpp_ros2_interfaces__msg__NodeStatus
    std::shared_ptr<btcpp_ros2_interfaces::msg::NodeStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeStatus_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeStatus_

// alias to use template instance with default allocator
using NodeStatus =
  btcpp_ros2_interfaces::msg::NodeStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeStatus_<ContainerAllocator>::IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeStatus_<ContainerAllocator>::RUNNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeStatus_<ContainerAllocator>::SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeStatus_<ContainerAllocator>::FAILURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeStatus_<ContainerAllocator>::SKIPPED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace btcpp_ros2_interfaces

#endif  // BTCPP_ROS2_INTERFACES__MSG__DETAIL__NODE_STATUS__STRUCT_HPP_
