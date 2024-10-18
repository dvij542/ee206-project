// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lbr_fri_msgs:srv/AppDisconnect.idl
// generated code does not contain a copyright notice

#ifndef LBR_FRI_MSGS__SRV__DETAIL__APP_DISCONNECT__TRAITS_HPP_
#define LBR_FRI_MSGS__SRV__DETAIL__APP_DISCONNECT__TRAITS_HPP_

#include "lbr_fri_msgs/srv/detail/app_disconnect__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const lbr_fri_msgs::srv::AppDisconnect_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const lbr_fri_msgs::srv::AppDisconnect_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<lbr_fri_msgs::srv::AppDisconnect_Request>()
{
  return "lbr_fri_msgs::srv::AppDisconnect_Request";
}

template<>
inline const char * name<lbr_fri_msgs::srv::AppDisconnect_Request>()
{
  return "lbr_fri_msgs/srv/AppDisconnect_Request";
}

template<>
struct has_fixed_size<lbr_fri_msgs::srv::AppDisconnect_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lbr_fri_msgs::srv::AppDisconnect_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lbr_fri_msgs::srv::AppDisconnect_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const lbr_fri_msgs::srv::AppDisconnect_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: disconnected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disconnected: ";
    value_to_yaml(msg.disconnected, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const lbr_fri_msgs::srv::AppDisconnect_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<lbr_fri_msgs::srv::AppDisconnect_Response>()
{
  return "lbr_fri_msgs::srv::AppDisconnect_Response";
}

template<>
inline const char * name<lbr_fri_msgs::srv::AppDisconnect_Response>()
{
  return "lbr_fri_msgs/srv/AppDisconnect_Response";
}

template<>
struct has_fixed_size<lbr_fri_msgs::srv::AppDisconnect_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lbr_fri_msgs::srv::AppDisconnect_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lbr_fri_msgs::srv::AppDisconnect_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lbr_fri_msgs::srv::AppDisconnect>()
{
  return "lbr_fri_msgs::srv::AppDisconnect";
}

template<>
inline const char * name<lbr_fri_msgs::srv::AppDisconnect>()
{
  return "lbr_fri_msgs/srv/AppDisconnect";
}

template<>
struct has_fixed_size<lbr_fri_msgs::srv::AppDisconnect>
  : std::integral_constant<
    bool,
    has_fixed_size<lbr_fri_msgs::srv::AppDisconnect_Request>::value &&
    has_fixed_size<lbr_fri_msgs::srv::AppDisconnect_Response>::value
  >
{
};

template<>
struct has_bounded_size<lbr_fri_msgs::srv::AppDisconnect>
  : std::integral_constant<
    bool,
    has_bounded_size<lbr_fri_msgs::srv::AppDisconnect_Request>::value &&
    has_bounded_size<lbr_fri_msgs::srv::AppDisconnect_Response>::value
  >
{
};

template<>
struct is_service<lbr_fri_msgs::srv::AppDisconnect>
  : std::true_type
{
};

template<>
struct is_service_request<lbr_fri_msgs::srv::AppDisconnect_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lbr_fri_msgs::srv::AppDisconnect_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LBR_FRI_MSGS__SRV__DETAIL__APP_DISCONNECT__TRAITS_HPP_
