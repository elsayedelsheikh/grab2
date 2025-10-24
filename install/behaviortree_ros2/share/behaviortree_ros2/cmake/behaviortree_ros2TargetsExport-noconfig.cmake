#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "behaviortree_ros2::behaviortree_ros2" for configuration ""
set_property(TARGET behaviortree_ros2::behaviortree_ros2 APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(behaviortree_ros2::behaviortree_ros2 PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libbehaviortree_ros2.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS behaviortree_ros2::behaviortree_ros2 )
list(APPEND _IMPORT_CHECK_FILES_FOR_behaviortree_ros2::behaviortree_ros2 "${_IMPORT_PREFIX}/lib/libbehaviortree_ros2.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
