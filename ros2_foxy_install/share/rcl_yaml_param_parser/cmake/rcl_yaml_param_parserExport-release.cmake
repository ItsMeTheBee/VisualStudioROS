#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rcl_yaml_param_parser::rcl_yaml_param_parser" for configuration "Release"
set_property(TARGET rcl_yaml_param_parser::rcl_yaml_param_parser APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rcl_yaml_param_parser::rcl_yaml_param_parser PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/rcl_yaml_param_parser.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/rcl_yaml_param_parser.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS rcl_yaml_param_parser::rcl_yaml_param_parser )
list(APPEND _IMPORT_CHECK_FILES_FOR_rcl_yaml_param_parser::rcl_yaml_param_parser "${_IMPORT_PREFIX}/lib/rcl_yaml_param_parser.lib" "${_IMPORT_PREFIX}/bin/rcl_yaml_param_parser.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
