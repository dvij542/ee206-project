// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface:msg/Scene.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__SCENE__TRAITS_HPP_
#define INTERFACE__MSG__DETAIL__SCENE__TRAITS_HPP_

#include "interface/msg/detail/scene__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'ball_spatial_coords'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interface::msg::Scene>()
{
  return "interface::msg::Scene";
}

template<>
inline const char * name<interface::msg::Scene>()
{
  return "interface/msg/Scene";
}

template<>
struct has_fixed_size<interface::msg::Scene>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interface::msg::Scene>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interface::msg::Scene>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE__MSG__DETAIL__SCENE__TRAITS_HPP_
