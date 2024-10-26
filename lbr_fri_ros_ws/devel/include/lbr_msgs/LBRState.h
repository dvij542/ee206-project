// Generated by gencpp from file lbr_msgs/LBRState.msg
// DO NOT EDIT!


#ifndef LBR_MSGS_MESSAGE_LBRSTATE_H
#define LBR_MSGS_MESSAGE_LBRSTATE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Time.h>

namespace lbr_msgs
{
template <class ContainerAllocator>
struct LBRState_
{
  typedef LBRState_<ContainerAllocator> Type;

  LBRState_()
    : stamp()
    , sample_time(0.0)
    , position()
    , torque()
    , external_torque()  {
    }
  LBRState_(const ContainerAllocator& _alloc)
    : stamp(_alloc)
    , sample_time(0.0)
    , position(_alloc)
    , torque(_alloc)
    , external_torque(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Time_<ContainerAllocator>  _stamp_type;
  _stamp_type stamp;

   typedef double _sample_time_type;
  _sample_time_type sample_time;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _position_type;
  _position_type position;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _torque_type;
  _torque_type torque;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _external_torque_type;
  _external_torque_type external_torque;





  typedef boost::shared_ptr< ::lbr_msgs::LBRState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lbr_msgs::LBRState_<ContainerAllocator> const> ConstPtr;

}; // struct LBRState_

typedef ::lbr_msgs::LBRState_<std::allocator<void> > LBRState;

typedef boost::shared_ptr< ::lbr_msgs::LBRState > LBRStatePtr;
typedef boost::shared_ptr< ::lbr_msgs::LBRState const> LBRStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lbr_msgs::LBRState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lbr_msgs::LBRState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::lbr_msgs::LBRState_<ContainerAllocator1> & lhs, const ::lbr_msgs::LBRState_<ContainerAllocator2> & rhs)
{
  return lhs.stamp == rhs.stamp &&
    lhs.sample_time == rhs.sample_time &&
    lhs.position == rhs.position &&
    lhs.torque == rhs.torque &&
    lhs.external_torque == rhs.external_torque;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::lbr_msgs::LBRState_<ContainerAllocator1> & lhs, const ::lbr_msgs::LBRState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace lbr_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::lbr_msgs::LBRState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lbr_msgs::LBRState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lbr_msgs::LBRState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lbr_msgs::LBRState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lbr_msgs::LBRState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lbr_msgs::LBRState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lbr_msgs::LBRState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "71e053993298b574a690156a73db8a42";
  }

  static const char* value(const ::lbr_msgs::LBRState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x71e053993298b574ULL;
  static const uint64_t static_value2 = 0xa690156a73db8a42ULL;
};

template<class ContainerAllocator>
struct DataType< ::lbr_msgs::LBRState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lbr_msgs/LBRState";
  }

  static const char* value(const ::lbr_msgs::LBRState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lbr_msgs::LBRState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Time stamp\n"
"float64 sample_time\n"
"float64[] position\n"
"float64[] torque\n"
"float64[] external_torque\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Time\n"
"time data\n"
;
  }

  static const char* value(const ::lbr_msgs::LBRState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lbr_msgs::LBRState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stamp);
      stream.next(m.sample_time);
      stream.next(m.position);
      stream.next(m.torque);
      stream.next(m.external_torque);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LBRState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lbr_msgs::LBRState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lbr_msgs::LBRState_<ContainerAllocator>& v)
  {
    s << indent << "stamp: ";
    s << std::endl;
    Printer< ::std_msgs::Time_<ContainerAllocator> >::stream(s, indent + "  ", v.stamp);
    s << indent << "sample_time: ";
    Printer<double>::stream(s, indent + "  ", v.sample_time);
    s << indent << "position[]" << std::endl;
    for (size_t i = 0; i < v.position.size(); ++i)
    {
      s << indent << "  position[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.position[i]);
    }
    s << indent << "torque[]" << std::endl;
    for (size_t i = 0; i < v.torque.size(); ++i)
    {
      s << indent << "  torque[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.torque[i]);
    }
    s << indent << "external_torque[]" << std::endl;
    for (size_t i = 0; i < v.external_torque.size(); ++i)
    {
      s << indent << "  external_torque[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.external_torque[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // LBR_MSGS_MESSAGE_LBRSTATE_H