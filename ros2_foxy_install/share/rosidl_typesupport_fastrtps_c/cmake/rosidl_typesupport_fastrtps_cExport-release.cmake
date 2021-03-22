#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rosidl_typesupport_fastrtps_c::rosidl_typesupport_fastrtps_c" for configuration "Release"
set_property(TARGET rosidl_typesupport_fastrtps_c::rosidl_typesupport_fastrtps_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rosidl_typesupport_fastrtps_c::rosidl_typesupport_fastrtps_c PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/rosidl_typesupport_fastrtps_c.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/rosidl_typesupport_fastrtps_c.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS rosidl_typesupport_fastrtps_c::rosidl_typesupport_fastrtps_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_rosidl_typesupport_fastrtps_c::rosidl_typesupport_fastrtps_c "${_IMPORT_PREFIX}/lib/rosidl_typesupport_fastrtps_c.lib" "${_IMPORT_PREFIX}/bin/rosidl_typesupport_fastrtps_c.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
