# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_logging_demo_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED logging_demo_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(logging_demo_FOUND FALSE)
  elseif(NOT logging_demo_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(logging_demo_FOUND FALSE)
  endif()
  return()
endif()
set(_logging_demo_CONFIG_INCLUDED TRUE)

# output package information
if(NOT logging_demo_FIND_QUIETLY)
  message(STATUS "Found logging_demo: 0.9.3 (${logging_demo_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'logging_demo' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${logging_demo_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(logging_demo_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rosidl_cmake-extras.cmake;ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_libraries-extras.cmake;ament_cmake_export_targets-extras.cmake;ament_cmake_export_include_directories-extras.cmake;rosidl_cmake_export_typesupport_libraries-extras.cmake;rosidl_cmake_export_typesupport_targets-extras.cmake")
foreach(_extra ${_extras})
  include("${logging_demo_DIR}/${_extra}")
endforeach()
