#
# Copyright(c) 2006 to 2018 ADLINK Technology Limited and others
#
# This program and the accompanying materials are made available under the
# terms of the Eclipse Public License v. 2.0 which is available at
# http://www.eclipse.org/legal/epl-2.0, or the Eclipse Distribution License
# v. 1.0 which is available at
# http://www.eclipse.org/org/documents/edl-v10.php.
#
# SPDX-License-Identifier: EPL-2.0 OR BSD-3-Clause
#

####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was PackageConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

include("${CMAKE_CURRENT_LIST_DIR}/CycloneDDSTargets.cmake")
option("CycloneDDS_IDLC_ALWAYS" "Should we include idlc even if the user didn't request the idlc component?" ON)

set("CycloneDDS_idlc_FOUND" FALSE)
if ("idlc" IN_LIST "CycloneDDS_FIND_COMPONENTS" OR "CycloneDDS_IDLC_ALWAYS")
  include("${CMAKE_CURRENT_LIST_DIR}/idlc/IdlcGenerate.cmake" OPTIONAL RESULT_VARIABLE _IdlcGenerate)
  if(NOT _IdlcGenerate STREQUAL "NOTFOUND")
    set("CycloneDDS_idlc_FOUND" TRUE)
  endif()
endif()

if ("${CycloneDDS_IDLC_ALWAYS}"
  AND "${CycloneDDS_idlc_FOUND}"
  AND (NOT "idlc" IN_LIST "CycloneDDS_FIND_COMPONENTS")
)
  message(AUTHOR_WARNING "\
The IDL Compiler 'idlc' has not been requested but has been built is automatically included. \
This will change in a future release. \
If you need the idlc compiler, please add idlc to the COMPONENTS or OPTIONAL_COMPONENTS list in \
find_package(CycloneDDS ...). \
If you don't need it, set the CycloneDDS_IDLC_ALWAYS=OFF to suppress this message .\
")
endif()

check_required_components("CycloneDDS")
