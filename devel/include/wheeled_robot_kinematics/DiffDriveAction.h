// Generated by gencpp from file wheeled_robot_kinematics/DiffDriveAction.msg
// DO NOT EDIT!


#ifndef WHEELED_ROBOT_KINEMATICS_MESSAGE_DIFFDRIVEACTION_H
#define WHEELED_ROBOT_KINEMATICS_MESSAGE_DIFFDRIVEACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace wheeled_robot_kinematics
{
template <class ContainerAllocator>
struct DiffDriveAction_
{
  typedef DiffDriveAction_<ContainerAllocator> Type;

  DiffDriveAction_()
    : left_velocity(0.0)
    , right_velocity(0.0)
    , time(0.0)  {
    }
  DiffDriveAction_(const ContainerAllocator& _alloc)
    : left_velocity(0.0)
    , right_velocity(0.0)
    , time(0.0)  {
  (void)_alloc;
    }



   typedef double _left_velocity_type;
  _left_velocity_type left_velocity;

   typedef double _right_velocity_type;
  _right_velocity_type right_velocity;

   typedef double _time_type;
  _time_type time;




  typedef boost::shared_ptr< ::wheeled_robot_kinematics::DiffDriveAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wheeled_robot_kinematics::DiffDriveAction_<ContainerAllocator> const> ConstPtr;

}; // struct DiffDriveAction_

typedef ::wheeled_robot_kinematics::DiffDriveAction_<std::allocator<void> > DiffDriveAction;

typedef boost::shared_ptr< ::wheeled_robot_kinematics::DiffDriveAction > DiffDriveActionPtr;
typedef boost::shared_ptr< ::wheeled_robot_kinematics::DiffDriveAction const> DiffDriveActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::wheeled_robot_kinematics::DiffDriveAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::wheeled_robot_kinematics::DiffDriveAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace wheeled_robot_kinematics

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'wheeled_robot_kinematics': ['/home/anuragb/ros_prac/catkin_ws_p10/src/wheeled_robot_kinematics/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::wheeled_robot_kinematics::DiffDriveAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::wheeled_robot_kinematics::DiffDriveAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wheeled_robot_kinematics::DiffDriveAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wheeled_robot_kinematics::DiffDriveAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wheeled_robot_kinematics::DiffDriveAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wheeled_robot_kinematics::DiffDriveAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::wheeled_robot_kinematics::DiffDriveAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c9bd451b3971ddfe4940daf396a1d25a";
  }

  static const char* value(const ::wheeled_robot_kinematics::DiffDriveAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc9bd451b3971ddfeULL;
  static const uint64_t static_value2 = 0x4940daf396a1d25aULL;
};

template<class ContainerAllocator>
struct DataType< ::wheeled_robot_kinematics::DiffDriveAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "wheeled_robot_kinematics/DiffDriveAction";
  }

  static const char* value(const ::wheeled_robot_kinematics::DiffDriveAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::wheeled_robot_kinematics::DiffDriveAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 left_velocity\n\
float64 right_velocity\n\
float64 time\n\
\n\
";
  }

  static const char* value(const ::wheeled_robot_kinematics::DiffDriveAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::wheeled_robot_kinematics::DiffDriveAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.left_velocity);
      stream.next(m.right_velocity);
      stream.next(m.time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DiffDriveAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::wheeled_robot_kinematics::DiffDriveAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::wheeled_robot_kinematics::DiffDriveAction_<ContainerAllocator>& v)
  {
    s << indent << "left_velocity: ";
    Printer<double>::stream(s, indent + "  ", v.left_velocity);
    s << indent << "right_velocity: ";
    Printer<double>::stream(s, indent + "  ", v.right_velocity);
    s << indent << "time: ";
    Printer<double>::stream(s, indent + "  ", v.time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WHEELED_ROBOT_KINEMATICS_MESSAGE_DIFFDRIVEACTION_H
