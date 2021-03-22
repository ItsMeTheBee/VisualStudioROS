// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mcd_interfaces:msg\MCD.idl
// generated code does not contain a copyright notice

#ifndef MCD_INTERFACES__MSG__DETAIL__MCD__STRUCT_H_
#define MCD_INTERFACES__MSG__DETAIL__MCD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'word'
// Member 'word_arr'
#include "rosidl_runtime_c/string.h"
// Member 'hint_arr'
// Member 'flood_arr'
// Member 'trouble_arr'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/MCD in the package mcd_interfaces.
typedef struct mcd_interfaces__msg__MCD
{
  int32_t hint;
  float flood;
  double trouble;
  rosidl_runtime_c__String word;
  rosidl_runtime_c__int32__Sequence hint_arr;
  rosidl_runtime_c__float__Sequence flood_arr;
  rosidl_runtime_c__double__Sequence trouble_arr;
  rosidl_runtime_c__String__Sequence word_arr;
} mcd_interfaces__msg__MCD;

// Struct for a sequence of mcd_interfaces__msg__MCD.
typedef struct mcd_interfaces__msg__MCD__Sequence
{
  mcd_interfaces__msg__MCD * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mcd_interfaces__msg__MCD__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MCD_INTERFACES__MSG__DETAIL__MCD__STRUCT_H_
