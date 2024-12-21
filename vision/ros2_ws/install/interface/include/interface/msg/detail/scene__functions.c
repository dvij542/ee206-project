// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interface:msg/Scene.idl
// generated code does not contain a copyright notice
#include "interface/msg/detail/scene__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `frames`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `ball_spatial_coords`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
interface__msg__Scene__init(interface__msg__Scene * msg)
{
  if (!msg) {
    return false;
  }
  // frames
  if (!sensor_msgs__msg__Image__Sequence__init(&msg->frames, 0)) {
    interface__msg__Scene__fini(msg);
    return false;
  }
  // ball_spatial_coords
  if (!geometry_msgs__msg__Point__init(&msg->ball_spatial_coords)) {
    interface__msg__Scene__fini(msg);
    return false;
  }
  return true;
}

void
interface__msg__Scene__fini(interface__msg__Scene * msg)
{
  if (!msg) {
    return;
  }
  // frames
  sensor_msgs__msg__Image__Sequence__fini(&msg->frames);
  // ball_spatial_coords
  geometry_msgs__msg__Point__fini(&msg->ball_spatial_coords);
}

bool
interface__msg__Scene__are_equal(const interface__msg__Scene * lhs, const interface__msg__Scene * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frames
  if (!sensor_msgs__msg__Image__Sequence__are_equal(
      &(lhs->frames), &(rhs->frames)))
  {
    return false;
  }
  // ball_spatial_coords
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->ball_spatial_coords), &(rhs->ball_spatial_coords)))
  {
    return false;
  }
  return true;
}

bool
interface__msg__Scene__copy(
  const interface__msg__Scene * input,
  interface__msg__Scene * output)
{
  if (!input || !output) {
    return false;
  }
  // frames
  if (!sensor_msgs__msg__Image__Sequence__copy(
      &(input->frames), &(output->frames)))
  {
    return false;
  }
  // ball_spatial_coords
  if (!geometry_msgs__msg__Point__copy(
      &(input->ball_spatial_coords), &(output->ball_spatial_coords)))
  {
    return false;
  }
  return true;
}

interface__msg__Scene *
interface__msg__Scene__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface__msg__Scene * msg = (interface__msg__Scene *)allocator.allocate(sizeof(interface__msg__Scene), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface__msg__Scene));
  bool success = interface__msg__Scene__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface__msg__Scene__destroy(interface__msg__Scene * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface__msg__Scene__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface__msg__Scene__Sequence__init(interface__msg__Scene__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface__msg__Scene * data = NULL;

  if (size) {
    data = (interface__msg__Scene *)allocator.zero_allocate(size, sizeof(interface__msg__Scene), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface__msg__Scene__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface__msg__Scene__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interface__msg__Scene__Sequence__fini(interface__msg__Scene__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interface__msg__Scene__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interface__msg__Scene__Sequence *
interface__msg__Scene__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface__msg__Scene__Sequence * array = (interface__msg__Scene__Sequence *)allocator.allocate(sizeof(interface__msg__Scene__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface__msg__Scene__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface__msg__Scene__Sequence__destroy(interface__msg__Scene__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface__msg__Scene__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface__msg__Scene__Sequence__are_equal(const interface__msg__Scene__Sequence * lhs, const interface__msg__Scene__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface__msg__Scene__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface__msg__Scene__Sequence__copy(
  const interface__msg__Scene__Sequence * input,
  interface__msg__Scene__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface__msg__Scene);
    interface__msg__Scene * data =
      (interface__msg__Scene *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface__msg__Scene__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interface__msg__Scene__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface__msg__Scene__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
