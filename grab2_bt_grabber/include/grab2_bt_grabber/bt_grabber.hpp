// Copyright (c) 2025, ElSayed ElSheikh

#ifndef GRAB2_BT_GRABBER__BT_GRABBER_HPP_
#define GRAB2_BT_GRABBER__BT_GRABBER_HPP_

#include "behaviortree_ros2/tree_execution_server.hpp"

namespace grab2_bt_grabber
{

class BtGrabber : public BT::TreeExecutionServer
{
public:
  explicit BtGrabber(const rclcpp::NodeOptions & options);
};

}  // namespace grab2_bt_grabber

#endif  // GRAB2_BT_GRABBER__BT_GRABBER_HPP_
