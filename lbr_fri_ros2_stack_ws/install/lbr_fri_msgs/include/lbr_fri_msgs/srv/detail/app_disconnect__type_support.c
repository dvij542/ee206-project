// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lbr_fri_msgs:srv/AppDisconnect.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lbr_fri_msgs/srv/detail/app_disconnect__rosidl_typesupport_introspection_c.h"
#include "lbr_fri_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lbr_fri_msgs/srv/detail/app_disconnect__functions.h"
#include "lbr_fri_msgs/srv/detail/app_disconnect__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void AppDisconnect_Request__rosidl_typesupport_introspection_c__AppDisconnect_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lbr_fri_msgs__srv__AppDisconnect_Request__init(message_memory);
}

void AppDisconnect_Request__rosidl_typesupport_introspection_c__AppDisconnect_Request_fini_function(void * message_memory)
{
  lbr_fri_msgs__srv__AppDisconnect_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AppDisconnect_Request__rosidl_typesupport_introspection_c__AppDisconnect_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lbr_fri_msgs__srv__AppDisconnect_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AppDisconnect_Request__rosidl_typesupport_introspection_c__AppDisconnect_Request_message_members = {
  "lbr_fri_msgs__srv",  // message namespace
  "AppDisconnect_Request",  // message name
  1,  // number of fields
  sizeof(lbr_fri_msgs__srv__AppDisconnect_Request),
  AppDisconnect_Request__rosidl_typesupport_introspection_c__AppDisconnect_Request_message_member_array,  // message members
  AppDisconnect_Request__rosidl_typesupport_introspection_c__AppDisconnect_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AppDisconnect_Request__rosidl_typesupport_introspection_c__AppDisconnect_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AppDisconnect_Request__rosidl_typesupport_introspection_c__AppDisconnect_Request_message_type_support_handle = {
  0,
  &AppDisconnect_Request__rosidl_typesupport_introspection_c__AppDisconnect_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lbr_fri_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lbr_fri_msgs, srv, AppDisconnect_Request)() {
  if (!AppDisconnect_Request__rosidl_typesupport_introspection_c__AppDisconnect_Request_message_type_support_handle.typesupport_identifier) {
    AppDisconnect_Request__rosidl_typesupport_introspection_c__AppDisconnect_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AppDisconnect_Request__rosidl_typesupport_introspection_c__AppDisconnect_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "lbr_fri_msgs/srv/detail/app_disconnect__rosidl_typesupport_introspection_c.h"
// already included above
// #include "lbr_fri_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "lbr_fri_msgs/srv/detail/app_disconnect__functions.h"
// already included above
// #include "lbr_fri_msgs/srv/detail/app_disconnect__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AppDisconnect_Response__rosidl_typesupport_introspection_c__AppDisconnect_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lbr_fri_msgs__srv__AppDisconnect_Response__init(message_memory);
}

void AppDisconnect_Response__rosidl_typesupport_introspection_c__AppDisconnect_Response_fini_function(void * message_memory)
{
  lbr_fri_msgs__srv__AppDisconnect_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AppDisconnect_Response__rosidl_typesupport_introspection_c__AppDisconnect_Response_message_member_array[2] = {
  {
    "disconnected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lbr_fri_msgs__srv__AppDisconnect_Response, disconnected),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lbr_fri_msgs__srv__AppDisconnect_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AppDisconnect_Response__rosidl_typesupport_introspection_c__AppDisconnect_Response_message_members = {
  "lbr_fri_msgs__srv",  // message namespace
  "AppDisconnect_Response",  // message name
  2,  // number of fields
  sizeof(lbr_fri_msgs__srv__AppDisconnect_Response),
  AppDisconnect_Response__rosidl_typesupport_introspection_c__AppDisconnect_Response_message_member_array,  // message members
  AppDisconnect_Response__rosidl_typesupport_introspection_c__AppDisconnect_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AppDisconnect_Response__rosidl_typesupport_introspection_c__AppDisconnect_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AppDisconnect_Response__rosidl_typesupport_introspection_c__AppDisconnect_Response_message_type_support_handle = {
  0,
  &AppDisconnect_Response__rosidl_typesupport_introspection_c__AppDisconnect_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lbr_fri_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lbr_fri_msgs, srv, AppDisconnect_Response)() {
  if (!AppDisconnect_Response__rosidl_typesupport_introspection_c__AppDisconnect_Response_message_type_support_handle.typesupport_identifier) {
    AppDisconnect_Response__rosidl_typesupport_introspection_c__AppDisconnect_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AppDisconnect_Response__rosidl_typesupport_introspection_c__AppDisconnect_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "lbr_fri_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "lbr_fri_msgs/srv/detail/app_disconnect__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers lbr_fri_msgs__srv__detail__app_disconnect__rosidl_typesupport_introspection_c__AppDisconnect_service_members = {
  "lbr_fri_msgs__srv",  // service namespace
  "AppDisconnect",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // lbr_fri_msgs__srv__detail__app_disconnect__rosidl_typesupport_introspection_c__AppDisconnect_Request_message_type_support_handle,
  NULL  // response message
  // lbr_fri_msgs__srv__detail__app_disconnect__rosidl_typesupport_introspection_c__AppDisconnect_Response_message_type_support_handle
};

static rosidl_service_type_support_t lbr_fri_msgs__srv__detail__app_disconnect__rosidl_typesupport_introspection_c__AppDisconnect_service_type_support_handle = {
  0,
  &lbr_fri_msgs__srv__detail__app_disconnect__rosidl_typesupport_introspection_c__AppDisconnect_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lbr_fri_msgs, srv, AppDisconnect_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lbr_fri_msgs, srv, AppDisconnect_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lbr_fri_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lbr_fri_msgs, srv, AppDisconnect)() {
  if (!lbr_fri_msgs__srv__detail__app_disconnect__rosidl_typesupport_introspection_c__AppDisconnect_service_type_support_handle.typesupport_identifier) {
    lbr_fri_msgs__srv__detail__app_disconnect__rosidl_typesupport_introspection_c__AppDisconnect_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)lbr_fri_msgs__srv__detail__app_disconnect__rosidl_typesupport_introspection_c__AppDisconnect_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lbr_fri_msgs, srv, AppDisconnect_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lbr_fri_msgs, srv, AppDisconnect_Response)()->data;
  }

  return &lbr_fri_msgs__srv__detail__app_disconnect__rosidl_typesupport_introspection_c__AppDisconnect_service_type_support_handle;
}
