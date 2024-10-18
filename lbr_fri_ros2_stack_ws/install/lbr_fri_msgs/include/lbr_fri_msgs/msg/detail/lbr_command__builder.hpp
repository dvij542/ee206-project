// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lbr_fri_msgs:msg/LBRCommand.idl
// generated code does not contain a copyright notice

#ifndef LBR_FRI_MSGS__MSG__DETAIL__LBR_COMMAND__BUILDER_HPP_
#define LBR_FRI_MSGS__MSG__DETAIL__LBR_COMMAND__BUILDER_HPP_

#include "lbr_fri_msgs/msg/detail/lbr_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace lbr_fri_msgs
{

namespace msg
{

namespace builder
{

class Init_LBRCommand_torque
{
public:
  explicit Init_LBRCommand_torque(::lbr_fri_msgs::msg::LBRCommand & msg)
  : msg_(msg)
  {}
  ::lbr_fri_msgs::msg::LBRCommand torque(::lbr_fri_msgs::msg::LBRCommand::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lbr_fri_msgs::msg::LBRCommand msg_;
};

class Init_LBRCommand_wrench
{
public:
  explicit Init_LBRCommand_wrench(::lbr_fri_msgs::msg::LBRCommand & msg)
  : msg_(msg)
  {}
  Init_LBRCommand_torque wrench(::lbr_fri_msgs::msg::LBRCommand::_wrench_type arg)
  {
    msg_.wrench = std::move(arg);
    return Init_LBRCommand_torque(msg_);
  }

private:
  ::lbr_fri_msgs::msg::LBRCommand msg_;
};

class Init_LBRCommand_joint_position
{
public:
  Init_LBRCommand_joint_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LBRCommand_wrench joint_position(::lbr_fri_msgs::msg::LBRCommand::_joint_position_type arg)
  {
    msg_.joint_position = std::move(arg);
    return Init_LBRCommand_wrench(msg_);
  }

private:
  ::lbr_fri_msgs::msg::LBRCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lbr_fri_msgs::msg::LBRCommand>()
{
  return lbr_fri_msgs::msg::builder::Init_LBRCommand_joint_position();
}

}  // namespace lbr_fri_msgs

#endif  // LBR_FRI_MSGS__MSG__DETAIL__LBR_COMMAND__BUILDER_HPP_
