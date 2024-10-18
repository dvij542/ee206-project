// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lbr_fri_msgs:srv/AppConnect.idl
// generated code does not contain a copyright notice

#ifndef LBR_FRI_MSGS__SRV__DETAIL__APP_CONNECT__STRUCT_H_
#define LBR_FRI_MSGS__SRV__DETAIL__APP_CONNECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'remote_host'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/AppConnect in the package lbr_fri_msgs.
typedef struct lbr_fri_msgs__srv__AppConnect_Request
{
  int32_t port_id;
  rosidl_runtime_c__String remote_host;
} lbr_fri_msgs__srv__AppConnect_Request;

// Struct for a sequence of lbr_fri_msgs__srv__AppConnect_Request.
typedef struct lbr_fri_msgs__srv__AppConnect_Request__Sequence
{
  lbr_fri_msgs__srv__AppConnect_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lbr_fri_msgs__srv__AppConnect_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/AppConnect in the package lbr_fri_msgs.
typedef struct lbr_fri_msgs__srv__AppConnect_Response
{
  bool connected;
  rosidl_runtime_c__String message;
} lbr_fri_msgs__srv__AppConnect_Response;

// Struct for a sequence of lbr_fri_msgs__srv__AppConnect_Response.
typedef struct lbr_fri_msgs__srv__AppConnect_Response__Sequence
{
  lbr_fri_msgs__srv__AppConnect_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lbr_fri_msgs__srv__AppConnect_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LBR_FRI_MSGS__SRV__DETAIL__APP_CONNECT__STRUCT_H_
