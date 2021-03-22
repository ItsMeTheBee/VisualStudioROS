// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from map_msgs:srv\GetPointMap.idl
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__DETAIL__GET_POINT_MAP__STRUCT_H_
#define MAP_MSGS__SRV__DETAIL__GET_POINT_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetPointMap in the package map_msgs.
typedef struct map_msgs__srv__GetPointMap_Request
{
  uint8_t structure_needs_at_least_one_member;
} map_msgs__srv__GetPointMap_Request;

// Struct for a sequence of map_msgs__srv__GetPointMap_Request.
typedef struct map_msgs__srv__GetPointMap_Request__Sequence
{
  map_msgs__srv__GetPointMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} map_msgs__srv__GetPointMap_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'map'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"

// Struct defined in srv/GetPointMap in the package map_msgs.
typedef struct map_msgs__srv__GetPointMap_Response
{
  sensor_msgs__msg__PointCloud2 map;
} map_msgs__srv__GetPointMap_Response;

// Struct for a sequence of map_msgs__srv__GetPointMap_Response.
typedef struct map_msgs__srv__GetPointMap_Response__Sequence
{
  map_msgs__srv__GetPointMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} map_msgs__srv__GetPointMap_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAP_MSGS__SRV__DETAIL__GET_POINT_MAP__STRUCT_H_
