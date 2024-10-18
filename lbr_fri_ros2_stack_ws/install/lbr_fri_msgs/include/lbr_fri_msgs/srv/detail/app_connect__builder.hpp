// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lbr_fri_msgs:srv/AppConnect.idl
// generated code does not contain a copyright notice

#ifndef LBR_FRI_MSGS__SRV__DETAIL__APP_CONNECT__BUILDER_HPP_
#define LBR_FRI_MSGS__SRV__DETAIL__APP_CONNECT__BUILDER_HPP_

#include "lbr_fri_msgs/srv/detail/app_connect__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace lbr_fri_msgs
{

namespace srv
{

namespace builder
{

class Init_AppConnect_Request_remote_host
{
public:
  explicit Init_AppConnect_Request_remote_host(::lbr_fri_msgs::srv::AppConnect_Request & msg)
  : msg_(msg)
  {}
  ::lbr_fri_msgs::srv::AppConnect_Request remote_host(::lbr_fri_msgs::srv::AppConnect_Request::_remote_host_type arg)
  {
    msg_.remote_host = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lbr_fri_msgs::srv::AppConnect_Request msg_;
};

class Init_AppConnect_Request_port_id
{
public:
  Init_AppConnect_Request_port_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AppConnect_Request_remote_host port_id(::lbr_fri_msgs::srv::AppConnect_Request::_port_id_type arg)
  {
    msg_.port_id = std::move(arg);
    return Init_AppConnect_Request_remote_host(msg_);
  }

private:
  ::lbr_fri_msgs::srv::AppConnect_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lbr_fri_msgs::srv::AppConnect_Request>()
{
  return lbr_fri_msgs::srv::builder::Init_AppConnect_Request_port_id();
}

}  // namespace lbr_fri_msgs


namespace lbr_fri_msgs
{

namespace srv
{

namespace builder
{

class Init_AppConnect_Response_message
{
public:
  explicit Init_AppConnect_Response_message(::lbr_fri_msgs::srv::AppConnect_Response & msg)
  : msg_(msg)
  {}
  ::lbr_fri_msgs::srv::AppConnect_Response message(::lbr_fri_msgs::srv::AppConnect_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lbr_fri_msgs::srv::AppConnect_Response msg_;
};

class Init_AppConnect_Response_connected
{
public:
  Init_AppConnect_Response_connected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AppConnect_Response_message connected(::lbr_fri_msgs::srv::AppConnect_Response::_connected_type arg)
  {
    msg_.connected = std::move(arg);
    return Init_AppConnect_Response_message(msg_);
  }

private:
  ::lbr_fri_msgs::srv::AppConnect_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lbr_fri_msgs::srv::AppConnect_Response>()
{
  return lbr_fri_msgs::srv::builder::Init_AppConnect_Response_connected();
}

}  // namespace lbr_fri_msgs

#endif  // LBR_FRI_MSGS__SRV__DETAIL__APP_CONNECT__BUILDER_HPP_
