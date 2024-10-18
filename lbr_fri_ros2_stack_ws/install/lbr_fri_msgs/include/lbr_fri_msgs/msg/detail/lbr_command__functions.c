// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lbr_fri_msgs:msg/LBRCommand.idl
// generated code does not contain a copyright notice
#include "lbr_fri_msgs/msg/detail/lbr_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
lbr_fri_msgs__msg__LBRCommand__init(lbr_fri_msgs__msg__LBRCommand * msg)
{
  if (!msg) {
    return false;
  }
  // joint_position
  // wrench
  // torque
  return true;
}

void
lbr_fri_msgs__msg__LBRCommand__fini(lbr_fri_msgs__msg__LBRCommand * msg)
{
  if (!msg) {
    return;
  }
  // joint_position
  // wrench
  // torque
}

bool
lbr_fri_msgs__msg__LBRCommand__are_equal(const lbr_fri_msgs__msg__LBRCommand * lhs, const lbr_fri_msgs__msg__LBRCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_position
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->joint_position[i] != rhs->joint_position[i]) {
      return false;
    }
  }
  // wrench
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->wrench[i] != rhs->wrench[i]) {
      return false;
    }
  }
  // torque
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->torque[i] != rhs->torque[i]) {
      return false;
    }
  }
  return true;
}

bool
lbr_fri_msgs__msg__LBRCommand__copy(
  const lbr_fri_msgs__msg__LBRCommand * input,
  lbr_fri_msgs__msg__LBRCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_position
  for (size_t i = 0; i < 7; ++i) {
    output->joint_position[i] = input->joint_position[i];
  }
  // wrench
  for (size_t i = 0; i < 6; ++i) {
    output->wrench[i] = input->wrench[i];
  }
  // torque
  for (size_t i = 0; i < 7; ++i) {
    output->torque[i] = input->torque[i];
  }
  return true;
}

lbr_fri_msgs__msg__LBRCommand *
lbr_fri_msgs__msg__LBRCommand__create()
{
  lbr_fri_msgs__msg__LBRCommand * msg = (lbr_fri_msgs__msg__LBRCommand *)malloc(sizeof(lbr_fri_msgs__msg__LBRCommand));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lbr_fri_msgs__msg__LBRCommand));
  bool success = lbr_fri_msgs__msg__LBRCommand__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
lbr_fri_msgs__msg__LBRCommand__destroy(lbr_fri_msgs__msg__LBRCommand * msg)
{
  if (msg) {
    lbr_fri_msgs__msg__LBRCommand__fini(msg);
  }
  free(msg);
}


bool
lbr_fri_msgs__msg__LBRCommand__Sequence__init(lbr_fri_msgs__msg__LBRCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  lbr_fri_msgs__msg__LBRCommand * data = NULL;
  if (size) {
    data = (lbr_fri_msgs__msg__LBRCommand *)calloc(size, sizeof(lbr_fri_msgs__msg__LBRCommand));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lbr_fri_msgs__msg__LBRCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lbr_fri_msgs__msg__LBRCommand__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lbr_fri_msgs__msg__LBRCommand__Sequence__fini(lbr_fri_msgs__msg__LBRCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lbr_fri_msgs__msg__LBRCommand__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lbr_fri_msgs__msg__LBRCommand__Sequence *
lbr_fri_msgs__msg__LBRCommand__Sequence__create(size_t size)
{
  lbr_fri_msgs__msg__LBRCommand__Sequence * array = (lbr_fri_msgs__msg__LBRCommand__Sequence *)malloc(sizeof(lbr_fri_msgs__msg__LBRCommand__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = lbr_fri_msgs__msg__LBRCommand__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
lbr_fri_msgs__msg__LBRCommand__Sequence__destroy(lbr_fri_msgs__msg__LBRCommand__Sequence * array)
{
  if (array) {
    lbr_fri_msgs__msg__LBRCommand__Sequence__fini(array);
  }
  free(array);
}

bool
lbr_fri_msgs__msg__LBRCommand__Sequence__are_equal(const lbr_fri_msgs__msg__LBRCommand__Sequence * lhs, const lbr_fri_msgs__msg__LBRCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lbr_fri_msgs__msg__LBRCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lbr_fri_msgs__msg__LBRCommand__Sequence__copy(
  const lbr_fri_msgs__msg__LBRCommand__Sequence * input,
  lbr_fri_msgs__msg__LBRCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lbr_fri_msgs__msg__LBRCommand);
    lbr_fri_msgs__msg__LBRCommand * data =
      (lbr_fri_msgs__msg__LBRCommand *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lbr_fri_msgs__msg__LBRCommand__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          lbr_fri_msgs__msg__LBRCommand__fini(&data[i]);
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
    if (!lbr_fri_msgs__msg__LBRCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
