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
find_package(grab2_msgs REQUIRED)
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
  grab2_msgs
  behaviortree_cpp
  behaviortree_ros2
)

# Libraries
add_library(grab2_get_trajectory_from_yaml SHARED plugins/get_trajectory_from_yaml.cpp)
add_library(grab2_get_grasp_hardcoded SHARED plugins/get_grasp_hardcoded.cpp)
add_library(grab2_detect_object SHARED plugins/detect_object.cpp)
add_library(grab2_get_grasp SHARED plugins/get_grasp.cpp)
add_library(grab2_plan SHARED plugins/plan.cpp)
add_library(grab2_move SHARED plugins/move.cpp)
add_library(grab2_grip SHARED plugins/grip.cpp)

list(APPEND plugin_libs
  grab2_get_trajectory_from_yaml
  grab2_get_grasp_hardcoded
  grab2_detect_object
  grab2_get_grasp
  grab2_plan
  grab2_move
  grab2_grip
)

foreach(bt_plugin ${plugin_libs})
  ament_target_dependencies(${bt_plugin} ${THIS_PACK_DEPS})
  target_compile_definitions(${bt_plugin} PRIVATE BT_PLUGIN_EXPORT)
  target_include_directories(${bt_plugin}
    PRIVATE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
endforeach()

target_link_libraries(grab2_get_trajectory_from_yaml
  yaml-cpp
)

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
  DESTINATION include
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
