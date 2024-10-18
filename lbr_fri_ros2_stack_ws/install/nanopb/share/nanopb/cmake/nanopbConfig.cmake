# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_nanopb_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED nanopb_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(nanopb_FOUND FALSE)
  elseif(NOT nanopb_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(nanopb_FOUND FALSE)
  endif()
  return()
endif()
set(_nanopb_CONFIG_INCLUDED TRUE)

# output package information
if(NOT nanopb_FIND_QUIETLY)
  message(STATUS "Found nanopb: 1.0.0 (${nanopb_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'nanopb' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${nanopb_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(nanopb_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_targets-extras.cmake")
foreach(_extra ${_extras})
  include("${nanopb_DIR}/${_extra}")
endforeach()
