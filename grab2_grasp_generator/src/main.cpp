// Copyright (c) 2025, ElSayed ElSheikh

#include <memory>

#include "grab2_grasp_generator/grasp_generator.hpp"
#include "rclcpp/rclcpp.hpp"

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<grab2_grasp_generator::GraspGenerator>();
  rclcpp::spin(node->get_node_base_interface());
  rclcpp::shutdown();

  return 0;
}
