// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lbr_fri_msgs:msg/LBRCommand.idl
// generated code does not contain a copyright notice

#ifndef LBR_FRI_MSGS__MSG__DETAIL__LBR_COMMAND__STRUCT_H_
#define LBR_FRI_MSGS__MSG__DETAIL__LBR_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/LBRCommand in the package lbr_fri_msgs.
typedef struct lbr_fri_msgs__msg__LBRCommand
{
  double joint_position[7];
  double wrench[6];
  double torque[7];
} lbr_fri_msgs__msg__LBRCommand;

// Struct for a sequence of lbr_fri_msgs__msg__LBRCommand.
typedef struct lbr_fri_msgs__msg__LBRCommand__Sequence
{
  lbr_fri_msgs__msg__LBRCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lbr_fri_msgs__msg__LBRCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LBR_FRI_MSGS__MSG__DETAIL__LBR_COMMAND__STRUCT_H_
