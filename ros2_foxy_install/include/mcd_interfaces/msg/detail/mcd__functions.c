// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mcd_interfaces:msg\MCD.idl
// generated code does not contain a copyright notice
#include "mcd_interfaces/msg/detail/mcd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `word`
// Member `word_arr`
#include "rosidl_runtime_c/string_functions.h"
// Member `hint_arr`
// Member `flood_arr`
// Member `trouble_arr`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mcd_interfaces__msg__MCD__init(mcd_interfaces__msg__MCD * msg)
{
  if (!msg) {
    return false;
  }
  // hint
  // flood
  // trouble
  // word
  if (!rosidl_runtime_c__String__init(&msg->word)) {
    mcd_interfaces__msg__MCD__fini(msg);
    return false;
  }
  // hint_arr
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->hint_arr, 0)) {
    mcd_interfaces__msg__MCD__fini(msg);
    return false;
  }
  // flood_arr
  if (!rosidl_runtime_c__float__Sequence__init(&msg->flood_arr, 0)) {
    mcd_interfaces__msg__MCD__fini(msg);
    return false;
  }
  // trouble_arr
  if (!rosidl_runtime_c__double__Sequence__init(&msg->trouble_arr, 0)) {
    mcd_interfaces__msg__MCD__fini(msg);
    return false;
  }
  // word_arr
  if (!rosidl_runtime_c__String__Sequence__init(&msg->word_arr, 0)) {
    mcd_interfaces__msg__MCD__fini(msg);
    return false;
  }
  return true;
}

void
mcd_interfaces__msg__MCD__fini(mcd_interfaces__msg__MCD * msg)
{
  if (!msg) {
    return;
  }
  // hint
  // flood
  // trouble
  // word
  rosidl_runtime_c__String__fini(&msg->word);
  // hint_arr
  rosidl_runtime_c__int32__Sequence__fini(&msg->hint_arr);
  // flood_arr
  rosidl_runtime_c__float__Sequence__fini(&msg->flood_arr);
  // trouble_arr
  rosidl_runtime_c__double__Sequence__fini(&msg->trouble_arr);
  // word_arr
  rosidl_runtime_c__String__Sequence__fini(&msg->word_arr);
}

mcd_interfaces__msg__MCD *
mcd_interfaces__msg__MCD__create()
{
  mcd_interfaces__msg__MCD * msg = (mcd_interfaces__msg__MCD *)malloc(sizeof(mcd_interfaces__msg__MCD));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mcd_interfaces__msg__MCD));
  bool success = mcd_interfaces__msg__MCD__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mcd_interfaces__msg__MCD__destroy(mcd_interfaces__msg__MCD * msg)
{
  if (msg) {
    mcd_interfaces__msg__MCD__fini(msg);
  }
  free(msg);
}


bool
mcd_interfaces__msg__MCD__Sequence__init(mcd_interfaces__msg__MCD__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mcd_interfaces__msg__MCD * data = NULL;
  if (size) {
    data = (mcd_interfaces__msg__MCD *)calloc(size, sizeof(mcd_interfaces__msg__MCD));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mcd_interfaces__msg__MCD__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mcd_interfaces__msg__MCD__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mcd_interfaces__msg__MCD__Sequence__fini(mcd_interfaces__msg__MCD__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mcd_interfaces__msg__MCD__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mcd_interfaces__msg__MCD__Sequence *
mcd_interfaces__msg__MCD__Sequence__create(size_t size)
{
  mcd_interfaces__msg__MCD__Sequence * array = (mcd_interfaces__msg__MCD__Sequence *)malloc(sizeof(mcd_interfaces__msg__MCD__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mcd_interfaces__msg__MCD__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mcd_interfaces__msg__MCD__Sequence__destroy(mcd_interfaces__msg__MCD__Sequence * array)
{
  if (array) {
    mcd_interfaces__msg__MCD__Sequence__fini(array);
  }
  free(array);
}
