// Copyright (c) 2025, ElSayed ElSheikh

#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "grab2_bt_grabber/grabbers/reach_object.hpp"

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::NodeOptions options;
  auto bt_engine = std::make_shared<grab2_bt_grabber::ReachObject>(options);

  rclcpp::executors::MultiThreadedExecutor exec(rclcpp::ExecutorOptions(), 0, false,
    std::chrono::milliseconds(250));
  exec.add_node(bt_engine->node());
  exec.spin();
  exec.remove_node(bt_engine->node());

  rclcpp::shutdown();

  return 0;
}
