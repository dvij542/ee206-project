// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interface:msg/Scene.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interface/msg/detail/scene__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Scene_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interface::msg::Scene(_init);
}

void Scene_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interface::msg::Scene *>(message_memory);
  typed_message->~Scene();
}

size_t size_function__Scene__frames(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Scene__frames(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return &member[index];
}

void * get_function__Scene__frames(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  return &member[index];
}

void resize_function__Scene__frames(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<sensor_msgs::msg::Image> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Scene_message_member_array[2] = {
  {
    "frames",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface::msg::Scene, frames),  // bytes offset in struct
    nullptr,  // default value
    size_function__Scene__frames,  // size() function pointer
    get_const_function__Scene__frames,  // get_const(index) function pointer
    get_function__Scene__frames,  // get(index) function pointer
    resize_function__Scene__frames  // resize(index) function pointer
  },
  {
    "ball_spatial_coords",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface::msg::Scene, ball_spatial_coords),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Scene_message_members = {
  "interface::msg",  // message namespace
  "Scene",  // message name
  2,  // number of fields
  sizeof(interface::msg::Scene),
  Scene_message_member_array,  // message members
  Scene_init_function,  // function to initialize message memory (memory has to be allocated)
  Scene_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Scene_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Scene_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interface::msg::Scene>()
{
  return &::interface::msg::rosidl_typesupport_introspection_cpp::Scene_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface, msg, Scene)() {
  return &::interface::msg::rosidl_typesupport_introspection_cpp::Scene_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
