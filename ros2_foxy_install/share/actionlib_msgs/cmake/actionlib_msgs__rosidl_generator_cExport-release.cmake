#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "actionlib_msgs::actionlib_msgs__rosidl_generator_c" for configuration "Release"
set_property(TARGET actionlib_msgs::actionlib_msgs__rosidl_generator_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(actionlib_msgs::actionlib_msgs__rosidl_generator_c PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/actionlib_msgs__rosidl_generator_c.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/actionlib_msgs__rosidl_generator_c.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS actionlib_msgs::actionlib_msgs__rosidl_generator_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_actionlib_msgs::actionlib_msgs__rosidl_generator_c "${_IMPORT_PREFIX}/lib/actionlib_msgs__rosidl_generator_c.lib" "${_IMPORT_PREFIX}/bin/actionlib_msgs__rosidl_generator_c.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
