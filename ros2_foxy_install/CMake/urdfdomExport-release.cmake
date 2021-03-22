#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "urdfdom::urdfdom_model" for configuration "Release"
set_property(TARGET urdfdom::urdfdom_model APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(urdfdom::urdfdom_model PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/urdfdom_model.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/urdfdom_model.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS urdfdom::urdfdom_model )
list(APPEND _IMPORT_CHECK_FILES_FOR_urdfdom::urdfdom_model "${_IMPORT_PREFIX}/lib/urdfdom_model.lib" "${_IMPORT_PREFIX}/bin/urdfdom_model.dll" )

# Import target "urdfdom::urdfdom_world" for configuration "Release"
set_property(TARGET urdfdom::urdfdom_world APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(urdfdom::urdfdom_world PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/urdfdom_world.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/urdfdom_world.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS urdfdom::urdfdom_world )
list(APPEND _IMPORT_CHECK_FILES_FOR_urdfdom::urdfdom_world "${_IMPORT_PREFIX}/lib/urdfdom_world.lib" "${_IMPORT_PREFIX}/bin/urdfdom_world.dll" )

# Import target "urdfdom::urdfdom_sensor" for configuration "Release"
set_property(TARGET urdfdom::urdfdom_sensor APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(urdfdom::urdfdom_sensor PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/urdfdom_sensor.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/urdfdom_sensor.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS urdfdom::urdfdom_sensor )
list(APPEND _IMPORT_CHECK_FILES_FOR_urdfdom::urdfdom_sensor "${_IMPORT_PREFIX}/lib/urdfdom_sensor.lib" "${_IMPORT_PREFIX}/bin/urdfdom_sensor.dll" )

# Import target "urdfdom::urdfdom_model_state" for configuration "Release"
set_property(TARGET urdfdom::urdfdom_model_state APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(urdfdom::urdfdom_model_state PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/urdfdom_model_state.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/urdfdom_model_state.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS urdfdom::urdfdom_model_state )
list(APPEND _IMPORT_CHECK_FILES_FOR_urdfdom::urdfdom_model_state "${_IMPORT_PREFIX}/lib/urdfdom_model_state.lib" "${_IMPORT_PREFIX}/bin/urdfdom_model_state.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
