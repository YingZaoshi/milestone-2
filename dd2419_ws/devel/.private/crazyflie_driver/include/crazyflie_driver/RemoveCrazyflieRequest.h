// Generated by gencpp from file crazyflie_driver/RemoveCrazyflieRequest.msg
// DO NOT EDIT!


#ifndef CRAZYFLIE_DRIVER_MESSAGE_REMOVECRAZYFLIEREQUEST_H
#define CRAZYFLIE_DRIVER_MESSAGE_REMOVECRAZYFLIEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace crazyflie_driver
{
template <class ContainerAllocator>
struct RemoveCrazyflieRequest_
{
  typedef RemoveCrazyflieRequest_<ContainerAllocator> Type;

  RemoveCrazyflieRequest_()
    : uri()  {
    }
  RemoveCrazyflieRequest_(const ContainerAllocator& _alloc)
    : uri(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _uri_type;
  _uri_type uri;





  typedef boost::shared_ptr< ::crazyflie_driver::RemoveCrazyflieRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::crazyflie_driver::RemoveCrazyflieRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RemoveCrazyflieRequest_

typedef ::crazyflie_driver::RemoveCrazyflieRequest_<std::allocator<void> > RemoveCrazyflieRequest;

typedef boost::shared_ptr< ::crazyflie_driver::RemoveCrazyflieRequest > RemoveCrazyflieRequestPtr;
typedef boost::shared_ptr< ::crazyflie_driver::RemoveCrazyflieRequest const> RemoveCrazyflieRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::crazyflie_driver::RemoveCrazyflieRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::crazyflie_driver::RemoveCrazyflieRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace crazyflie_driver

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'crazyflie_driver': ['/home/robot/dd2419_ws/src/course_packages/crazyflie_ros/crazyflie_driver/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::crazyflie_driver::RemoveCrazyflieRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::crazyflie_driver::RemoveCrazyflieRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crazyflie_driver::RemoveCrazyflieRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crazyflie_driver::RemoveCrazyflieRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crazyflie_driver::RemoveCrazyflieRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crazyflie_driver::RemoveCrazyflieRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::crazyflie_driver::RemoveCrazyflieRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "636fe5e07550f026d28388e95c38a9f4";
  }

  static const char* value(const ::crazyflie_driver::RemoveCrazyflieRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x636fe5e07550f026ULL;
  static const uint64_t static_value2 = 0xd28388e95c38a9f4ULL;
};

template<class ContainerAllocator>
struct DataType< ::crazyflie_driver::RemoveCrazyflieRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "crazyflie_driver/RemoveCrazyflieRequest";
  }

  static const char* value(const ::crazyflie_driver::RemoveCrazyflieRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::crazyflie_driver::RemoveCrazyflieRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string uri\n"
;
  }

  static const char* value(const ::crazyflie_driver::RemoveCrazyflieRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::crazyflie_driver::RemoveCrazyflieRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.uri);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RemoveCrazyflieRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::crazyflie_driver::RemoveCrazyflieRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::crazyflie_driver::RemoveCrazyflieRequest_<ContainerAllocator>& v)
  {
    s << indent << "uri: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.uri);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRAZYFLIE_DRIVER_MESSAGE_REMOVECRAZYFLIEREQUEST_H
