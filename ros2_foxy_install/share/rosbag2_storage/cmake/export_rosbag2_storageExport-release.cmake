#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rosbag2_storage::rosbag2_storage" for configuration "Release"
set_property(TARGET rosbag2_storage::rosbag2_storage APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rosbag2_storage::rosbag2_storage PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/rosbag2_storage.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/rosbag2_storage.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS rosbag2_storage::rosbag2_storage )
list(APPEND _IMPORT_CHECK_FILES_FOR_rosbag2_storage::rosbag2_storage "${_IMPORT_PREFIX}/lib/rosbag2_storage.lib" "${_IMPORT_PREFIX}/bin/rosbag2_storage.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
