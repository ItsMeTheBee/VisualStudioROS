#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rcl_action::rcl_action" for configuration "Release"
set_property(TARGET rcl_action::rcl_action APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rcl_action::rcl_action PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/rcl_action.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/rcl_action.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS rcl_action::rcl_action )
list(APPEND _IMPORT_CHECK_FILES_FOR_rcl_action::rcl_action "${_IMPORT_PREFIX}/lib/rcl_action.lib" "${_IMPORT_PREFIX}/bin/rcl_action.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
