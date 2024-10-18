// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lbr_fri_msgs:msg/LBRState.idl
// generated code does not contain a copyright notice
#include "lbr_fri_msgs/msg/detail/lbr_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
lbr_fri_msgs__msg__LBRState__init(lbr_fri_msgs__msg__LBRState * msg)
{
  if (!msg) {
    return false;
  }
  // sample_time
  // session_state
  // connection_quality
  // safety_state
  // operation_mode
  // drive_state
  // client_command_mode
  // overlay_type
  // control_mode
  // time_stamp_sec
  // time_stamp_nano_sec
  // measured_joint_position
  // commanded_joint_position
  // measured_torque
  // commanded_torque
  // external_torque
  // ipo_joint_position
  // tracking_performance
  return true;
}

void
lbr_fri_msgs__msg__LBRState__fini(lbr_fri_msgs__msg__LBRState * msg)
{
  if (!msg) {
    return;
  }
  // sample_time
  // session_state
  // connection_quality
  // safety_state
  // operation_mode
  // drive_state
  // client_command_mode
  // overlay_type
  // control_mode
  // time_stamp_sec
  // time_stamp_nano_sec
  // measured_joint_position
  // commanded_joint_position
  // measured_torque
  // commanded_torque
  // external_torque
  // ipo_joint_position
  // tracking_performance
}

bool
lbr_fri_msgs__msg__LBRState__are_equal(const lbr_fri_msgs__msg__LBRState * lhs, const lbr_fri_msgs__msg__LBRState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sample_time
  if (lhs->sample_time != rhs->sample_time) {
    return false;
  }
  // session_state
  if (lhs->session_state != rhs->session_state) {
    return false;
  }
  // connection_quality
  if (lhs->connection_quality != rhs->connection_quality) {
    return false;
  }
  // safety_state
  if (lhs->safety_state != rhs->safety_state) {
    return false;
  }
  // operation_mode
  if (lhs->operation_mode != rhs->operation_mode) {
    return false;
  }
  // drive_state
  if (lhs->drive_state != rhs->drive_state) {
    return false;
  }
  // client_command_mode
  if (lhs->client_command_mode != rhs->client_command_mode) {
    return false;
  }
  // overlay_type
  if (lhs->overlay_type != rhs->overlay_type) {
    return false;
  }
  // control_mode
  if (lhs->control_mode != rhs->control_mode) {
    return false;
  }
  // time_stamp_sec
  if (lhs->time_stamp_sec != rhs->time_stamp_sec) {
    return false;
  }
  // time_stamp_nano_sec
  if (lhs->time_stamp_nano_sec != rhs->time_stamp_nano_sec) {
    return false;
  }
  // measured_joint_position
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->measured_joint_position[i] != rhs->measured_joint_position[i]) {
      return false;
    }
  }
  // commanded_joint_position
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->commanded_joint_position[i] != rhs->commanded_joint_position[i]) {
      return false;
    }
  }
  // measured_torque
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->measured_torque[i] != rhs->measured_torque[i]) {
      return false;
    }
  }
  // commanded_torque
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->commanded_torque[i] != rhs->commanded_torque[i]) {
      return false;
    }
  }
  // external_torque
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->external_torque[i] != rhs->external_torque[i]) {
      return false;
    }
  }
  // ipo_joint_position
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->ipo_joint_position[i] != rhs->ipo_joint_position[i]) {
      return false;
    }
  }
  // tracking_performance
  if (lhs->tracking_performance != rhs->tracking_performance) {
    return false;
  }
  return true;
}

bool
lbr_fri_msgs__msg__LBRState__copy(
  const lbr_fri_msgs__msg__LBRState * input,
  lbr_fri_msgs__msg__LBRState * output)
{
  if (!input || !output) {
    return false;
  }
  // sample_time
  output->sample_time = input->sample_time;
  // session_state
  output->session_state = input->session_state;
  // connection_quality
  output->connection_quality = input->connection_quality;
  // safety_state
  output->safety_state = input->safety_state;
  // operation_mode
  output->operation_mode = input->operation_mode;
  // drive_state
  output->drive_state = input->drive_state;
  // client_command_mode
  output->client_command_mode = input->client_command_mode;
  // overlay_type
  output->overlay_type = input->overlay_type;
  // control_mode
  output->control_mode = input->control_mode;
  // time_stamp_sec
  output->time_stamp_sec = input->time_stamp_sec;
  // time_stamp_nano_sec
  output->time_stamp_nano_sec = input->time_stamp_nano_sec;
  // measured_joint_position
  for (size_t i = 0; i < 7; ++i) {
    output->measured_joint_position[i] = input->measured_joint_position[i];
  }
  // commanded_joint_position
  for (size_t i = 0; i < 7; ++i) {
    output->commanded_joint_position[i] = input->commanded_joint_position[i];
  }
  // measured_torque
  for (size_t i = 0; i < 7; ++i) {
    output->measured_torque[i] = input->measured_torque[i];
  }
  // commanded_torque
  for (size_t i = 0; i < 7; ++i) {
    output->commanded_torque[i] = input->commanded_torque[i];
  }
  // external_torque
  for (size_t i = 0; i < 7; ++i) {
    output->external_torque[i] = input->external_torque[i];
  }
  // ipo_joint_position
  for (size_t i = 0; i < 7; ++i) {
    output->ipo_joint_position[i] = input->ipo_joint_position[i];
  }
  // tracking_performance
  output->tracking_performance = input->tracking_performance;
  return true;
}

lbr_fri_msgs__msg__LBRState *
lbr_fri_msgs__msg__LBRState__create()
{
  lbr_fri_msgs__msg__LBRState * msg = (lbr_fri_msgs__msg__LBRState *)malloc(sizeof(lbr_fri_msgs__msg__LBRState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lbr_fri_msgs__msg__LBRState));
  bool success = lbr_fri_msgs__msg__LBRState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
lbr_fri_msgs__msg__LBRState__destroy(lbr_fri_msgs__msg__LBRState * msg)
{
  if (msg) {
    lbr_fri_msgs__msg__LBRState__fini(msg);
  }
  free(msg);
}


bool
lbr_fri_msgs__msg__LBRState__Sequence__init(lbr_fri_msgs__msg__LBRState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  lbr_fri_msgs__msg__LBRState * data = NULL;
  if (size) {
    data = (lbr_fri_msgs__msg__LBRState *)calloc(size, sizeof(lbr_fri_msgs__msg__LBRState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lbr_fri_msgs__msg__LBRState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lbr_fri_msgs__msg__LBRState__fini(&data[i - 1]);
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
lbr_fri_msgs__msg__LBRState__Sequence__fini(lbr_fri_msgs__msg__LBRState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lbr_fri_msgs__msg__LBRState__fini(&array->data[i]);
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

lbr_fri_msgs__msg__LBRState__Sequence *
lbr_fri_msgs__msg__LBRState__Sequence__create(size_t size)
{
  lbr_fri_msgs__msg__LBRState__Sequence * array = (lbr_fri_msgs__msg__LBRState__Sequence *)malloc(sizeof(lbr_fri_msgs__msg__LBRState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = lbr_fri_msgs__msg__LBRState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
lbr_fri_msgs__msg__LBRState__Sequence__destroy(lbr_fri_msgs__msg__LBRState__Sequence * array)
{
  if (array) {
    lbr_fri_msgs__msg__LBRState__Sequence__fini(array);
  }
  free(array);
}

bool
lbr_fri_msgs__msg__LBRState__Sequence__are_equal(const lbr_fri_msgs__msg__LBRState__Sequence * lhs, const lbr_fri_msgs__msg__LBRState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lbr_fri_msgs__msg__LBRState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lbr_fri_msgs__msg__LBRState__Sequence__copy(
  const lbr_fri_msgs__msg__LBRState__Sequence * input,
  lbr_fri_msgs__msg__LBRState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lbr_fri_msgs__msg__LBRState);
    lbr_fri_msgs__msg__LBRState * data =
      (lbr_fri_msgs__msg__LBRState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lbr_fri_msgs__msg__LBRState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          lbr_fri_msgs__msg__LBRState__fini(&data[i]);
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
    if (!lbr_fri_msgs__msg__LBRState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
