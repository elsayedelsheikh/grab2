ament_add_gtest(test_grasp_generator
  test_grasp_generator.cpp
)

target_link_libraries(test_grasp_generator
  ${library_name}
  rclcpp::rclcpp
)