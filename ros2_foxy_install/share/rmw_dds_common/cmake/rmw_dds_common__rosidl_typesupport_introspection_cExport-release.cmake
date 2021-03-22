#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rmw_dds_common::rmw_dds_common__rosidl_typesupport_introspection_c" for configuration "Release"
set_property(TARGET rmw_dds_common::rmw_dds_common__rosidl_typesupport_introspection_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmw_dds_common::rmw_dds_common__rosidl_typesupport_introspection_c PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/rmw_dds_common__rosidl_typesupport_introspection_c.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/rmw_dds_common__rosidl_typesupport_introspection_c.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmw_dds_common::rmw_dds_common__rosidl_typesupport_introspection_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmw_dds_common::rmw_dds_common__rosidl_typesupport_introspection_c "${_IMPORT_PREFIX}/lib/rmw_dds_common__rosidl_typesupport_introspection_c.lib" "${_IMPORT_PREFIX}/bin/rmw_dds_common__rosidl_typesupport_introspection_c.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
