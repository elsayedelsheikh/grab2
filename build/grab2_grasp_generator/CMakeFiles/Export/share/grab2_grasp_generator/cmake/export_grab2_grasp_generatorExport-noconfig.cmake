#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "grab2_grasp_generator::grasp_generator_core" for configuration ""
set_property(TARGET grab2_grasp_generator::grasp_generator_core APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(grab2_grasp_generator::grasp_generator_core PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libgrasp_generator_core.so"
  IMPORTED_SONAME_NOCONFIG "libgrasp_generator_core.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS grab2_grasp_generator::grasp_generator_core )
list(APPEND _IMPORT_CHECK_FILES_FOR_grab2_grasp_generator::grasp_generator_core "${_IMPORT_PREFIX}/lib/libgrasp_generator_core.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
