// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from map_msgs:srv\GetPointMap.idl
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__DETAIL__GET_POINT_MAP__FUNCTIONS_H_
#define MAP_MSGS__SRV__DETAIL__GET_POINT_MAP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "map_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "map_msgs/srv/detail/get_point_map__struct.h"

/// Initialize srv/GetPointMap message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * map_msgs__srv__GetPointMap_Request
 * )) before or use
 * map_msgs__srv__GetPointMap_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_map_msgs
bool
map_msgs__srv__GetPointMap_Request__init(map_msgs__srv__GetPointMap_Request * msg);

/// Finalize srv/GetPointMap message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_map_msgs
void
map_msgs__srv__GetPointMap_Request__fini(map_msgs__srv__GetPointMap_Request * msg);

/// Create srv/GetPointMap message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * map_msgs__srv__GetPointMap_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_map_msgs
map_msgs__srv__GetPointMap_Request *
map_msgs__srv__GetPointMap_Request__create();

/// Destroy srv/GetPointMap message.
/**
 * It calls
 * map_msgs__srv__GetPointMap_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_map_msgs
void
map_msgs__srv__GetPointMap_Request__destroy(map_msgs__srv__GetPointMap_Request * msg);


/// Initialize array of srv/GetPointMap messages.
/**
 * It allocates the memory for the number of elements and calls
 * map_msgs__srv__GetPointMap_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_map_msgs
bool
map_msgs__srv__GetPointMap_Request__Sequence__init(map_msgs__srv__GetPointMap_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetPointMap messages.
/**
 * It calls
 * map_msgs__srv__GetPointMap_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_map_msgs
void
map_msgs__srv__GetPointMap_Request__Sequence__fini(map_msgs__srv__GetPointMap_Request__Sequence * array);

/// Create array of srv/GetPointMap messages.
/**
 * It allocates the memory for the array and calls
 * map_msgs__srv__GetPointMap_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_map_msgs
map_msgs__srv__GetPointMap_Request__Sequence *
map_msgs__srv__GetPointMap_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetPointMap messages.
/**
 * It calls
 * map_msgs__srv__GetPointMap_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_map_msgs
void
map_msgs__srv__GetPointMap_Request__Sequence__destroy(map_msgs__srv__GetPointMap_Request__Sequence * array);

/// Initialize srv/GetPointMap message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * map_msgs__srv__GetPointMap_Response
 * )) before or use
 * map_msgs__srv__GetPointMap_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_map_msgs
bool
map_msgs__srv__GetPointMap_Response__init(map_msgs__srv__GetPointMap_Response * msg);

/// Finalize srv/GetPointMap message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_map_msgs
void
map_msgs__srv__GetPointMap_Response__fini(map_msgs__srv__GetPointMap_Response * msg);

/// Create srv/GetPointMap message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * map_msgs__srv__GetPointMap_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_map_msgs
map_msgs__srv__GetPointMap_Response *
map_msgs__srv__GetPointMap_Response__create();

/// Destroy srv/GetPointMap message.
/**
 * It calls
 * map_msgs__srv__GetPointMap_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_map_msgs
void
map_msgs__srv__GetPointMap_Response__destroy(map_msgs__srv__GetPointMap_Response * msg);


/// Initialize array of srv/GetPointMap messages.
/**
 * It allocates the memory for the number of elements and calls
 * map_msgs__srv__GetPointMap_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_map_msgs
bool
map_msgs__srv__GetPointMap_Response__Sequence__init(map_msgs__srv__GetPointMap_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetPointMap messages.
/**
 * It calls
 * map_msgs__srv__GetPointMap_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_map_msgs
void
map_msgs__srv__GetPointMap_Response__Sequence__fini(map_msgs__srv__GetPointMap_Response__Sequence * array);

/// Create array of srv/GetPointMap messages.
/**
 * It allocates the memory for the array and calls
 * map_msgs__srv__GetPointMap_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_map_msgs
map_msgs__srv__GetPointMap_Response__Sequence *
map_msgs__srv__GetPointMap_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetPointMap messages.
/**
 * It calls
 * map_msgs__srv__GetPointMap_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_map_msgs
void
map_msgs__srv__GetPointMap_Response__Sequence__destroy(map_msgs__srv__GetPointMap_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MAP_MSGS__SRV__DETAIL__GET_POINT_MAP__FUNCTIONS_H_
