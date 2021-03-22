#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ament_index_cpp::ament_index_cpp" for configuration "Release"
set_property(TARGET ament_index_cpp::ament_index_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(ament_index_cpp::ament_index_cpp PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/ament_index_cpp.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/ament_index_cpp.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS ament_index_cpp::ament_index_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_ament_index_cpp::ament_index_cpp "${_IMPORT_PREFIX}/lib/ament_index_cpp.lib" "${_IMPORT_PREFIX}/bin/ament_index_cpp.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
