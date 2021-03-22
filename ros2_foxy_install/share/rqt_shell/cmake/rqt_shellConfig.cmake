# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_rqt_shell_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED rqt_shell_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(rqt_shell_FOUND FALSE)
  elseif(NOT rqt_shell_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(rqt_shell_FOUND FALSE)
  endif()
  return()
endif()
set(_rqt_shell_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rqt_shell_FIND_QUIETLY)
  message(STATUS "Found rqt_shell: 1.0.0 (${rqt_shell_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rqt_shell' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${rqt_shell_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rqt_shell_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${rqt_shell_DIR}/${_extra}")
endforeach()
