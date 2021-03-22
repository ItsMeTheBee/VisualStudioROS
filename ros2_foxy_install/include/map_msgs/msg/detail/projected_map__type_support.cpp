// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from map_msgs:msg\ProjectedMap.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "map_msgs/msg/detail/projected_map__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace map_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ProjectedMap_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) map_msgs::msg::ProjectedMap(_init);
}

void ProjectedMap_fini_function(void * message_memory)
{
  auto typed_message = static_cast<map_msgs::msg::ProjectedMap *>(message_memory);
  typed_message->~ProjectedMap();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ProjectedMap_message_member_array[3] = {
  {
    "map",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav_msgs::msg::OccupancyGrid>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs::msg::ProjectedMap, map),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "min_z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs::msg::ProjectedMap, min_z),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "max_z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs::msg::ProjectedMap, max_z),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ProjectedMap_message_members = {
  "map_msgs::msg",  // message namespace
  "ProjectedMap",  // message name
  3,  // number of fields
  sizeof(map_msgs::msg::ProjectedMap),
  ProjectedMap_message_member_array,  // message members
  ProjectedMap_init_function,  // function to initialize message memory (memory has to be allocated)
  ProjectedMap_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ProjectedMap_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ProjectedMap_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace map_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<map_msgs::msg::ProjectedMap>()
{
  return &::map_msgs::msg::rosidl_typesupport_introspection_cpp::ProjectedMap_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, map_msgs, msg, ProjectedMap)() {
  return &::map_msgs::msg::rosidl_typesupport_introspection_cpp::ProjectedMap_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
