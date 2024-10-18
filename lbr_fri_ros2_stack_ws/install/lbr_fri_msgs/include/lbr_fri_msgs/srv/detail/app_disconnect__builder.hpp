// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lbr_fri_msgs:srv/AppDisconnect.idl
// generated code does not contain a copyright notice

#ifndef LBR_FRI_MSGS__SRV__DETAIL__APP_DISCONNECT__BUILDER_HPP_
#define LBR_FRI_MSGS__SRV__DETAIL__APP_DISCONNECT__BUILDER_HPP_

#include "lbr_fri_msgs/srv/detail/app_disconnect__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace lbr_fri_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lbr_fri_msgs::srv::AppDisconnect_Request>()
{
  return ::lbr_fri_msgs::srv::AppDisconnect_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace lbr_fri_msgs


namespace lbr_fri_msgs
{

namespace srv
{

namespace builder
{

class Init_AppDisconnect_Response_message
{
public:
  explicit Init_AppDisconnect_Response_message(::lbr_fri_msgs::srv::AppDisconnect_Response & msg)
  : msg_(msg)
  {}
  ::lbr_fri_msgs::srv::AppDisconnect_Response message(::lbr_fri_msgs::srv::AppDisconnect_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lbr_fri_msgs::srv::AppDisconnect_Response msg_;
};

class Init_AppDisconnect_Response_disconnected
{
public:
  Init_AppDisconnect_Response_disconnected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AppDisconnect_Response_message disconnected(::lbr_fri_msgs::srv::AppDisconnect_Response::_disconnected_type arg)
  {
    msg_.disconnected = std::move(arg);
    return Init_AppDisconnect_Response_message(msg_);
  }

private:
  ::lbr_fri_msgs::srv::AppDisconnect_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lbr_fri_msgs::srv::AppDisconnect_Response>()
{
  return lbr_fri_msgs::srv::builder::Init_AppDisconnect_Response_disconnected();
}

}  // namespace lbr_fri_msgs

#endif  // LBR_FRI_MSGS__SRV__DETAIL__APP_DISCONNECT__BUILDER_HPP_
