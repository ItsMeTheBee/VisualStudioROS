#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tf2_ros::static_transform_broadcaster_node" for configuration "Release"
set_property(TARGET tf2_ros::static_transform_broadcaster_node APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(tf2_ros::static_transform_broadcaster_node PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/static_transform_broadcaster_node.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/static_transform_broadcaster_node.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS tf2_ros::static_transform_broadcaster_node )
list(APPEND _IMPORT_CHECK_FILES_FOR_tf2_ros::static_transform_broadcaster_node "${_IMPORT_PREFIX}/lib/static_transform_broadcaster_node.lib" "${_IMPORT_PREFIX}/bin/static_transform_broadcaster_node.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
