#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rclcpp_lifecycle::rclcpp_lifecycle" for configuration "Release"
set_property(TARGET rclcpp_lifecycle::rclcpp_lifecycle APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rclcpp_lifecycle::rclcpp_lifecycle PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/rclcpp_lifecycle.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/rclcpp_lifecycle.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS rclcpp_lifecycle::rclcpp_lifecycle )
list(APPEND _IMPORT_CHECK_FILES_FOR_rclcpp_lifecycle::rclcpp_lifecycle "${_IMPORT_PREFIX}/lib/rclcpp_lifecycle.lib" "${_IMPORT_PREFIX}/bin/rclcpp_lifecycle.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
