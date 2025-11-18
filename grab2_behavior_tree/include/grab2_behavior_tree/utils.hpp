// Copyright (c) 2025, ElSayed ElSheikh

#ifndef GRAB2_BEHAVIOR_TREE__UTILS_HPP_
#define GRAB2_BEHAVIOR_TREE__UTILS_HPP_

#include <string>
#include "behaviortree_cpp/behavior_tree.h"

#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "trajectory_msgs/msg/joint_trajectory.hpp"

namespace grab2_behavior_tree
{
enum class AnsiColor
{
  RESET,
  RED,
  GREEN,
  YELLOW,
  BLUE,
  CYAN,
  MAGENTA,
  WHITE
};

inline const char * getAnsiCode(AnsiColor color = AnsiColor::RESET)
{
  switch (color) {
    case AnsiColor::RESET:   return "\033[0m";
    case AnsiColor::RED:     return "\033[31m";
    case AnsiColor::GREEN:   return "\033[32m";
    case AnsiColor::YELLOW:  return "\033[33m";
    case AnsiColor::BLUE:    return "\033[34m";
    case AnsiColor::CYAN:    return "\033[36m";
    case AnsiColor::MAGENTA: return "\033[35m";
    case AnsiColor::WHITE:   return "\033[37m";
    default:                 return "\033[0m";
  }
}

inline std::string colorize(const std::string & msg, AnsiColor color)
{
  return getAnsiCode(color) + msg + getAnsiCode();
}

}  // namespace grab2_behavior_tree

namespace BT
{

template<>
inline geometry_msgs::msg::Pose convertFromString(const StringView key)
{
  // three real numbers separated by semicolons
  auto parts = BT::splitString(key, ';');
  if (parts.size() != 7) {
    throw std::runtime_error("invalid number of fields for Pose attribute)");
  } else {
    geometry_msgs::msg::Pose pose;
    pose.position.x = BT::convertFromString<double>(parts[0]);
    pose.position.y = BT::convertFromString<double>(parts[1]);
    pose.position.z = BT::convertFromString<double>(parts[2]);
    pose.orientation.x = BT::convertFromString<double>(parts[3]);
    pose.orientation.y = BT::convertFromString<double>(parts[4]);
    pose.orientation.z = BT::convertFromString<double>(parts[5]);
    pose.orientation.w = BT::convertFromString<double>(parts[6]);
    return pose;
  }
}

template<>
inline geometry_msgs::msg::PoseStamped convertFromString(const StringView key)
{
  // three real numbers separated by semicolons
  auto parts = BT::splitString(key, ';');
  if (parts.size() != 7) {
    throw std::runtime_error("invalid number of fields for Pose attribute)");
  } else {
    geometry_msgs::msg::PoseStamped pose_stamped;
    pose_stamped.header.frame_id = "world";
    pose_stamped.pose.position.x = BT::convertFromString<double>(parts[0]);
    pose_stamped.pose.position.y = BT::convertFromString<double>(parts[1]);
    pose_stamped.pose.position.z = BT::convertFromString<double>(parts[2]);
    pose_stamped.pose.orientation.x = BT::convertFromString<double>(parts[3]);
    pose_stamped.pose.orientation.y = BT::convertFromString<double>(parts[4]);
    pose_stamped.pose.orientation.z = BT::convertFromString<double>(parts[5]);
    pose_stamped.pose.orientation.w = BT::convertFromString<double>(parts[6]);
    return pose_stamped;
  }
}

}  // namespace BT

#endif  // GRAB2_BEHAVIOR_TREE__UTILS_HPP_
