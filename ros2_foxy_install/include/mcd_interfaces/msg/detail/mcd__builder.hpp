// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mcd_interfaces:msg\MCD.idl
// generated code does not contain a copyright notice

#ifndef MCD_INTERFACES__MSG__DETAIL__MCD__BUILDER_HPP_
#define MCD_INTERFACES__MSG__DETAIL__MCD__BUILDER_HPP_

#include "mcd_interfaces/msg/detail/mcd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mcd_interfaces
{

namespace msg
{

namespace builder
{

class Init_MCD_word_arr
{
public:
  explicit Init_MCD_word_arr(::mcd_interfaces::msg::MCD & msg)
  : msg_(msg)
  {}
  ::mcd_interfaces::msg::MCD word_arr(::mcd_interfaces::msg::MCD::_word_arr_type arg)
  {
    msg_.word_arr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mcd_interfaces::msg::MCD msg_;
};

class Init_MCD_trouble_arr
{
public:
  explicit Init_MCD_trouble_arr(::mcd_interfaces::msg::MCD & msg)
  : msg_(msg)
  {}
  Init_MCD_word_arr trouble_arr(::mcd_interfaces::msg::MCD::_trouble_arr_type arg)
  {
    msg_.trouble_arr = std::move(arg);
    return Init_MCD_word_arr(msg_);
  }

private:
  ::mcd_interfaces::msg::MCD msg_;
};

class Init_MCD_flood_arr
{
public:
  explicit Init_MCD_flood_arr(::mcd_interfaces::msg::MCD & msg)
  : msg_(msg)
  {}
  Init_MCD_trouble_arr flood_arr(::mcd_interfaces::msg::MCD::_flood_arr_type arg)
  {
    msg_.flood_arr = std::move(arg);
    return Init_MCD_trouble_arr(msg_);
  }

private:
  ::mcd_interfaces::msg::MCD msg_;
};

class Init_MCD_hint_arr
{
public:
  explicit Init_MCD_hint_arr(::mcd_interfaces::msg::MCD & msg)
  : msg_(msg)
  {}
  Init_MCD_flood_arr hint_arr(::mcd_interfaces::msg::MCD::_hint_arr_type arg)
  {
    msg_.hint_arr = std::move(arg);
    return Init_MCD_flood_arr(msg_);
  }

private:
  ::mcd_interfaces::msg::MCD msg_;
};

class Init_MCD_word
{
public:
  explicit Init_MCD_word(::mcd_interfaces::msg::MCD & msg)
  : msg_(msg)
  {}
  Init_MCD_hint_arr word(::mcd_interfaces::msg::MCD::_word_type arg)
  {
    msg_.word = std::move(arg);
    return Init_MCD_hint_arr(msg_);
  }

private:
  ::mcd_interfaces::msg::MCD msg_;
};

class Init_MCD_trouble
{
public:
  explicit Init_MCD_trouble(::mcd_interfaces::msg::MCD & msg)
  : msg_(msg)
  {}
  Init_MCD_word trouble(::mcd_interfaces::msg::MCD::_trouble_type arg)
  {
    msg_.trouble = std::move(arg);
    return Init_MCD_word(msg_);
  }

private:
  ::mcd_interfaces::msg::MCD msg_;
};

class Init_MCD_flood
{
public:
  explicit Init_MCD_flood(::mcd_interfaces::msg::MCD & msg)
  : msg_(msg)
  {}
  Init_MCD_trouble flood(::mcd_interfaces::msg::MCD::_flood_type arg)
  {
    msg_.flood = std::move(arg);
    return Init_MCD_trouble(msg_);
  }

private:
  ::mcd_interfaces::msg::MCD msg_;
};

class Init_MCD_hint
{
public:
  Init_MCD_hint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MCD_flood hint(::mcd_interfaces::msg::MCD::_hint_type arg)
  {
    msg_.hint = std::move(arg);
    return Init_MCD_flood(msg_);
  }

private:
  ::mcd_interfaces::msg::MCD msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mcd_interfaces::msg::MCD>()
{
  return mcd_interfaces::msg::builder::Init_MCD_hint();
}

}  // namespace mcd_interfaces

#endif  // MCD_INTERFACES__MSG__DETAIL__MCD__BUILDER_HPP_
