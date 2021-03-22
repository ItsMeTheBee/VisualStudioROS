# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_rqt_plot_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED rqt_plot_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(rqt_plot_FOUND FALSE)
  elseif(NOT rqt_plot_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(rqt_plot_FOUND FALSE)
  endif()
  return()
endif()
set(_rqt_plot_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rqt_plot_FIND_QUIETLY)
  message(STATUS "Found rqt_plot: 1.0.9 (${rqt_plot_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rqt_plot' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${rqt_plot_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rqt_plot_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${rqt_plot_DIR}/${_extra}")
endforeach()
