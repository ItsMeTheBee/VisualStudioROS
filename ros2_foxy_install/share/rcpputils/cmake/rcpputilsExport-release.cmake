#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rcpputils::rcpputils" for configuration "Release"
set_property(TARGET rcpputils::rcpputils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rcpputils::rcpputils PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/rcpputils.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/rcpputils.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS rcpputils::rcpputils )
list(APPEND _IMPORT_CHECK_FILES_FOR_rcpputils::rcpputils "${_IMPORT_PREFIX}/lib/rcpputils.lib" "${_IMPORT_PREFIX}/bin/rcpputils.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
