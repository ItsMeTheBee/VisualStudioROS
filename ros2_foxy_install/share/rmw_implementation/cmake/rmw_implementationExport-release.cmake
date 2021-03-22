#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rmw_implementation::rmw_implementation" for configuration "Release"
set_property(TARGET rmw_implementation::rmw_implementation APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmw_implementation::rmw_implementation PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/rmw_implementation.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/rmw_implementation.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmw_implementation::rmw_implementation )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmw_implementation::rmw_implementation "${_IMPORT_PREFIX}/lib/rmw_implementation.lib" "${_IMPORT_PREFIX}/bin/rmw_implementation.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
