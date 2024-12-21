// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface:msg/Scene.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__SCENE__STRUCT_H_
#define INTERFACE__MSG__DETAIL__SCENE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'frames'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'ball_spatial_coords'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in msg/Scene in the package interface.
typedef struct interface__msg__Scene
{
  sensor_msgs__msg__Image__Sequence frames;
  geometry_msgs__msg__Point ball_spatial_coords;
} interface__msg__Scene;

// Struct for a sequence of interface__msg__Scene.
typedef struct interface__msg__Scene__Sequence
{
  interface__msg__Scene * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface__msg__Scene__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE__MSG__DETAIL__SCENE__STRUCT_H_
