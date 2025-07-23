cmake_minimum_required(VERSION 3.8)
project(grab2_behavior_tree)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(ament_index_cpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(vision_msgs REQUIRED)
find_package(vision_msgs_rviz_plugins REQUIRED)
find_package(control_msgs REQUIRED)
find_package(trajectory_msgs REQUIRED)
find_package(grab2_interfaces REQUIRED)
find_package(behaviortree_cpp REQUIRED)
find_package(behaviortree_ros2 REQUIRED)

set(CMAKE_CXX_STANDARD 17)

set(THIS_PACK_DEPS
  rclcpp
  rclcpp_action
  rclcpp_components
  std_msgs
  builtin_interfaces
  geometry_msgs
  tf2_geometry_msgs
  vision_msgs
  trajectory_msgs
  ament_index_cpp
  control_msgs
  grab2_interfaces
  behaviortree_cpp
  behaviortree_ros2
)

# Libraries
add_library(grab2_set_joint_trajectory_goal SHARED plugins/set_joint_trajectory_goal.cpp)
add_library(grab2_get_grasp SHARED plugins/get_grasp.cpp)
add_library(grab2_grip SHARED plugins/grip.cpp)
add_library(grab2_move SHARED plugins/move.cpp)
add_library(grab2_plan SHARED plugins/plan.cpp)
add_library(grab2_detect_object SHARED plugins/detect_object.cpp)

list(APPEND plugin_libs
  grab2_move
  grab2_plan
  grab2_grip
  grab2_get_grasp
  grab2_set_joint_trajectory_goal
  grab2_detect_object
)

foreach(bt_plugin ${plugin_libs})
  ament_target_dependencies(${bt_plugin} ${THIS_PACK_DEPS})
  target_compile_definitions(${bt_plugin} PRIVATE BT_PLUGIN_EXPORT)
  target_include_directories(${bt_plugin} 
    PRIVATE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
endforeach()

# Executables
add_executable(grab2_engine src/main.cpp)
ament_target_dependencies(grab2_engine ${THIS_PACK_DEPS})
target_include_directories(grab2_engine PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

# Install Libs & Exec
install(
  TARGETS 
  ${plugin_libs}
  grab2_engine
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

# Install directories
install(
  DIRECTORY include/
  DESTINATION include
)

install (
  DIRECTORY behavior_trees launch
  DESTINATION share/${PROJECT_NAME}
)


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
