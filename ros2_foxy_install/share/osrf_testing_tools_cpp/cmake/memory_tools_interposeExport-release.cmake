#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "osrf_testing_tools_cpp::memory_tools_interpose" for configuration "Release"
set_property(TARGET osrf_testing_tools_cpp::memory_tools_interpose APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(osrf_testing_tools_cpp::memory_tools_interpose PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/memory_tools_interpose.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/memory_tools_interpose.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS osrf_testing_tools_cpp::memory_tools_interpose )
list(APPEND _IMPORT_CHECK_FILES_FOR_osrf_testing_tools_cpp::memory_tools_interpose "${_IMPORT_PREFIX}/lib/memory_tools_interpose.lib" "${_IMPORT_PREFIX}/bin/memory_tools_interpose.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
