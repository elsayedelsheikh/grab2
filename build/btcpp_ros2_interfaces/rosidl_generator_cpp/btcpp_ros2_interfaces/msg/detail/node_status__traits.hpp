// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from btcpp_ros2_interfaces:msg/NodeStatus.idl
// generated code does not contain a copyright notice

#ifndef BTCPP_ROS2_INTERFACES__MSG__DETAIL__NODE_STATUS__TRAITS_HPP_
#define BTCPP_ROS2_INTERFACES__MSG__DETAIL__NODE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "btcpp_ros2_interfaces/msg/detail/node_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace btcpp_ros2_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NodeStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace btcpp_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use btcpp_ros2_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const btcpp_ros2_interfaces::msg::NodeStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  btcpp_ros2_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use btcpp_ros2_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const btcpp_ros2_interfaces::msg::NodeStatus & msg)
{
  return btcpp_ros2_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<btcpp_ros2_interfaces::msg::NodeStatus>()
{
  return "btcpp_ros2_interfaces::msg::NodeStatus";
}

template<>
inline const char * name<btcpp_ros2_interfaces::msg::NodeStatus>()
{
  return "btcpp_ros2_interfaces/msg/NodeStatus";
}

template<>
struct has_fixed_size<btcpp_ros2_interfaces::msg::NodeStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<btcpp_ros2_interfaces::msg::NodeStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<btcpp_ros2_interfaces::msg::NodeStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BTCPP_ROS2_INTERFACES__MSG__DETAIL__NODE_STATUS__TRAITS_HPP_
