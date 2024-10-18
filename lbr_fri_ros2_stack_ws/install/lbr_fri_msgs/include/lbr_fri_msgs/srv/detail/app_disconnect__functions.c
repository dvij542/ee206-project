// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lbr_fri_msgs:srv/AppDisconnect.idl
// generated code does not contain a copyright notice
#include "lbr_fri_msgs/srv/detail/app_disconnect__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
lbr_fri_msgs__srv__AppDisconnect_Request__init(lbr_fri_msgs__srv__AppDisconnect_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
lbr_fri_msgs__srv__AppDisconnect_Request__fini(lbr_fri_msgs__srv__AppDisconnect_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
lbr_fri_msgs__srv__AppDisconnect_Request__are_equal(const lbr_fri_msgs__srv__AppDisconnect_Request * lhs, const lbr_fri_msgs__srv__AppDisconnect_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
lbr_fri_msgs__srv__AppDisconnect_Request__copy(
  const lbr_fri_msgs__srv__AppDisconnect_Request * input,
  lbr_fri_msgs__srv__AppDisconnect_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

lbr_fri_msgs__srv__AppDisconnect_Request *
lbr_fri_msgs__srv__AppDisconnect_Request__create()
{
  lbr_fri_msgs__srv__AppDisconnect_Request * msg = (lbr_fri_msgs__srv__AppDisconnect_Request *)malloc(sizeof(lbr_fri_msgs__srv__AppDisconnect_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lbr_fri_msgs__srv__AppDisconnect_Request));
  bool success = lbr_fri_msgs__srv__AppDisconnect_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
lbr_fri_msgs__srv__AppDisconnect_Request__destroy(lbr_fri_msgs__srv__AppDisconnect_Request * msg)
{
  if (msg) {
    lbr_fri_msgs__srv__AppDisconnect_Request__fini(msg);
  }
  free(msg);
}


bool
lbr_fri_msgs__srv__AppDisconnect_Request__Sequence__init(lbr_fri_msgs__srv__AppDisconnect_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  lbr_fri_msgs__srv__AppDisconnect_Request * data = NULL;
  if (size) {
    data = (lbr_fri_msgs__srv__AppDisconnect_Request *)calloc(size, sizeof(lbr_fri_msgs__srv__AppDisconnect_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lbr_fri_msgs__srv__AppDisconnect_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lbr_fri_msgs__srv__AppDisconnect_Request__fini(&data[i - 1]);
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
lbr_fri_msgs__srv__AppDisconnect_Request__Sequence__fini(lbr_fri_msgs__srv__AppDisconnect_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lbr_fri_msgs__srv__AppDisconnect_Request__fini(&array->data[i]);
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

lbr_fri_msgs__srv__AppDisconnect_Request__Sequence *
lbr_fri_msgs__srv__AppDisconnect_Request__Sequence__create(size_t size)
{
  lbr_fri_msgs__srv__AppDisconnect_Request__Sequence * array = (lbr_fri_msgs__srv__AppDisconnect_Request__Sequence *)malloc(sizeof(lbr_fri_msgs__srv__AppDisconnect_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = lbr_fri_msgs__srv__AppDisconnect_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
lbr_fri_msgs__srv__AppDisconnect_Request__Sequence__destroy(lbr_fri_msgs__srv__AppDisconnect_Request__Sequence * array)
{
  if (array) {
    lbr_fri_msgs__srv__AppDisconnect_Request__Sequence__fini(array);
  }
  free(array);
}

bool
lbr_fri_msgs__srv__AppDisconnect_Request__Sequence__are_equal(const lbr_fri_msgs__srv__AppDisconnect_Request__Sequence * lhs, const lbr_fri_msgs__srv__AppDisconnect_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lbr_fri_msgs__srv__AppDisconnect_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lbr_fri_msgs__srv__AppDisconnect_Request__Sequence__copy(
  const lbr_fri_msgs__srv__AppDisconnect_Request__Sequence * input,
  lbr_fri_msgs__srv__AppDisconnect_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lbr_fri_msgs__srv__AppDisconnect_Request);
    lbr_fri_msgs__srv__AppDisconnect_Request * data =
      (lbr_fri_msgs__srv__AppDisconnect_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lbr_fri_msgs__srv__AppDisconnect_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          lbr_fri_msgs__srv__AppDisconnect_Request__fini(&data[i]);
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
    if (!lbr_fri_msgs__srv__AppDisconnect_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
lbr_fri_msgs__srv__AppDisconnect_Response__init(lbr_fri_msgs__srv__AppDisconnect_Response * msg)
{
  if (!msg) {
    return false;
  }
  // disconnected
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    lbr_fri_msgs__srv__AppDisconnect_Response__fini(msg);
    return false;
  }
  return true;
}

void
lbr_fri_msgs__srv__AppDisconnect_Response__fini(lbr_fri_msgs__srv__AppDisconnect_Response * msg)
{
  if (!msg) {
    return;
  }
  // disconnected
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
lbr_fri_msgs__srv__AppDisconnect_Response__are_equal(const lbr_fri_msgs__srv__AppDisconnect_Response * lhs, const lbr_fri_msgs__srv__AppDisconnect_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // disconnected
  if (lhs->disconnected != rhs->disconnected) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
lbr_fri_msgs__srv__AppDisconnect_Response__copy(
  const lbr_fri_msgs__srv__AppDisconnect_Response * input,
  lbr_fri_msgs__srv__AppDisconnect_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // disconnected
  output->disconnected = input->disconnected;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

lbr_fri_msgs__srv__AppDisconnect_Response *
lbr_fri_msgs__srv__AppDisconnect_Response__create()
{
  lbr_fri_msgs__srv__AppDisconnect_Response * msg = (lbr_fri_msgs__srv__AppDisconnect_Response *)malloc(sizeof(lbr_fri_msgs__srv__AppDisconnect_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lbr_fri_msgs__srv__AppDisconnect_Response));
  bool success = lbr_fri_msgs__srv__AppDisconnect_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
lbr_fri_msgs__srv__AppDisconnect_Response__destroy(lbr_fri_msgs__srv__AppDisconnect_Response * msg)
{
  if (msg) {
    lbr_fri_msgs__srv__AppDisconnect_Response__fini(msg);
  }
  free(msg);
}


bool
lbr_fri_msgs__srv__AppDisconnect_Response__Sequence__init(lbr_fri_msgs__srv__AppDisconnect_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  lbr_fri_msgs__srv__AppDisconnect_Response * data = NULL;
  if (size) {
    data = (lbr_fri_msgs__srv__AppDisconnect_Response *)calloc(size, sizeof(lbr_fri_msgs__srv__AppDisconnect_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lbr_fri_msgs__srv__AppDisconnect_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lbr_fri_msgs__srv__AppDisconnect_Response__fini(&data[i - 1]);
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
lbr_fri_msgs__srv__AppDisconnect_Response__Sequence__fini(lbr_fri_msgs__srv__AppDisconnect_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lbr_fri_msgs__srv__AppDisconnect_Response__fini(&array->data[i]);
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

lbr_fri_msgs__srv__AppDisconnect_Response__Sequence *
lbr_fri_msgs__srv__AppDisconnect_Response__Sequence__create(size_t size)
{
  lbr_fri_msgs__srv__AppDisconnect_Response__Sequence * array = (lbr_fri_msgs__srv__AppDisconnect_Response__Sequence *)malloc(sizeof(lbr_fri_msgs__srv__AppDisconnect_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = lbr_fri_msgs__srv__AppDisconnect_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
lbr_fri_msgs__srv__AppDisconnect_Response__Sequence__destroy(lbr_fri_msgs__srv__AppDisconnect_Response__Sequence * array)
{
  if (array) {
    lbr_fri_msgs__srv__AppDisconnect_Response__Sequence__fini(array);
  }
  free(array);
}

bool
lbr_fri_msgs__srv__AppDisconnect_Response__Sequence__are_equal(const lbr_fri_msgs__srv__AppDisconnect_Response__Sequence * lhs, const lbr_fri_msgs__srv__AppDisconnect_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lbr_fri_msgs__srv__AppDisconnect_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lbr_fri_msgs__srv__AppDisconnect_Response__Sequence__copy(
  const lbr_fri_msgs__srv__AppDisconnect_Response__Sequence * input,
  lbr_fri_msgs__srv__AppDisconnect_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lbr_fri_msgs__srv__AppDisconnect_Response);
    lbr_fri_msgs__srv__AppDisconnect_Response * data =
      (lbr_fri_msgs__srv__AppDisconnect_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lbr_fri_msgs__srv__AppDisconnect_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          lbr_fri_msgs__srv__AppDisconnect_Response__fini(&data[i]);
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
    if (!lbr_fri_msgs__srv__AppDisconnect_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
