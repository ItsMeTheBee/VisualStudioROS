#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rcl_lifecycle::rcl_lifecycle" for configuration "Release"
set_property(TARGET rcl_lifecycle::rcl_lifecycle APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rcl_lifecycle::rcl_lifecycle PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/rcl_lifecycle.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/rcl_lifecycle.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS rcl_lifecycle::rcl_lifecycle )
list(APPEND _IMPORT_CHECK_FILES_FOR_rcl_lifecycle::rcl_lifecycle "${_IMPORT_PREFIX}/lib/rcl_lifecycle.lib" "${_IMPORT_PREFIX}/bin/rcl_lifecycle.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
