// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mcd_interfaces:msg\MCD.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mcd_interfaces/msg/detail/mcd__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mcd_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MCD_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mcd_interfaces::msg::MCD(_init);
}

void MCD_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mcd_interfaces::msg::MCD *>(message_memory);
  typed_message->~MCD();
}

size_t size_function__MCD__hint_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MCD__hint_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MCD__hint_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__MCD__hint_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MCD__flood_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MCD__flood_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__MCD__flood_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__MCD__flood_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MCD__trouble_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MCD__trouble_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MCD__trouble_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__MCD__trouble_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MCD__word_arr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MCD__word_arr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__MCD__word_arr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__MCD__word_arr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MCD_message_member_array[8] = {
  {
    "hint",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mcd_interfaces::msg::MCD, hint),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "flood",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mcd_interfaces::msg::MCD, flood),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "trouble",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mcd_interfaces::msg::MCD, trouble),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "word",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mcd_interfaces::msg::MCD, word),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "hint_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mcd_interfaces::msg::MCD, hint_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__MCD__hint_arr,  // size() function pointer
    get_const_function__MCD__hint_arr,  // get_const(index) function pointer
    get_function__MCD__hint_arr,  // get(index) function pointer
    resize_function__MCD__hint_arr  // resize(index) function pointer
  },
  {
    "flood_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mcd_interfaces::msg::MCD, flood_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__MCD__flood_arr,  // size() function pointer
    get_const_function__MCD__flood_arr,  // get_const(index) function pointer
    get_function__MCD__flood_arr,  // get(index) function pointer
    resize_function__MCD__flood_arr  // resize(index) function pointer
  },
  {
    "trouble_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mcd_interfaces::msg::MCD, trouble_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__MCD__trouble_arr,  // size() function pointer
    get_const_function__MCD__trouble_arr,  // get_const(index) function pointer
    get_function__MCD__trouble_arr,  // get(index) function pointer
    resize_function__MCD__trouble_arr  // resize(index) function pointer
  },
  {
    "word_arr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mcd_interfaces::msg::MCD, word_arr),  // bytes offset in struct
    nullptr,  // default value
    size_function__MCD__word_arr,  // size() function pointer
    get_const_function__MCD__word_arr,  // get_const(index) function pointer
    get_function__MCD__word_arr,  // get(index) function pointer
    resize_function__MCD__word_arr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MCD_message_members = {
  "mcd_interfaces::msg",  // message namespace
  "MCD",  // message name
  8,  // number of fields
  sizeof(mcd_interfaces::msg::MCD),
  MCD_message_member_array,  // message members
  MCD_init_function,  // function to initialize message memory (memory has to be allocated)
  MCD_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MCD_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MCD_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mcd_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mcd_interfaces::msg::MCD>()
{
  return &::mcd_interfaces::msg::rosidl_typesupport_introspection_cpp::MCD_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mcd_interfaces, msg, MCD)() {
  return &::mcd_interfaces::msg::rosidl_typesupport_introspection_cpp::MCD_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
