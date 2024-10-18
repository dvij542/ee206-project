#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "nanopb::nanopb" for configuration ""
set_property(TARGET nanopb::nanopb APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(nanopb::nanopb PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "C"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libnanopb.a"
  )

list(APPEND _cmake_import_check_targets nanopb::nanopb )
list(APPEND _cmake_import_check_files_for_nanopb::nanopb "${_IMPORT_PREFIX}/lib/libnanopb.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
