#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "urdf::urdf" for configuration "Release"
set_property(TARGET urdf::urdf APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(urdf::urdf PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/urdf.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/urdf.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS urdf::urdf )
list(APPEND _IMPORT_CHECK_FILES_FOR_urdf::urdf "${_IMPORT_PREFIX}/lib/urdf.lib" "${_IMPORT_PREFIX}/bin/urdf.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
