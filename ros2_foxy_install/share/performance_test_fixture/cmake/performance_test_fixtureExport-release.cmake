#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "performance_test_fixture::performance_test_fixture" for configuration "Release"
set_property(TARGET performance_test_fixture::performance_test_fixture APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(performance_test_fixture::performance_test_fixture PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/performance_test_fixture.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/performance_test_fixture.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS performance_test_fixture::performance_test_fixture )
list(APPEND _IMPORT_CHECK_FILES_FOR_performance_test_fixture::performance_test_fixture "${_IMPORT_PREFIX}/lib/performance_test_fixture.lib" "${_IMPORT_PREFIX}/bin/performance_test_fixture.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
