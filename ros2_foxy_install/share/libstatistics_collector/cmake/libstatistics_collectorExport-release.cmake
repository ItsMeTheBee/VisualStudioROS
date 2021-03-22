#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "libstatistics_collector::libstatistics_collector" for configuration "Release"
set_property(TARGET libstatistics_collector::libstatistics_collector APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(libstatistics_collector::libstatistics_collector PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/libstatistics_collector.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/libstatistics_collector.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS libstatistics_collector::libstatistics_collector )
list(APPEND _IMPORT_CHECK_FILES_FOR_libstatistics_collector::libstatistics_collector "${_IMPORT_PREFIX}/lib/libstatistics_collector.lib" "${_IMPORT_PREFIX}/bin/libstatistics_collector.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
