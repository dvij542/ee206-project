#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "fri::fri" for configuration ""
set_property(TARGET fri::fri APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(fri::fri PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libfri.so"
  IMPORTED_SONAME_NOCONFIG "libfri.so"
  )

list(APPEND _cmake_import_check_targets fri::fri )
list(APPEND _cmake_import_check_files_for_fri::fri "${_IMPORT_PREFIX}/lib/libfri.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
