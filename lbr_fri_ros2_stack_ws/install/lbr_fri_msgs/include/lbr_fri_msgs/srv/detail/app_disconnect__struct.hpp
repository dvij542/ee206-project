// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lbr_fri_msgs:srv/AppDisconnect.idl
// generated code does not contain a copyright notice

#ifndef LBR_FRI_MSGS__SRV__DETAIL__APP_DISCONNECT__STRUCT_HPP_
#define LBR_FRI_MSGS__SRV__DETAIL__APP_DISCONNECT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__lbr_fri_msgs__srv__AppDisconnect_Request __attribute__((deprecated))
#else
# define DEPRECATED__lbr_fri_msgs__srv__AppDisconnect_Request __declspec(deprecated)
#endif

namespace lbr_fri_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AppDisconnect_Request_
{
  using Type = AppDisconnect_Request_<ContainerAllocator>;

  explicit AppDisconnect_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit AppDisconnect_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    lbr_fri_msgs::srv::AppDisconnect_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const lbr_fri_msgs::srv::AppDisconnect_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lbr_fri_msgs::srv::AppDisconnect_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lbr_fri_msgs::srv::AppDisconnect_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lbr_fri_msgs::srv::AppDisconnect_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lbr_fri_msgs::srv::AppDisconnect_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lbr_fri_msgs::srv::AppDisconnect_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lbr_fri_msgs::srv::AppDisconnect_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lbr_fri_msgs::srv::AppDisconnect_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lbr_fri_msgs::srv::AppDisconnect_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lbr_fri_msgs__srv__AppDisconnect_Request
    std::shared_ptr<lbr_fri_msgs::srv::AppDisconnect_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lbr_fri_msgs__srv__AppDisconnect_Request
    std::shared_ptr<lbr_fri_msgs::srv::AppDisconnect_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AppDisconnect_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const AppDisconnect_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AppDisconnect_Request_

// alias to use template instance with default allocator
using AppDisconnect_Request =
  lbr_fri_msgs::srv::AppDisconnect_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lbr_fri_msgs


#ifndef _WIN32
# define DEPRECATED__lbr_fri_msgs__srv__AppDisconnect_Response __attribute__((deprecated))
#else
# define DEPRECATED__lbr_fri_msgs__srv__AppDisconnect_Response __declspec(deprecated)
#endif

namespace lbr_fri_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AppDisconnect_Response_
{
  using Type = AppDisconnect_Response_<ContainerAllocator>;

  explicit AppDisconnect_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->disconnected = false;
      this->message = "";
    }
  }

  explicit AppDisconnect_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->disconnected = false;
      this->message = "";
    }
  }

  // field types and members
  using _disconnected_type =
    bool;
  _disconnected_type disconnected;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__disconnected(
    const bool & _arg)
  {
    this->disconnected = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lbr_fri_msgs::srv::AppDisconnect_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const lbr_fri_msgs::srv::AppDisconnect_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lbr_fri_msgs::srv::AppDisconnect_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lbr_fri_msgs::srv::AppDisconnect_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lbr_fri_msgs::srv::AppDisconnect_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lbr_fri_msgs::srv::AppDisconnect_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lbr_fri_msgs::srv::AppDisconnect_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lbr_fri_msgs::srv::AppDisconnect_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lbr_fri_msgs::srv::AppDisconnect_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lbr_fri_msgs::srv::AppDisconnect_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lbr_fri_msgs__srv__AppDisconnect_Response
    std::shared_ptr<lbr_fri_msgs::srv::AppDisconnect_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lbr_fri_msgs__srv__AppDisconnect_Response
    std::shared_ptr<lbr_fri_msgs::srv::AppDisconnect_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AppDisconnect_Response_ & other) const
  {
    if (this->disconnected != other.disconnected) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const AppDisconnect_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AppDisconnect_Response_

// alias to use template instance with default allocator
using AppDisconnect_Response =
  lbr_fri_msgs::srv::AppDisconnect_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lbr_fri_msgs

namespace lbr_fri_msgs
{

namespace srv
{

struct AppDisconnect
{
  using Request = lbr_fri_msgs::srv::AppDisconnect_Request;
  using Response = lbr_fri_msgs::srv::AppDisconnect_Response;
};

}  // namespace srv

}  // namespace lbr_fri_msgs

#endif  // LBR_FRI_MSGS__SRV__DETAIL__APP_DISCONNECT__STRUCT_HPP_
