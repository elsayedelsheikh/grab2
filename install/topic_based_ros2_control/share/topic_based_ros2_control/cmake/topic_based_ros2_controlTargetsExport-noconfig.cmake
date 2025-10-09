#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "topic_based_ros2_control::topic_based_ros2_control" for configuration ""
set_property(TARGET topic_based_ros2_control::topic_based_ros2_control APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(topic_based_ros2_control::topic_based_ros2_control PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtopic_based_ros2_control.so"
  IMPORTED_SONAME_NOCONFIG "libtopic_based_ros2_control.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS topic_based_ros2_control::topic_based_ros2_control )
list(APPEND _IMPORT_CHECK_FILES_FOR_topic_based_ros2_control::topic_based_ros2_control "${_IMPORT_PREFIX}/lib/libtopic_based_ros2_control.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
