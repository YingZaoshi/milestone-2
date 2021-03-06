// Generated by gencpp from file crazyflie_gazebo/GenericLogData.msg
// DO NOT EDIT!


#ifndef CRAZYFLIE_GAZEBO_MESSAGE_GENERICLOGDATA_H
#define CRAZYFLIE_GAZEBO_MESSAGE_GENERICLOGDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace crazyflie_gazebo
{
template <class ContainerAllocator>
struct GenericLogData_
{
  typedef GenericLogData_<ContainerAllocator> Type;

  GenericLogData_()
    : header()
    , values()  {
    }
  GenericLogData_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , values(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _values_type;
  _values_type values;





  typedef boost::shared_ptr< ::crazyflie_gazebo::GenericLogData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::crazyflie_gazebo::GenericLogData_<ContainerAllocator> const> ConstPtr;

}; // struct GenericLogData_

typedef ::crazyflie_gazebo::GenericLogData_<std::allocator<void> > GenericLogData;

typedef boost::shared_ptr< ::crazyflie_gazebo::GenericLogData > GenericLogDataPtr;
typedef boost::shared_ptr< ::crazyflie_gazebo::GenericLogData const> GenericLogDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::crazyflie_gazebo::GenericLogData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::crazyflie_gazebo::GenericLogData_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace crazyflie_gazebo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'crazyflie_gazebo': ['/home/robot/dd2419_ws/src/course_packages/sim_cf/crazyflie_gazebo/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::crazyflie_gazebo::GenericLogData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::crazyflie_gazebo::GenericLogData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crazyflie_gazebo::GenericLogData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crazyflie_gazebo::GenericLogData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crazyflie_gazebo::GenericLogData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crazyflie_gazebo::GenericLogData_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::crazyflie_gazebo::GenericLogData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bfa79f36371fee74e53d96afde61049b";
  }

  static const char* value(const ::crazyflie_gazebo::GenericLogData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbfa79f36371fee74ULL;
  static const uint64_t static_value2 = 0xe53d96afde61049bULL;
};

template<class ContainerAllocator>
struct DataType< ::crazyflie_gazebo::GenericLogData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "crazyflie_gazebo/GenericLogData";
  }

  static const char* value(const ::crazyflie_gazebo::GenericLogData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::crazyflie_gazebo::GenericLogData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float64[] values\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::crazyflie_gazebo::GenericLogData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::crazyflie_gazebo::GenericLogData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.values);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GenericLogData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::crazyflie_gazebo::GenericLogData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::crazyflie_gazebo::GenericLogData_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "values[]" << std::endl;
    for (size_t i = 0; i < v.values.size(); ++i)
    {
      s << indent << "  values[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.values[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRAZYFLIE_GAZEBO_MESSAGE_GENERICLOGDATA_H
