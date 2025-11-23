// Copyright (c) 2025, ElSayed ElSheikh

#ifndef GRAB2_BT_GRABBER__GRABBERS__REACH_OBJECT_HPP_
#define GRAB2_BT_GRABBER__GRABBERS__REACH_OBJECT_HPP_

#include <string>

#include "grab2_ros_common/bt_execution_server.hpp"
#include "grab2_msgs/action/reach_object.hpp"

namespace grab2_bt_grabber
{

class ReachObject : public BT::TreeExecutionServer<grab2_msgs::action::ReachObject>
{
public:
  explicit ReachObject(const rclcpp::NodeOptions & options);

protected:
  std::string getTreeName(const GoalType & goal) override;
  void onTreeCreated(BT::Tree & tree, const GoalType & goal) override;

private:
  void configure();
};

}  // namespace grab2_bt_grabber

#endif  // GRAB2_BT_GRABBER__GRABBERS__REACH_OBJECT_HPP_
