// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lbr_fri_msgs:msg/LBRCommand.idl
// generated code does not contain a copyright notice

#ifndef LBR_FRI_MSGS__MSG__DETAIL__LBR_COMMAND__TRAITS_HPP_
#define LBR_FRI_MSGS__MSG__DETAIL__LBR_COMMAND__TRAITS_HPP_

#include "lbr_fri_msgs/msg/detail/lbr_command__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const lbr_fri_msgs::msg::LBRCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_position.size() == 0) {
      out << "joint_position: []\n";
    } else {
      out << "joint_position:\n";
      for (auto item : msg.joint_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: wrench
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wrench.size() == 0) {
      out << "wrench: []\n";
    } else {
      out << "wrench:\n";
      for (auto item : msg.wrench) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.torque.size() == 0) {
      out << "torque: []\n";
    } else {
      out << "torque:\n";
      for (auto item : msg.torque) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const lbr_fri_msgs::msg::LBRCommand & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<lbr_fri_msgs::msg::LBRCommand>()
{
  return "lbr_fri_msgs::msg::LBRCommand";
}

template<>
inline const char * name<lbr_fri_msgs::msg::LBRCommand>()
{
  return "lbr_fri_msgs/msg/LBRCommand";
}

template<>
struct has_fixed_size<lbr_fri_msgs::msg::LBRCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lbr_fri_msgs::msg::LBRCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lbr_fri_msgs::msg::LBRCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LBR_FRI_MSGS__MSG__DETAIL__LBR_COMMAND__TRAITS_HPP_
