// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface:msg/Scene.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__SCENE__STRUCT_HPP_
#define INTERFACE__MSG__DETAIL__SCENE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'frames'
#include "sensor_msgs/msg/detail/image__struct.hpp"
// Member 'ball_spatial_coords'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interface__msg__Scene __attribute__((deprecated))
#else
# define DEPRECATED__interface__msg__Scene __declspec(deprecated)
#endif

namespace interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Scene_
{
  using Type = Scene_<ContainerAllocator>;

  explicit Scene_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ball_spatial_coords(_init)
  {
    (void)_init;
  }

  explicit Scene_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ball_spatial_coords(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _frames_type =
    std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename ContainerAllocator::template rebind<sensor_msgs::msg::Image_<ContainerAllocator>>::other>;
  _frames_type frames;
  using _ball_spatial_coords_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _ball_spatial_coords_type ball_spatial_coords;

  // setters for named parameter idiom
  Type & set__frames(
    const std::vector<sensor_msgs::msg::Image_<ContainerAllocator>, typename ContainerAllocator::template rebind<sensor_msgs::msg::Image_<ContainerAllocator>>::other> & _arg)
  {
    this->frames = _arg;
    return *this;
  }
  Type & set__ball_spatial_coords(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->ball_spatial_coords = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface::msg::Scene_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface::msg::Scene_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface::msg::Scene_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface::msg::Scene_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface::msg::Scene_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface::msg::Scene_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface::msg::Scene_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface::msg::Scene_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface::msg::Scene_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface::msg::Scene_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface__msg__Scene
    std::shared_ptr<interface::msg::Scene_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface__msg__Scene
    std::shared_ptr<interface::msg::Scene_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Scene_ & other) const
  {
    if (this->frames != other.frames) {
      return false;
    }
    if (this->ball_spatial_coords != other.ball_spatial_coords) {
      return false;
    }
    return true;
  }
  bool operator!=(const Scene_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Scene_

// alias to use template instance with default allocator
using Scene =
  interface::msg::Scene_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface

#endif  // INTERFACE__MSG__DETAIL__SCENE__STRUCT_HPP_
