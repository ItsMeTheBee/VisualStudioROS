#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "turtlesim::turtlesim__rosidl_typesupport_cpp" for configuration "Release"
set_property(TARGET turtlesim::turtlesim__rosidl_typesupport_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(turtlesim::turtlesim__rosidl_typesupport_cpp PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/turtlesim__rosidl_typesupport_cpp.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/turtlesim__rosidl_typesupport_cpp.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS turtlesim::turtlesim__rosidl_typesupport_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_turtlesim::turtlesim__rosidl_typesupport_cpp "${_IMPORT_PREFIX}/lib/turtlesim__rosidl_typesupport_cpp.lib" "${_IMPORT_PREFIX}/bin/turtlesim__rosidl_typesupport_cpp.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
