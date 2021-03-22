#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rmw::rmw" for configuration "Release"
set_property(TARGET rmw::rmw APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmw::rmw PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/rmw.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/rmw.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmw::rmw )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmw::rmw "${_IMPORT_PREFIX}/lib/rmw.lib" "${_IMPORT_PREFIX}/bin/rmw.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
