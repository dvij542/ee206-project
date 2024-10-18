// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lbr_fri_msgs:srv/AppConnect.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lbr_fri_msgs/srv/detail/app_connect__rosidl_typesupport_introspection_c.h"
#include "lbr_fri_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lbr_fri_msgs/srv/detail/app_connect__functions.h"
#include "lbr_fri_msgs/srv/detail/app_connect__struct.h"


// Include directives for member types
// Member `remote_host`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AppConnect_Request__rosidl_typesupport_introspection_c__AppConnect_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lbr_fri_msgs__srv__AppConnect_Request__init(message_memory);
}

void AppConnect_Request__rosidl_typesupport_introspection_c__AppConnect_Request_fini_function(void * message_memory)
{
  lbr_fri_msgs__srv__AppConnect_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AppConnect_Request__rosidl_typesupport_introspection_c__AppConnect_Request_message_member_array[2] = {
  {
    "port_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lbr_fri_msgs__srv__AppConnect_Request, port_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "remote_host",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lbr_fri_msgs__srv__AppConnect_Request, remote_host),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AppConnect_Request__rosidl_typesupport_introspection_c__AppConnect_Request_message_members = {
  "lbr_fri_msgs__srv",  // message namespace
  "AppConnect_Request",  // message name
  2,  // number of fields
  sizeof(lbr_fri_msgs__srv__AppConnect_Request),
  AppConnect_Request__rosidl_typesupport_introspection_c__AppConnect_Request_message_member_array,  // message members
  AppConnect_Request__rosidl_typesupport_introspection_c__AppConnect_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AppConnect_Request__rosidl_typesupport_introspection_c__AppConnect_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AppConnect_Request__rosidl_typesupport_introspection_c__AppConnect_Request_message_type_support_handle = {
  0,
  &AppConnect_Request__rosidl_typesupport_introspection_c__AppConnect_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lbr_fri_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lbr_fri_msgs, srv, AppConnect_Request)() {
  if (!AppConnect_Request__rosidl_typesupport_introspection_c__AppConnect_Request_message_type_support_handle.typesupport_identifier) {
    AppConnect_Request__rosidl_typesupport_introspection_c__AppConnect_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AppConnect_Request__rosidl_typesupport_introspection_c__AppConnect_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "lbr_fri_msgs/srv/detail/app_connect__rosidl_typesupport_introspection_c.h"
// already included above
// #include "lbr_fri_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "lbr_fri_msgs/srv/detail/app_connect__functions.h"
// already included above
// #include "lbr_fri_msgs/srv/detail/app_connect__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AppConnect_Response__rosidl_typesupport_introspection_c__AppConnect_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lbr_fri_msgs__srv__AppConnect_Response__init(message_memory);
}

void AppConnect_Response__rosidl_typesupport_introspection_c__AppConnect_Response_fini_function(void * message_memory)
{
  lbr_fri_msgs__srv__AppConnect_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AppConnect_Response__rosidl_typesupport_introspection_c__AppConnect_Response_message_member_array[2] = {
  {
    "connected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lbr_fri_msgs__srv__AppConnect_Response, connected),  // bytes offset in struct
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
    offsetof(lbr_fri_msgs__srv__AppConnect_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AppConnect_Response__rosidl_typesupport_introspection_c__AppConnect_Response_message_members = {
  "lbr_fri_msgs__srv",  // message namespace
  "AppConnect_Response",  // message name
  2,  // number of fields
  sizeof(lbr_fri_msgs__srv__AppConnect_Response),
  AppConnect_Response__rosidl_typesupport_introspection_c__AppConnect_Response_message_member_array,  // message members
  AppConnect_Response__rosidl_typesupport_introspection_c__AppConnect_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AppConnect_Response__rosidl_typesupport_introspection_c__AppConnect_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AppConnect_Response__rosidl_typesupport_introspection_c__AppConnect_Response_message_type_support_handle = {
  0,
  &AppConnect_Response__rosidl_typesupport_introspection_c__AppConnect_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lbr_fri_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lbr_fri_msgs, srv, AppConnect_Response)() {
  if (!AppConnect_Response__rosidl_typesupport_introspection_c__AppConnect_Response_message_type_support_handle.typesupport_identifier) {
    AppConnect_Response__rosidl_typesupport_introspection_c__AppConnect_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AppConnect_Response__rosidl_typesupport_introspection_c__AppConnect_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "lbr_fri_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "lbr_fri_msgs/srv/detail/app_connect__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers lbr_fri_msgs__srv__detail__app_connect__rosidl_typesupport_introspection_c__AppConnect_service_members = {
  "lbr_fri_msgs__srv",  // service namespace
  "AppConnect",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // lbr_fri_msgs__srv__detail__app_connect__rosidl_typesupport_introspection_c__AppConnect_Request_message_type_support_handle,
  NULL  // response message
  // lbr_fri_msgs__srv__detail__app_connect__rosidl_typesupport_introspection_c__AppConnect_Response_message_type_support_handle
};

static rosidl_service_type_support_t lbr_fri_msgs__srv__detail__app_connect__rosidl_typesupport_introspection_c__AppConnect_service_type_support_handle = {
  0,
  &lbr_fri_msgs__srv__detail__app_connect__rosidl_typesupport_introspection_c__AppConnect_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lbr_fri_msgs, srv, AppConnect_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lbr_fri_msgs, srv, AppConnect_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lbr_fri_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lbr_fri_msgs, srv, AppConnect)() {
  if (!lbr_fri_msgs__srv__detail__app_connect__rosidl_typesupport_introspection_c__AppConnect_service_type_support_handle.typesupport_identifier) {
    lbr_fri_msgs__srv__detail__app_connect__rosidl_typesupport_introspection_c__AppConnect_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)lbr_fri_msgs__srv__detail__app_connect__rosidl_typesupport_introspection_c__AppConnect_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lbr_fri_msgs, srv, AppConnect_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lbr_fri_msgs, srv, AppConnect_Response)()->data;
  }

  return &lbr_fri_msgs__srv__detail__app_connect__rosidl_typesupport_introspection_c__AppConnect_service_type_support_handle;
}
