#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rmw_fastrtps_shared_cpp::rmw_fastrtps_shared_cpp" for configuration "Release"
set_property(TARGET rmw_fastrtps_shared_cpp::rmw_fastrtps_shared_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmw_fastrtps_shared_cpp::rmw_fastrtps_shared_cpp PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/rmw_fastrtps_shared_cpp.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/rmw_fastrtps_shared_cpp.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmw_fastrtps_shared_cpp::rmw_fastrtps_shared_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmw_fastrtps_shared_cpp::rmw_fastrtps_shared_cpp "${_IMPORT_PREFIX}/lib/rmw_fastrtps_shared_cpp.lib" "${_IMPORT_PREFIX}/bin/rmw_fastrtps_shared_cpp.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
