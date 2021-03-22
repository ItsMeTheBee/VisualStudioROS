#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "pendulum_msgs::pendulum_msgs__rosidl_generator_c" for configuration "Release"
set_property(TARGET pendulum_msgs::pendulum_msgs__rosidl_generator_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(pendulum_msgs::pendulum_msgs__rosidl_generator_c PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/pendulum_msgs__rosidl_generator_c.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/pendulum_msgs__rosidl_generator_c.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS pendulum_msgs::pendulum_msgs__rosidl_generator_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_pendulum_msgs::pendulum_msgs__rosidl_generator_c "${_IMPORT_PREFIX}/lib/pendulum_msgs__rosidl_generator_c.lib" "${_IMPORT_PREFIX}/bin/pendulum_msgs__rosidl_generator_c.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
