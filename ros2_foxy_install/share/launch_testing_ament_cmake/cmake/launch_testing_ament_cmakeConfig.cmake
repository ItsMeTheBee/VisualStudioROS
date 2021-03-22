# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_launch_testing_ament_cmake_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED launch_testing_ament_cmake_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(launch_testing_ament_cmake_FOUND FALSE)
  elseif(NOT launch_testing_ament_cmake_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(launch_testing_ament_cmake_FOUND FALSE)
  endif()
  return()
endif()
set(_launch_testing_ament_cmake_CONFIG_INCLUDED TRUE)

# output package information
if(NOT launch_testing_ament_cmake_FIND_QUIETLY)
  message(STATUS "Found launch_testing_ament_cmake: 0.10.4 (${launch_testing_ament_cmake_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'launch_testing_ament_cmake' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${launch_testing_ament_cmake_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(launch_testing_ament_cmake_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "launch_testing_ament_cmake-extras.cmake")
foreach(_extra ${_extras})
  include("${launch_testing_ament_cmake_DIR}/${_extra}")
endforeach()
