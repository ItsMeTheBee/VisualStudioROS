// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pendulum_msgs:msg\JointCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pendulum_msgs/msg/detail/joint_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pendulum_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void JointCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pendulum_msgs::msg::JointCommand(_init);
}

void JointCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pendulum_msgs::msg::JointCommand *>(message_memory);
  typed_message->~JointCommand();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointCommand_message_member_array[1] = {
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pendulum_msgs::msg::JointCommand, position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointCommand_message_members = {
  "pendulum_msgs::msg",  // message namespace
  "JointCommand",  // message name
  1,  // number of fields
  sizeof(pendulum_msgs::msg::JointCommand),
  JointCommand_message_member_array,  // message members
  JointCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  JointCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointCommand_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pendulum_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pendulum_msgs::msg::JointCommand>()
{
  return &::pendulum_msgs::msg::rosidl_typesupport_introspection_cpp::JointCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pendulum_msgs, msg, JointCommand)() {
  return &::pendulum_msgs::msg::rosidl_typesupport_introspection_cpp::JointCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
