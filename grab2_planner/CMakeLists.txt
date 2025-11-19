cmake_minimum_required(VERSION 3.8)
project(grab2_planner)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_ros REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(rclcpp_lifecycle REQUIRED)
find_package(pluginlib REQUIRED)
find_package(std_msgs REQUIRED)
find_package(grab2_msgs REQUIRED)
find_package(grab2_ros_common REQUIRED)
find_package(control_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(trajectory_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(moveit_msgs REQUIRED)
# find_package(moveit_visual_tools REQUIRED)
find_package(moveit_ros_planning REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)

set(executable_name planner_server)
set(library_name ${executable_name}_core)

add_library(${library_name} SHARED
  src/planner_server.cpp
)

target_include_directories(${library_name}
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include/${PROJECT_NAME}>
)

target_link_libraries(${library_name} PUBLIC
  rclcpp::rclcpp
  rclcpp_action::rclcpp_action
  grab2_ros_common::grab2_ros_common
  tf2_ros::tf2_ros
  ${std_msgs_TARGETS}
  ${control_msgs_TARGETS}
  ${geometry_msgs_TARGETS}
  ${trajectory_msgs_TARGETS}
  ${grab2_msgs_TARGETS}
  ${tf2_geometry_msgs_TARGETS}
  ${visualization_msgs_TARGETS}
  ${moveit_msgs_TARGETS}
  ${moveit_visual_tools_TARGETS}
  ${moveit_ros_planning_TARGETS}
  ${moveit_ros_planning_interface_TARGETS}
  pluginlib::pluginlib
  ${rcl_interfaces_TARGETS}
)
target_link_libraries(${library_name} PRIVATE
  ${lifecycle_msgs_TARGETS}
  rclcpp_components::component
  tf2::tf2
)

add_executable(${executable_name}
  src/main.cpp
)

target_link_libraries(${executable_name} PRIVATE ${library_name} rclcpp::rclcpp)

install(
  TARGETS ${library_name}
  EXPORT ${library_name}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

install(TARGETS ${executable_name}
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

install(
  DIRECTORY include/
  DESTINATION include/${PROJECT_NAME}
)

install(
  DIRECTORY launch config
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)

  # the following line skips the linter which checks for copyrights
  set(ament_cmake_copyright_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_export_include_directories(include/${PROJECT_NAME})
ament_export_libraries(${library_name})

ament_export_dependencies(
  std_msgs
  grab2_msgs
  control_msgs
  geometry_msgs
  trajectory_msgs
  visualization_msgs
  pluginlib
  rclcpp
  rclcpp_lifecycle
  tf2_ros
  moveit_ros_planning_interface
  grab2_ros_common
)

ament_export_targets(${library_name})
ament_package()
