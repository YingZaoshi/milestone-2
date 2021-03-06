// Generated by gencpp from file crazyflie_gazebo/Stop.msg
// DO NOT EDIT!


#ifndef CRAZYFLIE_GAZEBO_MESSAGE_STOP_H
#define CRAZYFLIE_GAZEBO_MESSAGE_STOP_H

#include <ros/service_traits.h>


#include <crazyflie_gazebo/StopRequest.h>
#include <crazyflie_gazebo/StopResponse.h>


namespace crazyflie_gazebo
{

struct Stop
{

typedef StopRequest Request;
typedef StopResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Stop
} // namespace crazyflie_gazebo


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::crazyflie_gazebo::Stop > {
  static const char* value()
  {
    return "d44d7e9aa94d069ed5834dbd7329e1bb";
  }

  static const char* value(const ::crazyflie_gazebo::Stop&) { return value(); }
};

template<>
struct DataType< ::crazyflie_gazebo::Stop > {
  static const char* value()
  {
    return "crazyflie_gazebo/Stop";
  }

  static const char* value(const ::crazyflie_gazebo::Stop&) { return value(); }
};


// service_traits::MD5Sum< ::crazyflie_gazebo::StopRequest> should match 
// service_traits::MD5Sum< ::crazyflie_gazebo::Stop > 
template<>
struct MD5Sum< ::crazyflie_gazebo::StopRequest>
{
  static const char* value()
  {
    return MD5Sum< ::crazyflie_gazebo::Stop >::value();
  }
  static const char* value(const ::crazyflie_gazebo::StopRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::crazyflie_gazebo::StopRequest> should match 
// service_traits::DataType< ::crazyflie_gazebo::Stop > 
template<>
struct DataType< ::crazyflie_gazebo::StopRequest>
{
  static const char* value()
  {
    return DataType< ::crazyflie_gazebo::Stop >::value();
  }
  static const char* value(const ::crazyflie_gazebo::StopRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::crazyflie_gazebo::StopResponse> should match 
// service_traits::MD5Sum< ::crazyflie_gazebo::Stop > 
template<>
struct MD5Sum< ::crazyflie_gazebo::StopResponse>
{
  static const char* value()
  {
    return MD5Sum< ::crazyflie_gazebo::Stop >::value();
  }
  static const char* value(const ::crazyflie_gazebo::StopResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::crazyflie_gazebo::StopResponse> should match 
// service_traits::DataType< ::crazyflie_gazebo::Stop > 
template<>
struct DataType< ::crazyflie_gazebo::StopResponse>
{
  static const char* value()
  {
    return DataType< ::crazyflie_gazebo::Stop >::value();
  }
  static const char* value(const ::crazyflie_gazebo::StopResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CRAZYFLIE_GAZEBO_MESSAGE_STOP_H
