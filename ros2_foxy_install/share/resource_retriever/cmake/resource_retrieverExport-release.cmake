#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "resource_retriever::resource_retriever" for configuration "Release"
set_property(TARGET resource_retriever::resource_retriever APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(resource_retriever::resource_retriever PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/resource_retriever.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/resource_retriever.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS resource_retriever::resource_retriever )
list(APPEND _IMPORT_CHECK_FILES_FOR_resource_retriever::resource_retriever "${_IMPORT_PREFIX}/lib/resource_retriever.lib" "${_IMPORT_PREFIX}/bin/resource_retriever.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
