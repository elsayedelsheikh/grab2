// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from btcpp_ros2_interfaces:msg/NodeStatus.idl
// generated code does not contain a copyright notice

#ifndef BTCPP_ROS2_INTERFACES__MSG__DETAIL__NODE_STATUS__BUILDER_HPP_
#define BTCPP_ROS2_INTERFACES__MSG__DETAIL__NODE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "btcpp_ros2_interfaces/msg/detail/node_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace btcpp_ros2_interfaces
{

namespace msg
{

namespace builder
{

class Init_NodeStatus_status
{
public:
  Init_NodeStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::btcpp_ros2_interfaces::msg::NodeStatus status(::btcpp_ros2_interfaces::msg::NodeStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::btcpp_ros2_interfaces::msg::NodeStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::btcpp_ros2_interfaces::msg::NodeStatus>()
{
  return btcpp_ros2_interfaces::msg::builder::Init_NodeStatus_status();
}

}  // namespace btcpp_ros2_interfaces

#endif  // BTCPP_ROS2_INTERFACES__MSG__DETAIL__NODE_STATUS__BUILDER_HPP_
