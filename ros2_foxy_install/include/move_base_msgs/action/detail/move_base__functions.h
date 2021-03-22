// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from move_base_msgs:action\MoveBase.idl
// generated code does not contain a copyright notice

#ifndef MOVE_BASE_MSGS__ACTION__DETAIL__MOVE_BASE__FUNCTIONS_H_
#define MOVE_BASE_MSGS__ACTION__DETAIL__MOVE_BASE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "move_base_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "move_base_msgs/action/detail/move_base__struct.h"

/// Initialize action/MoveBase message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * move_base_msgs__action__MoveBase_Goal
 * )) before or use
 * move_base_msgs__action__MoveBase_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
bool
move_base_msgs__action__MoveBase_Goal__init(move_base_msgs__action__MoveBase_Goal * msg);

/// Finalize action/MoveBase message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_Goal__fini(move_base_msgs__action__MoveBase_Goal * msg);

/// Create action/MoveBase message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * move_base_msgs__action__MoveBase_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
move_base_msgs__action__MoveBase_Goal *
move_base_msgs__action__MoveBase_Goal__create();

/// Destroy action/MoveBase message.
/**
 * It calls
 * move_base_msgs__action__MoveBase_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_Goal__destroy(move_base_msgs__action__MoveBase_Goal * msg);


/// Initialize array of action/MoveBase messages.
/**
 * It allocates the memory for the number of elements and calls
 * move_base_msgs__action__MoveBase_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
bool
move_base_msgs__action__MoveBase_Goal__Sequence__init(move_base_msgs__action__MoveBase_Goal__Sequence * array, size_t size);

/// Finalize array of action/MoveBase messages.
/**
 * It calls
 * move_base_msgs__action__MoveBase_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_Goal__Sequence__fini(move_base_msgs__action__MoveBase_Goal__Sequence * array);

/// Create array of action/MoveBase messages.
/**
 * It allocates the memory for the array and calls
 * move_base_msgs__action__MoveBase_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
move_base_msgs__action__MoveBase_Goal__Sequence *
move_base_msgs__action__MoveBase_Goal__Sequence__create(size_t size);

/// Destroy array of action/MoveBase messages.
/**
 * It calls
 * move_base_msgs__action__MoveBase_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_Goal__Sequence__destroy(move_base_msgs__action__MoveBase_Goal__Sequence * array);

/// Initialize action/MoveBase message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * move_base_msgs__action__MoveBase_Result
 * )) before or use
 * move_base_msgs__action__MoveBase_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
bool
move_base_msgs__action__MoveBase_Result__init(move_base_msgs__action__MoveBase_Result * msg);

/// Finalize action/MoveBase message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_Result__fini(move_base_msgs__action__MoveBase_Result * msg);

/// Create action/MoveBase message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * move_base_msgs__action__MoveBase_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
move_base_msgs__action__MoveBase_Result *
move_base_msgs__action__MoveBase_Result__create();

/// Destroy action/MoveBase message.
/**
 * It calls
 * move_base_msgs__action__MoveBase_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_Result__destroy(move_base_msgs__action__MoveBase_Result * msg);


/// Initialize array of action/MoveBase messages.
/**
 * It allocates the memory for the number of elements and calls
 * move_base_msgs__action__MoveBase_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
bool
move_base_msgs__action__MoveBase_Result__Sequence__init(move_base_msgs__action__MoveBase_Result__Sequence * array, size_t size);

/// Finalize array of action/MoveBase messages.
/**
 * It calls
 * move_base_msgs__action__MoveBase_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_Result__Sequence__fini(move_base_msgs__action__MoveBase_Result__Sequence * array);

/// Create array of action/MoveBase messages.
/**
 * It allocates the memory for the array and calls
 * move_base_msgs__action__MoveBase_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
move_base_msgs__action__MoveBase_Result__Sequence *
move_base_msgs__action__MoveBase_Result__Sequence__create(size_t size);

/// Destroy array of action/MoveBase messages.
/**
 * It calls
 * move_base_msgs__action__MoveBase_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_Result__Sequence__destroy(move_base_msgs__action__MoveBase_Result__Sequence * array);

/// Initialize action/MoveBase message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * move_base_msgs__action__MoveBase_Feedback
 * )) before or use
 * move_base_msgs__action__MoveBase_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
bool
move_base_msgs__action__MoveBase_Feedback__init(move_base_msgs__action__MoveBase_Feedback * msg);

/// Finalize action/MoveBase message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_Feedback__fini(move_base_msgs__action__MoveBase_Feedback * msg);

/// Create action/MoveBase message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * move_base_msgs__action__MoveBase_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
move_base_msgs__action__MoveBase_Feedback *
move_base_msgs__action__MoveBase_Feedback__create();

/// Destroy action/MoveBase message.
/**
 * It calls
 * move_base_msgs__action__MoveBase_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_Feedback__destroy(move_base_msgs__action__MoveBase_Feedback * msg);


/// Initialize array of action/MoveBase messages.
/**
 * It allocates the memory for the number of elements and calls
 * move_base_msgs__action__MoveBase_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
bool
move_base_msgs__action__MoveBase_Feedback__Sequence__init(move_base_msgs__action__MoveBase_Feedback__Sequence * array, size_t size);

/// Finalize array of action/MoveBase messages.
/**
 * It calls
 * move_base_msgs__action__MoveBase_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_Feedback__Sequence__fini(move_base_msgs__action__MoveBase_Feedback__Sequence * array);

/// Create array of action/MoveBase messages.
/**
 * It allocates the memory for the array and calls
 * move_base_msgs__action__MoveBase_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
move_base_msgs__action__MoveBase_Feedback__Sequence *
move_base_msgs__action__MoveBase_Feedback__Sequence__create(size_t size);

/// Destroy array of action/MoveBase messages.
/**
 * It calls
 * move_base_msgs__action__MoveBase_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_Feedback__Sequence__destroy(move_base_msgs__action__MoveBase_Feedback__Sequence * array);

/// Initialize action/MoveBase message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * move_base_msgs__action__MoveBase_SendGoal_Request
 * )) before or use
 * move_base_msgs__action__MoveBase_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
bool
move_base_msgs__action__MoveBase_SendGoal_Request__init(move_base_msgs__action__MoveBase_SendGoal_Request * msg);

/// Finalize action/MoveBase message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_SendGoal_Request__fini(move_base_msgs__action__MoveBase_SendGoal_Request * msg);

/// Create action/MoveBase message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * move_base_msgs__action__MoveBase_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
move_base_msgs__action__MoveBase_SendGoal_Request *
move_base_msgs__action__MoveBase_SendGoal_Request__create();

/// Destroy action/MoveBase message.
/**
 * It calls
 * move_base_msgs__action__MoveBase_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_SendGoal_Request__destroy(move_base_msgs__action__MoveBase_SendGoal_Request * msg);


/// Initialize array of action/MoveBase messages.
/**
 * It allocates the memory for the number of elements and calls
 * move_base_msgs__action__MoveBase_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
bool
move_base_msgs__action__MoveBase_SendGoal_Request__Sequence__init(move_base_msgs__action__MoveBase_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveBase messages.
/**
 * It calls
 * move_base_msgs__action__MoveBase_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_SendGoal_Request__Sequence__fini(move_base_msgs__action__MoveBase_SendGoal_Request__Sequence * array);

/// Create array of action/MoveBase messages.
/**
 * It allocates the memory for the array and calls
 * move_base_msgs__action__MoveBase_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
move_base_msgs__action__MoveBase_SendGoal_Request__Sequence *
move_base_msgs__action__MoveBase_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveBase messages.
/**
 * It calls
 * move_base_msgs__action__MoveBase_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_SendGoal_Request__Sequence__destroy(move_base_msgs__action__MoveBase_SendGoal_Request__Sequence * array);

/// Initialize action/MoveBase message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * move_base_msgs__action__MoveBase_SendGoal_Response
 * )) before or use
 * move_base_msgs__action__MoveBase_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
bool
move_base_msgs__action__MoveBase_SendGoal_Response__init(move_base_msgs__action__MoveBase_SendGoal_Response * msg);

/// Finalize action/MoveBase message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_SendGoal_Response__fini(move_base_msgs__action__MoveBase_SendGoal_Response * msg);

/// Create action/MoveBase message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * move_base_msgs__action__MoveBase_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
move_base_msgs__action__MoveBase_SendGoal_Response *
move_base_msgs__action__MoveBase_SendGoal_Response__create();

/// Destroy action/MoveBase message.
/**
 * It calls
 * move_base_msgs__action__MoveBase_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_SendGoal_Response__destroy(move_base_msgs__action__MoveBase_SendGoal_Response * msg);


/// Initialize array of action/MoveBase messages.
/**
 * It allocates the memory for the number of elements and calls
 * move_base_msgs__action__MoveBase_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
bool
move_base_msgs__action__MoveBase_SendGoal_Response__Sequence__init(move_base_msgs__action__MoveBase_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveBase messages.
/**
 * It calls
 * move_base_msgs__action__MoveBase_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_SendGoal_Response__Sequence__fini(move_base_msgs__action__MoveBase_SendGoal_Response__Sequence * array);

/// Create array of action/MoveBase messages.
/**
 * It allocates the memory for the array and calls
 * move_base_msgs__action__MoveBase_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
move_base_msgs__action__MoveBase_SendGoal_Response__Sequence *
move_base_msgs__action__MoveBase_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveBase messages.
/**
 * It calls
 * move_base_msgs__action__MoveBase_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_SendGoal_Response__Sequence__destroy(move_base_msgs__action__MoveBase_SendGoal_Response__Sequence * array);

/// Initialize action/MoveBase message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * move_base_msgs__action__MoveBase_GetResult_Request
 * )) before or use
 * move_base_msgs__action__MoveBase_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
bool
move_base_msgs__action__MoveBase_GetResult_Request__init(move_base_msgs__action__MoveBase_GetResult_Request * msg);

/// Finalize action/MoveBase message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_GetResult_Request__fini(move_base_msgs__action__MoveBase_GetResult_Request * msg);

/// Create action/MoveBase message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * move_base_msgs__action__MoveBase_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
move_base_msgs__action__MoveBase_GetResult_Request *
move_base_msgs__action__MoveBase_GetResult_Request__create();

/// Destroy action/MoveBase message.
/**
 * It calls
 * move_base_msgs__action__MoveBase_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_GetResult_Request__destroy(move_base_msgs__action__MoveBase_GetResult_Request * msg);


/// Initialize array of action/MoveBase messages.
/**
 * It allocates the memory for the number of elements and calls
 * move_base_msgs__action__MoveBase_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
bool
move_base_msgs__action__MoveBase_GetResult_Request__Sequence__init(move_base_msgs__action__MoveBase_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveBase messages.
/**
 * It calls
 * move_base_msgs__action__MoveBase_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_GetResult_Request__Sequence__fini(move_base_msgs__action__MoveBase_GetResult_Request__Sequence * array);

/// Create array of action/MoveBase messages.
/**
 * It allocates the memory for the array and calls
 * move_base_msgs__action__MoveBase_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
move_base_msgs__action__MoveBase_GetResult_Request__Sequence *
move_base_msgs__action__MoveBase_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveBase messages.
/**
 * It calls
 * move_base_msgs__action__MoveBase_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_GetResult_Request__Sequence__destroy(move_base_msgs__action__MoveBase_GetResult_Request__Sequence * array);

/// Initialize action/MoveBase message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * move_base_msgs__action__MoveBase_GetResult_Response
 * )) before or use
 * move_base_msgs__action__MoveBase_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
bool
move_base_msgs__action__MoveBase_GetResult_Response__init(move_base_msgs__action__MoveBase_GetResult_Response * msg);

/// Finalize action/MoveBase message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_GetResult_Response__fini(move_base_msgs__action__MoveBase_GetResult_Response * msg);

/// Create action/MoveBase message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * move_base_msgs__action__MoveBase_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
move_base_msgs__action__MoveBase_GetResult_Response *
move_base_msgs__action__MoveBase_GetResult_Response__create();

/// Destroy action/MoveBase message.
/**
 * It calls
 * move_base_msgs__action__MoveBase_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_GetResult_Response__destroy(move_base_msgs__action__MoveBase_GetResult_Response * msg);


/// Initialize array of action/MoveBase messages.
/**
 * It allocates the memory for the number of elements and calls
 * move_base_msgs__action__MoveBase_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
bool
move_base_msgs__action__MoveBase_GetResult_Response__Sequence__init(move_base_msgs__action__MoveBase_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveBase messages.
/**
 * It calls
 * move_base_msgs__action__MoveBase_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_GetResult_Response__Sequence__fini(move_base_msgs__action__MoveBase_GetResult_Response__Sequence * array);

/// Create array of action/MoveBase messages.
/**
 * It allocates the memory for the array and calls
 * move_base_msgs__action__MoveBase_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
move_base_msgs__action__MoveBase_GetResult_Response__Sequence *
move_base_msgs__action__MoveBase_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveBase messages.
/**
 * It calls
 * move_base_msgs__action__MoveBase_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_GetResult_Response__Sequence__destroy(move_base_msgs__action__MoveBase_GetResult_Response__Sequence * array);

/// Initialize action/MoveBase message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * move_base_msgs__action__MoveBase_FeedbackMessage
 * )) before or use
 * move_base_msgs__action__MoveBase_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
bool
move_base_msgs__action__MoveBase_FeedbackMessage__init(move_base_msgs__action__MoveBase_FeedbackMessage * msg);

/// Finalize action/MoveBase message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_FeedbackMessage__fini(move_base_msgs__action__MoveBase_FeedbackMessage * msg);

/// Create action/MoveBase message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * move_base_msgs__action__MoveBase_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
move_base_msgs__action__MoveBase_FeedbackMessage *
move_base_msgs__action__MoveBase_FeedbackMessage__create();

/// Destroy action/MoveBase message.
/**
 * It calls
 * move_base_msgs__action__MoveBase_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_FeedbackMessage__destroy(move_base_msgs__action__MoveBase_FeedbackMessage * msg);


/// Initialize array of action/MoveBase messages.
/**
 * It allocates the memory for the number of elements and calls
 * move_base_msgs__action__MoveBase_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
bool
move_base_msgs__action__MoveBase_FeedbackMessage__Sequence__init(move_base_msgs__action__MoveBase_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/MoveBase messages.
/**
 * It calls
 * move_base_msgs__action__MoveBase_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_FeedbackMessage__Sequence__fini(move_base_msgs__action__MoveBase_FeedbackMessage__Sequence * array);

/// Create array of action/MoveBase messages.
/**
 * It allocates the memory for the array and calls
 * move_base_msgs__action__MoveBase_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
move_base_msgs__action__MoveBase_FeedbackMessage__Sequence *
move_base_msgs__action__MoveBase_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/MoveBase messages.
/**
 * It calls
 * move_base_msgs__action__MoveBase_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_base_msgs
void
move_base_msgs__action__MoveBase_FeedbackMessage__Sequence__destroy(move_base_msgs__action__MoveBase_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MOVE_BASE_MSGS__ACTION__DETAIL__MOVE_BASE__FUNCTIONS_H_
