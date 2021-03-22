#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "kdl_parser::kdl_parser" for configuration "Release"
set_property(TARGET kdl_parser::kdl_parser APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(kdl_parser::kdl_parser PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/kdl_parser.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/kdl_parser.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS kdl_parser::kdl_parser )
list(APPEND _IMPORT_CHECK_FILES_FOR_kdl_parser::kdl_parser "${_IMPORT_PREFIX}/lib/kdl_parser.lib" "${_IMPORT_PREFIX}/bin/kdl_parser.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
