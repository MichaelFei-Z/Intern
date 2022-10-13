// Generated by gencpp from file my_msg/sensor.msg
// DO NOT EDIT!


#ifndef MY_MSG_MESSAGE_SENSOR_H
#define MY_MSG_MESSAGE_SENSOR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseWithCovarianceStamped.h>

namespace my_msg
{
template <class ContainerAllocator>
struct sensor_
{
  typedef sensor_<ContainerAllocator> Type;

  sensor_()
    : ids()
    , size()
    , pose()
    , id(0)
    , xacc(0.0)
    , yacc(0.0)
    , zacc(0.0)
    , temperture(0.0)  {
    }
  sensor_(const ContainerAllocator& _alloc)
    : ids(_alloc)
    , size(_alloc)
    , pose(_alloc)
    , id(0)
    , xacc(0.0)
    , yacc(0.0)
    , zacc(0.0)
    , temperture(0.0)  {
  (void)_alloc;
    }



   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _ids_type;
  _ids_type ids;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _size_type;
  _size_type size;

   typedef  ::geometry_msgs::PoseWithCovarianceStamped_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef int8_t _id_type;
  _id_type id;

   typedef float _xacc_type;
  _xacc_type xacc;

   typedef float _yacc_type;
  _yacc_type yacc;

   typedef float _zacc_type;
  _zacc_type zacc;

   typedef float _temperture_type;
  _temperture_type temperture;





  typedef boost::shared_ptr< ::my_msg::sensor_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_msg::sensor_<ContainerAllocator> const> ConstPtr;

}; // struct sensor_

typedef ::my_msg::sensor_<std::allocator<void> > sensor;

typedef boost::shared_ptr< ::my_msg::sensor > sensorPtr;
typedef boost::shared_ptr< ::my_msg::sensor const> sensorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::my_msg::sensor_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::my_msg::sensor_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::my_msg::sensor_<ContainerAllocator1> & lhs, const ::my_msg::sensor_<ContainerAllocator2> & rhs)
{
  return lhs.ids == rhs.ids &&
    lhs.size == rhs.size &&
    lhs.pose == rhs.pose &&
    lhs.id == rhs.id &&
    lhs.xacc == rhs.xacc &&
    lhs.yacc == rhs.yacc &&
    lhs.zacc == rhs.zacc &&
    lhs.temperture == rhs.temperture;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::my_msg::sensor_<ContainerAllocator1> & lhs, const ::my_msg::sensor_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace my_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::my_msg::sensor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_msg::sensor_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_msg::sensor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_msg::sensor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_msg::sensor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_msg::sensor_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::my_msg::sensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1543a1d8184d5550cc7560e6b4c63a88";
  }

  static const char* value(const ::my_msg::sensor_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1543a1d8184d5550ULL;
  static const uint64_t static_value2 = 0xcc7560e6b4c63a88ULL;
};

template<class ContainerAllocator>
struct DataType< ::my_msg::sensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "my_msg/sensor";
  }

  static const char* value(const ::my_msg::sensor_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::my_msg::sensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Tag ID(s). If a standalone tag, this is a vector of size 1. If a tag bundle,\n"
"# this is a vector containing the IDs of each tag in the bundle.\n"
"int32[] ids\n"
"\n"
"# Tag size(s). If a standalone tag, this is a vector of size 1. If a tag bundle,\n"
"# this is a vector containing the sizes of each tag in the bundle, in the same\n"
"# order as the IDs above.\n"
"float64[] size\n"
"\n"
"# Pose in the camera frame, obtained from homography transform. If a standalone\n"
"# tag, the homography is from the four tag corners. If a tag bundle, the\n"
"# homography is from at least the four corners of one member tag and at most the\n"
"# four corners of all member tags.\n"
"geometry_msgs/PoseWithCovarianceStamped pose\n"
"\n"
"int8 id\n"
"float32 xacc\n"
"float32 yacc\n"
"float32 zacc\n"
"float32 temperture\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseWithCovarianceStamped\n"
"# This expresses an estimated pose with a reference coordinate frame and timestamp\n"
"\n"
"Header header\n"
"PoseWithCovariance pose\n"
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
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseWithCovariance\n"
"# This represents a pose in free space with uncertainty.\n"
"\n"
"Pose pose\n"
"\n"
"# Row-major representation of the 6x6 covariance matrix\n"
"# The orientation parameters use a fixed-axis representation.\n"
"# In order, the parameters are:\n"
"# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n"
"float64[36] covariance\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::my_msg::sensor_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::my_msg::sensor_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ids);
      stream.next(m.size);
      stream.next(m.pose);
      stream.next(m.id);
      stream.next(m.xacc);
      stream.next(m.yacc);
      stream.next(m.zacc);
      stream.next(m.temperture);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct sensor_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::my_msg::sensor_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::my_msg::sensor_<ContainerAllocator>& v)
  {
    s << indent << "ids[]" << std::endl;
    for (size_t i = 0; i < v.ids.size(); ++i)
    {
      s << indent << "  ids[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.ids[i]);
    }
    s << indent << "size[]" << std::endl;
    for (size_t i = 0; i < v.size.size(); ++i)
    {
      s << indent << "  size[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.size[i]);
    }
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseWithCovarianceStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "id: ";
    Printer<int8_t>::stream(s, indent + "  ", v.id);
    s << indent << "xacc: ";
    Printer<float>::stream(s, indent + "  ", v.xacc);
    s << indent << "yacc: ";
    Printer<float>::stream(s, indent + "  ", v.yacc);
    s << indent << "zacc: ";
    Printer<float>::stream(s, indent + "  ", v.zacc);
    s << indent << "temperture: ";
    Printer<float>::stream(s, indent + "  ", v.temperture);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MY_MSG_MESSAGE_SENSOR_H