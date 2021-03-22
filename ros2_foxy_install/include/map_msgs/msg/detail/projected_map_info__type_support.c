// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from map_msgs:msg\ProjectedMapInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "map_msgs/msg/detail/projected_map_info__rosidl_typesupport_introspection_c.h"
#include "map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "map_msgs/msg/detail/projected_map_info__functions.h"
#include "map_msgs/msg/detail/projected_map_info__struct.h"


// Include directives for member types
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ProjectedMapInfo__rosidl_typesupport_introspection_c__ProjectedMapInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  map_msgs__msg__ProjectedMapInfo__init(message_memory);
}

void ProjectedMapInfo__rosidl_typesupport_introspection_c__ProjectedMapInfo_fini_function(void * message_memory)
{
  map_msgs__msg__ProjectedMapInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ProjectedMapInfo__rosidl_typesupport_introspection_c__ProjectedMapInfo_message_member_array[7] = {
  {
    "frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__msg__ProjectedMapInfo, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__msg__ProjectedMapInfo, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__msg__ProjectedMapInfo, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__msg__ProjectedMapInfo, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__msg__ProjectedMapInfo, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__msg__ProjectedMapInfo, min_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__msg__ProjectedMapInfo, max_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ProjectedMapInfo__rosidl_typesupport_introspection_c__ProjectedMapInfo_message_members = {
  "map_msgs__msg",  // message namespace
  "ProjectedMapInfo",  // message name
  7,  // number of fields
  sizeof(map_msgs__msg__ProjectedMapInfo),
  ProjectedMapInfo__rosidl_typesupport_introspection_c__ProjectedMapInfo_message_member_array,  // message members
  ProjectedMapInfo__rosidl_typesupport_introspection_c__ProjectedMapInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  ProjectedMapInfo__rosidl_typesupport_introspection_c__ProjectedMapInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ProjectedMapInfo__rosidl_typesupport_introspection_c__ProjectedMapInfo_message_type_support_handle = {
  0,
  &ProjectedMapInfo__rosidl_typesupport_introspection_c__ProjectedMapInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, msg, ProjectedMapInfo)() {
  if (!ProjectedMapInfo__rosidl_typesupport_introspection_c__ProjectedMapInfo_message_type_support_handle.typesupport_identifier) {
    ProjectedMapInfo__rosidl_typesupport_introspection_c__ProjectedMapInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ProjectedMapInfo__rosidl_typesupport_introspection_c__ProjectedMapInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
