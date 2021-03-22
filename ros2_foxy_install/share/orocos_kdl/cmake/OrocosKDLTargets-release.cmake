#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "orocos-kdl" for configuration "Release"
set_property(TARGET orocos-kdl APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(orocos-kdl PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/orocos-kdl.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS orocos-kdl )
list(APPEND _IMPORT_CHECK_FILES_FOR_orocos-kdl "${_IMPORT_PREFIX}/lib/orocos-kdl.lib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
