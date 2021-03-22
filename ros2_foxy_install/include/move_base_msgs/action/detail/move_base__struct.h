// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from move_base_msgs:action\MoveBase.idl
// generated code does not contain a copyright notice

#ifndef MOVE_BASE_MSGS__ACTION__DETAIL__MOVE_BASE__STRUCT_H_
#define MOVE_BASE_MSGS__ACTION__DETAIL__MOVE_BASE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

// Struct defined in action/MoveBase in the package move_base_msgs.
typedef struct move_base_msgs__action__MoveBase_Goal
{
  geometry_msgs__msg__PoseStamped target_pose;
} move_base_msgs__action__MoveBase_Goal;

// Struct for a sequence of move_base_msgs__action__MoveBase_Goal.
typedef struct move_base_msgs__action__MoveBase_Goal__Sequence
{
  move_base_msgs__action__MoveBase_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_base_msgs__action__MoveBase_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/MoveBase in the package move_base_msgs.
typedef struct move_base_msgs__action__MoveBase_Result
{
  uint8_t structure_needs_at_least_one_member;
} move_base_msgs__action__MoveBase_Result;

// Struct for a sequence of move_base_msgs__action__MoveBase_Result.
typedef struct move_base_msgs__action__MoveBase_Result__Sequence
{
  move_base_msgs__action__MoveBase_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_base_msgs__action__MoveBase_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'base_position'
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__struct.h"

// Struct defined in action/MoveBase in the package move_base_msgs.
typedef struct move_base_msgs__action__MoveBase_Feedback
{
  geometry_msgs__msg__PoseStamped base_position;
} move_base_msgs__action__MoveBase_Feedback;

// Struct for a sequence of move_base_msgs__action__MoveBase_Feedback.
typedef struct move_base_msgs__action__MoveBase_Feedback__Sequence
{
  move_base_msgs__action__MoveBase_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_base_msgs__action__MoveBase_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "move_base_msgs/action/detail/move_base__struct.h"

// Struct defined in action/MoveBase in the package move_base_msgs.
typedef struct move_base_msgs__action__MoveBase_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  move_base_msgs__action__MoveBase_Goal goal;
} move_base_msgs__action__MoveBase_SendGoal_Request;

// Struct for a sequence of move_base_msgs__action__MoveBase_SendGoal_Request.
typedef struct move_base_msgs__action__MoveBase_SendGoal_Request__Sequence
{
  move_base_msgs__action__MoveBase_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_base_msgs__action__MoveBase_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/MoveBase in the package move_base_msgs.
typedef struct move_base_msgs__action__MoveBase_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} move_base_msgs__action__MoveBase_SendGoal_Response;

// Struct for a sequence of move_base_msgs__action__MoveBase_SendGoal_Response.
typedef struct move_base_msgs__action__MoveBase_SendGoal_Response__Sequence
{
  move_base_msgs__action__MoveBase_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_base_msgs__action__MoveBase_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/MoveBase in the package move_base_msgs.
typedef struct move_base_msgs__action__MoveBase_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} move_base_msgs__action__MoveBase_GetResult_Request;

// Struct for a sequence of move_base_msgs__action__MoveBase_GetResult_Request.
typedef struct move_base_msgs__action__MoveBase_GetResult_Request__Sequence
{
  move_base_msgs__action__MoveBase_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_base_msgs__action__MoveBase_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "move_base_msgs/action/detail/move_base__struct.h"

// Struct defined in action/MoveBase in the package move_base_msgs.
typedef struct move_base_msgs__action__MoveBase_GetResult_Response
{
  int8_t status;
  move_base_msgs__action__MoveBase_Result result;
} move_base_msgs__action__MoveBase_GetResult_Response;

// Struct for a sequence of move_base_msgs__action__MoveBase_GetResult_Response.
typedef struct move_base_msgs__action__MoveBase_GetResult_Response__Sequence
{
  move_base_msgs__action__MoveBase_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_base_msgs__action__MoveBase_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "move_base_msgs/action/detail/move_base__struct.h"

// Struct defined in action/MoveBase in the package move_base_msgs.
typedef struct move_base_msgs__action__MoveBase_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  move_base_msgs__action__MoveBase_Feedback feedback;
} move_base_msgs__action__MoveBase_FeedbackMessage;

// Struct for a sequence of move_base_msgs__action__MoveBase_FeedbackMessage.
typedef struct move_base_msgs__action__MoveBase_FeedbackMessage__Sequence
{
  move_base_msgs__action__MoveBase_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_base_msgs__action__MoveBase_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVE_BASE_MSGS__ACTION__DETAIL__MOVE_BASE__STRUCT_H_
