#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "lbr_fri_ros2::lbr_fri_ros2" for configuration ""
set_property(TARGET lbr_fri_ros2::lbr_fri_ros2 APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(lbr_fri_ros2::lbr_fri_ros2 PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/liblbr_fri_ros2.so"
  IMPORTED_SONAME_NOCONFIG "liblbr_fri_ros2.so"
  )

list(APPEND _cmake_import_check_targets lbr_fri_ros2::lbr_fri_ros2 )
list(APPEND _cmake_import_check_files_for_lbr_fri_ros2::lbr_fri_ros2 "${_IMPORT_PREFIX}/lib/liblbr_fri_ros2.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
