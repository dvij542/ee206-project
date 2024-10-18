#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "lbr_hardware_interface::lbr_hardware_interface" for configuration ""
set_property(TARGET lbr_hardware_interface::lbr_hardware_interface APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(lbr_hardware_interface::lbr_hardware_interface PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/lbr_hardware_interface/liblbr_hardware_interface.so"
  IMPORTED_SONAME_NOCONFIG "liblbr_hardware_interface.so"
  )

list(APPEND _cmake_import_check_targets lbr_hardware_interface::lbr_hardware_interface )
list(APPEND _cmake_import_check_files_for_lbr_hardware_interface::lbr_hardware_interface "${_IMPORT_PREFIX}/lib/lbr_hardware_interface/liblbr_hardware_interface.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
