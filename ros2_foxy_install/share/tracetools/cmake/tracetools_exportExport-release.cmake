#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tracetools::tracetools" for configuration "Release"
set_property(TARGET tracetools::tracetools APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(tracetools::tracetools PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/tracetools.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/tracetools.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS tracetools::tracetools )
list(APPEND _IMPORT_CHECK_FILES_FOR_tracetools::tracetools "${_IMPORT_PREFIX}/lib/tracetools.lib" "${_IMPORT_PREFIX}/bin/tracetools.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
