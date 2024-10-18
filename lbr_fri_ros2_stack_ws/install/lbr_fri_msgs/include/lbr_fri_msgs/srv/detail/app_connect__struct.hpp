// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lbr_fri_msgs:srv/AppConnect.idl
// generated code does not contain a copyright notice

#ifndef LBR_FRI_MSGS__SRV__DETAIL__APP_CONNECT__STRUCT_HPP_
#define LBR_FRI_MSGS__SRV__DETAIL__APP_CONNECT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__lbr_fri_msgs__srv__AppConnect_Request __attribute__((deprecated))
#else
# define DEPRECATED__lbr_fri_msgs__srv__AppConnect_Request __declspec(deprecated)
#endif

namespace lbr_fri_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AppConnect_Request_
{
  using Type = AppConnect_Request_<ContainerAllocator>;

  explicit AppConnect_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->port_id = 0l;
      this->remote_host = "";
    }
  }

  explicit AppConnect_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : remote_host(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->port_id = 0l;
      this->remote_host = "";
    }
  }

  // field types and members
  using _port_id_type =
    int32_t;
  _port_id_type port_id;
  using _remote_host_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _remote_host_type remote_host;

  // setters for named parameter idiom
  Type & set__port_id(
    const int32_t & _arg)
  {
    this->port_id = _arg;
    return *this;
  }
  Type & set__remote_host(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->remote_host = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lbr_fri_msgs::srv::AppConnect_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const lbr_fri_msgs::srv::AppConnect_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lbr_fri_msgs::srv::AppConnect_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lbr_fri_msgs::srv::AppConnect_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lbr_fri_msgs::srv::AppConnect_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lbr_fri_msgs::srv::AppConnect_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lbr_fri_msgs::srv::AppConnect_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lbr_fri_msgs::srv::AppConnect_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lbr_fri_msgs::srv::AppConnect_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lbr_fri_msgs::srv::AppConnect_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lbr_fri_msgs__srv__AppConnect_Request
    std::shared_ptr<lbr_fri_msgs::srv::AppConnect_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lbr_fri_msgs__srv__AppConnect_Request
    std::shared_ptr<lbr_fri_msgs::srv::AppConnect_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AppConnect_Request_ & other) const
  {
    if (this->port_id != other.port_id) {
      return false;
    }
    if (this->remote_host != other.remote_host) {
      return false;
    }
    return true;
  }
  bool operator!=(const AppConnect_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AppConnect_Request_

// alias to use template instance with default allocator
using AppConnect_Request =
  lbr_fri_msgs::srv::AppConnect_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lbr_fri_msgs


#ifndef _WIN32
# define DEPRECATED__lbr_fri_msgs__srv__AppConnect_Response __attribute__((deprecated))
#else
# define DEPRECATED__lbr_fri_msgs__srv__AppConnect_Response __declspec(deprecated)
#endif

namespace lbr_fri_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AppConnect_Response_
{
  using Type = AppConnect_Response_<ContainerAllocator>;

  explicit AppConnect_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connected = false;
      this->message = "";
    }
  }

  explicit AppConnect_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connected = false;
      this->message = "";
    }
  }

  // field types and members
  using _connected_type =
    bool;
  _connected_type connected;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__connected(
    const bool & _arg)
  {
    this->connected = _arg;
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
    lbr_fri_msgs::srv::AppConnect_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const lbr_fri_msgs::srv::AppConnect_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lbr_fri_msgs::srv::AppConnect_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lbr_fri_msgs::srv::AppConnect_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lbr_fri_msgs::srv::AppConnect_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lbr_fri_msgs::srv::AppConnect_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lbr_fri_msgs::srv::AppConnect_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lbr_fri_msgs::srv::AppConnect_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lbr_fri_msgs::srv::AppConnect_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lbr_fri_msgs::srv::AppConnect_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lbr_fri_msgs__srv__AppConnect_Response
    std::shared_ptr<lbr_fri_msgs::srv::AppConnect_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lbr_fri_msgs__srv__AppConnect_Response
    std::shared_ptr<lbr_fri_msgs::srv::AppConnect_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AppConnect_Response_ & other) const
  {
    if (this->connected != other.connected) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const AppConnect_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AppConnect_Response_

// alias to use template instance with default allocator
using AppConnect_Response =
  lbr_fri_msgs::srv::AppConnect_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lbr_fri_msgs

namespace lbr_fri_msgs
{

namespace srv
{

struct AppConnect
{
  using Request = lbr_fri_msgs::srv::AppConnect_Request;
  using Response = lbr_fri_msgs::srv::AppConnect_Response;
};

}  // namespace srv

}  // namespace lbr_fri_msgs

#endif  // LBR_FRI_MSGS__SRV__DETAIL__APP_CONNECT__STRUCT_HPP_
