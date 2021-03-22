#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "interactive_markers::interactive_markers" for configuration "Release"
set_property(TARGET interactive_markers::interactive_markers APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(interactive_markers::interactive_markers PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/interactive_markers.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/interactive_markers.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS interactive_markers::interactive_markers )
list(APPEND _IMPORT_CHECK_FILES_FOR_interactive_markers::interactive_markers "${_IMPORT_PREFIX}/lib/interactive_markers.lib" "${_IMPORT_PREFIX}/bin/interactive_markers.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
