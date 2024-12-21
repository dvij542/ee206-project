// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interface:msg/Scene.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interface/msg/detail/scene__rosidl_typesupport_introspection_c.h"
#include "interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interface/msg/detail/scene__functions.h"
#include "interface/msg/detail/scene__struct.h"


// Include directives for member types
// Member `frames`
#include "sensor_msgs/msg/image.h"
// Member `frames`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"
// Member `ball_spatial_coords`
#include "geometry_msgs/msg/point.h"
// Member `ball_spatial_coords`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Scene__rosidl_typesupport_introspection_c__Scene_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interface__msg__Scene__init(message_memory);
}

void Scene__rosidl_typesupport_introspection_c__Scene_fini_function(void * message_memory)
{
  interface__msg__Scene__fini(message_memory);
}

size_t Scene__rosidl_typesupport_introspection_c__size_function__Image__frames(
  const void * untyped_member)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return member->size;
}

const void * Scene__rosidl_typesupport_introspection_c__get_const_function__Image__frames(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Scene__rosidl_typesupport_introspection_c__get_function__Image__frames(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Scene__rosidl_typesupport_introspection_c__resize_function__Image__frames(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  sensor_msgs__msg__Image__Sequence__fini(member);
  return sensor_msgs__msg__Image__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Scene__rosidl_typesupport_introspection_c__Scene_message_member_array[2] = {
  {
    "frames",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface__msg__Scene, frames),  // bytes offset in struct
    NULL,  // default value
    Scene__rosidl_typesupport_introspection_c__size_function__Image__frames,  // size() function pointer
    Scene__rosidl_typesupport_introspection_c__get_const_function__Image__frames,  // get_const(index) function pointer
    Scene__rosidl_typesupport_introspection_c__get_function__Image__frames,  // get(index) function pointer
    Scene__rosidl_typesupport_introspection_c__resize_function__Image__frames  // resize(index) function pointer
  },
  {
    "ball_spatial_coords",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface__msg__Scene, ball_spatial_coords),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Scene__rosidl_typesupport_introspection_c__Scene_message_members = {
  "interface__msg",  // message namespace
  "Scene",  // message name
  2,  // number of fields
  sizeof(interface__msg__Scene),
  Scene__rosidl_typesupport_introspection_c__Scene_message_member_array,  // message members
  Scene__rosidl_typesupport_introspection_c__Scene_init_function,  // function to initialize message memory (memory has to be allocated)
  Scene__rosidl_typesupport_introspection_c__Scene_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Scene__rosidl_typesupport_introspection_c__Scene_message_type_support_handle = {
  0,
  &Scene__rosidl_typesupport_introspection_c__Scene_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface, msg, Scene)() {
  Scene__rosidl_typesupport_introspection_c__Scene_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  Scene__rosidl_typesupport_introspection_c__Scene_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!Scene__rosidl_typesupport_introspection_c__Scene_message_type_support_handle.typesupport_identifier) {
    Scene__rosidl_typesupport_introspection_c__Scene_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Scene__rosidl_typesupport_introspection_c__Scene_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
