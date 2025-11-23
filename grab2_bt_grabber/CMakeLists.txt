cmake_minimum_required(VERSION 3.20)
project(grab2_bt_grabber)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_ros REQUIRED)
find_package(ament_index_cpp REQUIRED)
find_package(grab2_msgs REQUIRED)
find_package(behaviortree_cpp REQUIRED)
find_package(behaviortree_ros2 REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(grab2_ros_common REQUIRED)

set(executable_name bt_engine)

add_library(reach_object STATIC src/grabbers/reach_object.cpp)

target_include_directories(reach_object
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include/${PROJECT_NAME}>
)

target_link_libraries(reach_object PUBLIC
  rclcpp::rclcpp
  rclcpp_action::rclcpp_action
  tf2_ros::tf2_ros
  grab2_ros_common::grab2_ros_common
  behaviortree_cpp::behaviortree_cpp
  ${ament_index_cpp_TARGETS}
  ${grab2_msgs_TARGETS}
)

target_link_libraries(reach_object PRIVATE
  behaviortree_ros2::behaviortree_ros2
)

add_executable(${executable_name}
  src/main.cpp
)

target_link_libraries(${executable_name} PRIVATE reach_object rclcpp::rclcpp)

install(
  TARGETS reach_object
  EXPORT export_${PROJECT_NAME}
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
  DIRECTORY launch config behavior_trees
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_export_include_directories(
  "include/${PROJECT_NAME}"
)
ament_export_libraries(
  reach_object
)

ament_export_dependencies(
  rclcpp
  rclcpp_action
  tf2_ros
  grab2_ros_common
  behaviortree_cpp
  behaviortree_ros2
  ament_index_cpp
  grab2_msgs
)

ament_export_targets(
  export_${PROJECT_NAME}
)

ament_package()
