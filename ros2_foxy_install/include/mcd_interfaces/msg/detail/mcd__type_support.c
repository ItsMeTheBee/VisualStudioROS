// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mcd_interfaces:msg\MCD.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mcd_interfaces/msg/detail/mcd__rosidl_typesupport_introspection_c.h"
#include "mcd_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mcd_interfaces/msg/detail/mcd__functions.h"
#include "mcd_interfaces/msg/detail/mcd__struct.h"


// Include directives for member types
// Member `word`
// Member `word_arr`
#include "rosidl_runtime_c/string_functions.h"
// Member `hint_arr`
// Member `flood_arr`
// Member `trouble_arr`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MCD__rosidl_typesupport_introspection_c__MCD_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mcd_interfaces__msg__MCD__init(message_memory);
}

void MCD__rosidl_typesupport_introspection_c__MCD_fini_function(void * message_memory)
{
  mcd_interfaces__msg__MCD__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MCD__rosidl_typesupport_introspection_c__MCD_message_member_array[8] = {
  {
    "hint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mcd_interfaces__msg__MCD, hint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flood",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mcd_interfaces__msg__MCD, flood),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trouble",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mcd_interfaces__msg__MCD, trouble),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "word",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mcd_interfaces__msg__MCD, word),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hint_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mcd_interfaces__msg__MCD, hint_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flood_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mcd_interfaces__msg__MCD, flood_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trouble_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mcd_interfaces__msg__MCD, trouble_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "word_arr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mcd_interfaces__msg__MCD, word_arr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MCD__rosidl_typesupport_introspection_c__MCD_message_members = {
  "mcd_interfaces__msg",  // message namespace
  "MCD",  // message name
  8,  // number of fields
  sizeof(mcd_interfaces__msg__MCD),
  MCD__rosidl_typesupport_introspection_c__MCD_message_member_array,  // message members
  MCD__rosidl_typesupport_introspection_c__MCD_init_function,  // function to initialize message memory (memory has to be allocated)
  MCD__rosidl_typesupport_introspection_c__MCD_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MCD__rosidl_typesupport_introspection_c__MCD_message_type_support_handle = {
  0,
  &MCD__rosidl_typesupport_introspection_c__MCD_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mcd_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mcd_interfaces, msg, MCD)() {
  if (!MCD__rosidl_typesupport_introspection_c__MCD_message_type_support_handle.typesupport_identifier) {
    MCD__rosidl_typesupport_introspection_c__MCD_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MCD__rosidl_typesupport_introspection_c__MCD_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
