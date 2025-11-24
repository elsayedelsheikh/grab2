cmake_minimum_required(VERSION 3.8)
project(grab2_behavior_tree)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(yaml-cpp REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(ament_index_cpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(vision_msgs REQUIRED)
find_package(vision_msgs_rviz_plugins REQUIRED)
find_package(control_msgs REQUIRED)
find_package(trajectory_msgs REQUIRED)
find_package(grab2_msgs REQUIRED)
find_package(behaviortree_cpp REQUIRED)
find_package(behaviortree_ros2 REQUIRED)

set(CMAKE_CXX_STANDARD 17)

# Libraries
add_library(grab2_detect_object_bt_node SHARED plugins/action/detect_object.cpp)
add_library(grab2_get_trajectory_from_yaml_bt_node SHARED plugins/action/get_trajectory_from_yaml.cpp)
add_library(grab2_get_grasp_hardcoded_bt_node SHARED plugins/action/get_grasp_hardcoded.cpp)
add_library(grab2_compute_top_down_grasp_bt_node SHARED plugins/action/compute_top_down_grasp.cpp)
add_library(grab2_compute_plan_to_target_ik_bt_node SHARED plugins/action/compute_plan_to_target_ik.cpp)
add_library(grab2_move_bt_node SHARED plugins/action/move.cpp)
add_library(grab2_grip_bt_node SHARED plugins/action/grip.cpp)
add_library(grab2_reach_object_bt_node SHARED plugins/action/reach_object.cpp)

list(APPEND plugin_libs
  grab2_detect_object_bt_node
  grab2_get_trajectory_from_yaml_bt_node
  grab2_get_grasp_hardcoded_bt_node
  grab2_compute_top_down_grasp_bt_node
  grab2_compute_plan_to_target_ik_bt_node
  grab2_move_bt_node
  grab2_grip_bt_node
  grab2_reach_object_bt_node
)

foreach(bt_plugin ${plugin_libs})
  target_compile_definitions(${bt_plugin} PRIVATE BT_PLUGIN_EXPORT)
  target_include_directories(${bt_plugin}
    PUBLIC
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
    "$<INSTALL_INTERFACE:include/${PROJECT_NAME}>")
  target_link_libraries(${bt_plugin}
    yaml-cpp
    rclcpp::rclcpp
    rclcpp_action::rclcpp_action
    ${std_msgs_TARGETS}
    ${builtin_interfaces_TARGETS}
    ${geometry_msgs_TARGETS}
    ${tf2_geometry_msgs_TARGETS}
    ${vision_msgs_TARGETS}
    ${trajectory_msgs_TARGETS}
    ament_index_cpp::ament_index_cpp
    ${control_msgs_TARGETS}
    ${grab2_msgs_TARGETS}
    behaviortree_cpp::behaviortree_cpp
    behaviortree_ros2::behaviortree_ros2
  )
endforeach()

# Executables
add_executable(grab2_engine src/main.cpp)
target_include_directories(grab2_engine PUBLIC
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
  "$<INSTALL_INTERFACE:include/${PROJECT_NAME}>")
target_link_libraries(grab2_engine
  rclcpp::rclcpp
  rclcpp_action::rclcpp_action
  ${std_msgs_TARGETS}
  ${builtin_interfaces_TARGETS}
  ${geometry_msgs_TARGETS}
  ${tf2_geometry_msgs_TARGETS}
  ${vision_msgs_TARGETS}
  ${trajectory_msgs_TARGETS}
  ament_index_cpp::ament_index_cpp
  ${control_msgs_TARGETS}
  ${grab2_msgs_TARGETS}
  behaviortree_cpp::behaviortree_cpp
  behaviortree_ros2::behaviortree_ros2
)

# Install Libs & Exec
install(
  TARGETS
  ${plugin_libs}
  grab2_engine
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

# Install plugins for other packages to load
install(
  TARGETS
  ${plugin_libs}
  LIBRARY DESTINATION share/${PROJECT_NAME}/bt_plugins
  ARCHIVE DESTINATION share/${PROJECT_NAME}/bt_plugins
  RUNTIME DESTINATION share/${PROJECT_NAME}/bt_plugins
)

# Install directories
install(
  DIRECTORY include/
  DESTINATION include/${PROJECT_NAME}
)

install(
  DIRECTORY behavior_trees launch config
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
