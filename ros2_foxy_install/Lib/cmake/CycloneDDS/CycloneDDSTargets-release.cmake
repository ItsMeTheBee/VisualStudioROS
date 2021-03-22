#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "CycloneDDS::dds_security_ac" for configuration "Release"
set_property(TARGET CycloneDDS::dds_security_ac APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(CycloneDDS::dds_security_ac PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/dds_security_ac.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/dds_security_ac.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS CycloneDDS::dds_security_ac )
list(APPEND _IMPORT_CHECK_FILES_FOR_CycloneDDS::dds_security_ac "${_IMPORT_PREFIX}/lib/dds_security_ac.lib" "${_IMPORT_PREFIX}/bin/dds_security_ac.dll" )

# Import target "CycloneDDS::dds_security_auth" for configuration "Release"
set_property(TARGET CycloneDDS::dds_security_auth APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(CycloneDDS::dds_security_auth PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/dds_security_auth.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/dds_security_auth.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS CycloneDDS::dds_security_auth )
list(APPEND _IMPORT_CHECK_FILES_FOR_CycloneDDS::dds_security_auth "${_IMPORT_PREFIX}/lib/dds_security_auth.lib" "${_IMPORT_PREFIX}/bin/dds_security_auth.dll" )

# Import target "CycloneDDS::dds_security_crypto" for configuration "Release"
set_property(TARGET CycloneDDS::dds_security_crypto APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(CycloneDDS::dds_security_crypto PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/dds_security_crypto.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/dds_security_crypto.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS CycloneDDS::dds_security_crypto )
list(APPEND _IMPORT_CHECK_FILES_FOR_CycloneDDS::dds_security_crypto "${_IMPORT_PREFIX}/lib/dds_security_crypto.lib" "${_IMPORT_PREFIX}/bin/dds_security_crypto.dll" )

# Import target "CycloneDDS::ddsc" for configuration "Release"
set_property(TARGET CycloneDDS::ddsc APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(CycloneDDS::ddsc PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/ddsc.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/ddsc.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS CycloneDDS::ddsc )
list(APPEND _IMPORT_CHECK_FILES_FOR_CycloneDDS::ddsc "${_IMPORT_PREFIX}/lib/ddsc.lib" "${_IMPORT_PREFIX}/bin/ddsc.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
