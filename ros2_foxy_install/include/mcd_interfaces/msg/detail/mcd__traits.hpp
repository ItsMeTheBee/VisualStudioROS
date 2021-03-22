// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mcd_interfaces:msg\MCD.idl
// generated code does not contain a copyright notice

#ifndef MCD_INTERFACES__MSG__DETAIL__MCD__TRAITS_HPP_
#define MCD_INTERFACES__MSG__DETAIL__MCD__TRAITS_HPP_

#include "mcd_interfaces/msg/detail/mcd__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mcd_interfaces::msg::MCD>()
{
  return "mcd_interfaces::msg::MCD";
}

template<>
inline const char * name<mcd_interfaces::msg::MCD>()
{
  return "mcd_interfaces/msg/MCD";
}

template<>
struct has_fixed_size<mcd_interfaces::msg::MCD>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mcd_interfaces::msg::MCD>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mcd_interfaces::msg::MCD>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MCD_INTERFACES__MSG__DETAIL__MCD__TRAITS_HPP_
