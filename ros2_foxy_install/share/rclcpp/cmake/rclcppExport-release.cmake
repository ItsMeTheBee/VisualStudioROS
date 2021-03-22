#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rclcpp::rclcpp" for configuration "Release"
set_property(TARGET rclcpp::rclcpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rclcpp::rclcpp PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/rclcpp.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/rclcpp.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS rclcpp::rclcpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_rclcpp::rclcpp "${_IMPORT_PREFIX}/lib/rclcpp.lib" "${_IMPORT_PREFIX}/bin/rclcpp.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
