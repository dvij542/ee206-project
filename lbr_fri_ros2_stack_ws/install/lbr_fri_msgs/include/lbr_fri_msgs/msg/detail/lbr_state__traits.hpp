// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lbr_fri_msgs:msg/LBRState.idl
// generated code does not contain a copyright notice

#ifndef LBR_FRI_MSGS__MSG__DETAIL__LBR_STATE__TRAITS_HPP_
#define LBR_FRI_MSGS__MSG__DETAIL__LBR_STATE__TRAITS_HPP_

#include "lbr_fri_msgs/msg/detail/lbr_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const lbr_fri_msgs::msg::LBRState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sample_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sample_time: ";
    value_to_yaml(msg.sample_time, out);
    out << "\n";
  }

  // member: session_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "session_state: ";
    value_to_yaml(msg.session_state, out);
    out << "\n";
  }

  // member: connection_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connection_quality: ";
    value_to_yaml(msg.connection_quality, out);
    out << "\n";
  }

  // member: safety_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_state: ";
    value_to_yaml(msg.safety_state, out);
    out << "\n";
  }

  // member: operation_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operation_mode: ";
    value_to_yaml(msg.operation_mode, out);
    out << "\n";
  }

  // member: drive_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drive_state: ";
    value_to_yaml(msg.drive_state, out);
    out << "\n";
  }

  // member: client_command_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client_command_mode: ";
    value_to_yaml(msg.client_command_mode, out);
    out << "\n";
  }

  // member: overlay_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overlay_type: ";
    value_to_yaml(msg.overlay_type, out);
    out << "\n";
  }

  // member: control_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_mode: ";
    value_to_yaml(msg.control_mode, out);
    out << "\n";
  }

  // member: time_stamp_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_stamp_sec: ";
    value_to_yaml(msg.time_stamp_sec, out);
    out << "\n";
  }

  // member: time_stamp_nano_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_stamp_nano_sec: ";
    value_to_yaml(msg.time_stamp_nano_sec, out);
    out << "\n";
  }

  // member: measured_joint_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.measured_joint_position.size() == 0) {
      out << "measured_joint_position: []\n";
    } else {
      out << "measured_joint_position:\n";
      for (auto item : msg.measured_joint_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: commanded_joint_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.commanded_joint_position.size() == 0) {
      out << "commanded_joint_position: []\n";
    } else {
      out << "commanded_joint_position:\n";
      for (auto item : msg.commanded_joint_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: measured_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.measured_torque.size() == 0) {
      out << "measured_torque: []\n";
    } else {
      out << "measured_torque:\n";
      for (auto item : msg.measured_torque) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: commanded_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.commanded_torque.size() == 0) {
      out << "commanded_torque: []\n";
    } else {
      out << "commanded_torque:\n";
      for (auto item : msg.commanded_torque) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: external_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.external_torque.size() == 0) {
      out << "external_torque: []\n";
    } else {
      out << "external_torque:\n";
      for (auto item : msg.external_torque) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ipo_joint_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ipo_joint_position.size() == 0) {
      out << "ipo_joint_position: []\n";
    } else {
      out << "ipo_joint_position:\n";
      for (auto item : msg.ipo_joint_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tracking_performance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_performance: ";
    value_to_yaml(msg.tracking_performance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const lbr_fri_msgs::msg::LBRState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<lbr_fri_msgs::msg::LBRState>()
{
  return "lbr_fri_msgs::msg::LBRState";
}

template<>
inline const char * name<lbr_fri_msgs::msg::LBRState>()
{
  return "lbr_fri_msgs/msg/LBRState";
}

template<>
struct has_fixed_size<lbr_fri_msgs::msg::LBRState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lbr_fri_msgs::msg::LBRState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lbr_fri_msgs::msg::LBRState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LBR_FRI_MSGS__MSG__DETAIL__LBR_STATE__TRAITS_HPP_
