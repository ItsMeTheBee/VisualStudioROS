#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rviz_common::rviz_common" for configuration "Release"
set_property(TARGET rviz_common::rviz_common APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rviz_common::rviz_common PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/rviz_common.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/rviz_common.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS rviz_common::rviz_common )
list(APPEND _IMPORT_CHECK_FILES_FOR_rviz_common::rviz_common "${_IMPORT_PREFIX}/lib/rviz_common.lib" "${_IMPORT_PREFIX}/bin/rviz_common.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
