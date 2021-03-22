#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "move_base_msgs::move_base_msgs__rosidl_typesupport_introspection_c" for configuration "Release"
set_property(TARGET move_base_msgs::move_base_msgs__rosidl_typesupport_introspection_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(move_base_msgs::move_base_msgs__rosidl_typesupport_introspection_c PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/move_base_msgs__rosidl_typesupport_introspection_c.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/move_base_msgs__rosidl_typesupport_introspection_c.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS move_base_msgs::move_base_msgs__rosidl_typesupport_introspection_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_move_base_msgs::move_base_msgs__rosidl_typesupport_introspection_c "${_IMPORT_PREFIX}/lib/move_base_msgs__rosidl_typesupport_introspection_c.lib" "${_IMPORT_PREFIX}/bin/move_base_msgs__rosidl_typesupport_introspection_c.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
