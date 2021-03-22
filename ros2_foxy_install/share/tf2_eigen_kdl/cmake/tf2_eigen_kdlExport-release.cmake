#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tf2_eigen_kdl::tf2_eigen_kdl" for configuration "Release"
set_property(TARGET tf2_eigen_kdl::tf2_eigen_kdl APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(tf2_eigen_kdl::tf2_eigen_kdl PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/tf2_eigen_kdl.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/tf2_eigen_kdl.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS tf2_eigen_kdl::tf2_eigen_kdl )
list(APPEND _IMPORT_CHECK_FILES_FOR_tf2_eigen_kdl::tf2_eigen_kdl "${_IMPORT_PREFIX}/lib/tf2_eigen_kdl.lib" "${_IMPORT_PREFIX}/lib/tf2_eigen_kdl.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
