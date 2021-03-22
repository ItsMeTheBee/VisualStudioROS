#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "message_filters::message_filters" for configuration "Release"
set_property(TARGET message_filters::message_filters APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(message_filters::message_filters PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/message_filters.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/message_filters.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS message_filters::message_filters )
list(APPEND _IMPORT_CHECK_FILES_FOR_message_filters::message_filters "${_IMPORT_PREFIX}/lib/message_filters.lib" "${_IMPORT_PREFIX}/bin/message_filters.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
