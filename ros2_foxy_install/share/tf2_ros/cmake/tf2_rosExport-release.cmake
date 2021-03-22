#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tf2_ros::tf2_ros" for configuration "Release"
set_property(TARGET tf2_ros::tf2_ros APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(tf2_ros::tf2_ros PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/tf2_ros.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/tf2_ros.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS tf2_ros::tf2_ros )
list(APPEND _IMPORT_CHECK_FILES_FOR_tf2_ros::tf2_ros "${_IMPORT_PREFIX}/lib/tf2_ros.lib" "${_IMPORT_PREFIX}/bin/tf2_ros.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
