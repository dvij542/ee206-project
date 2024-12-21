// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface:msg/Scene.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__SCENE__BUILDER_HPP_
#define INTERFACE__MSG__DETAIL__SCENE__BUILDER_HPP_

#include "interface/msg/detail/scene__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interface
{

namespace msg
{

namespace builder
{

class Init_Scene_ball_spatial_coords
{
public:
  explicit Init_Scene_ball_spatial_coords(::interface::msg::Scene & msg)
  : msg_(msg)
  {}
  ::interface::msg::Scene ball_spatial_coords(::interface::msg::Scene::_ball_spatial_coords_type arg)
  {
    msg_.ball_spatial_coords = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface::msg::Scene msg_;
};

class Init_Scene_frames
{
public:
  Init_Scene_frames()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Scene_ball_spatial_coords frames(::interface::msg::Scene::_frames_type arg)
  {
    msg_.frames = std::move(arg);
    return Init_Scene_ball_spatial_coords(msg_);
  }

private:
  ::interface::msg::Scene msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface::msg::Scene>()
{
  return interface::msg::builder::Init_Scene_frames();
}

}  // namespace interface

#endif  // INTERFACE__MSG__DETAIL__SCENE__BUILDER_HPP_
