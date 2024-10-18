// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lbr_fri_msgs:msg/LBRCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lbr_fri_msgs/msg/detail/lbr_command__rosidl_typesupport_introspection_c.h"
#include "lbr_fri_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lbr_fri_msgs/msg/detail/lbr_command__functions.h"
#include "lbr_fri_msgs/msg/detail/lbr_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void LBRCommand__rosidl_typesupport_introspection_c__LBRCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lbr_fri_msgs__msg__LBRCommand__init(message_memory);
}

void LBRCommand__rosidl_typesupport_introspection_c__LBRCommand_fini_function(void * message_memory)
{
  lbr_fri_msgs__msg__LBRCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LBRCommand__rosidl_typesupport_introspection_c__LBRCommand_message_member_array[3] = {
  {
    "joint_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(lbr_fri_msgs__msg__LBRCommand, joint_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wrench",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(lbr_fri_msgs__msg__LBRCommand, wrench),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "torque",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(lbr_fri_msgs__msg__LBRCommand, torque),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LBRCommand__rosidl_typesupport_introspection_c__LBRCommand_message_members = {
  "lbr_fri_msgs__msg",  // message namespace
  "LBRCommand",  // message name
  3,  // number of fields
  sizeof(lbr_fri_msgs__msg__LBRCommand),
  LBRCommand__rosidl_typesupport_introspection_c__LBRCommand_message_member_array,  // message members
  LBRCommand__rosidl_typesupport_introspection_c__LBRCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  LBRCommand__rosidl_typesupport_introspection_c__LBRCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LBRCommand__rosidl_typesupport_introspection_c__LBRCommand_message_type_support_handle = {
  0,
  &LBRCommand__rosidl_typesupport_introspection_c__LBRCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lbr_fri_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lbr_fri_msgs, msg, LBRCommand)() {
  if (!LBRCommand__rosidl_typesupport_introspection_c__LBRCommand_message_type_support_handle.typesupport_identifier) {
    LBRCommand__rosidl_typesupport_introspection_c__LBRCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LBRCommand__rosidl_typesupport_introspection_c__LBRCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
