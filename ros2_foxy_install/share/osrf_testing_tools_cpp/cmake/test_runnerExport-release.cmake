#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "osrf_testing_tools_cpp::test_runner" for configuration "Release"
set_property(TARGET osrf_testing_tools_cpp::test_runner APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(osrf_testing_tools_cpp::test_runner PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/osrf_testing_tools_cpp/test_runner.exe"
  )

list(APPEND _IMPORT_CHECK_TARGETS osrf_testing_tools_cpp::test_runner )
list(APPEND _IMPORT_CHECK_FILES_FOR_osrf_testing_tools_cpp::test_runner "${_IMPORT_PREFIX}/lib/osrf_testing_tools_cpp/test_runner.exe" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
