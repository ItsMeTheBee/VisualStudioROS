// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from move_base_msgs:action\MoveBase.idl
// generated code does not contain a copyright notice
#include "move_base_msgs/action/detail/move_base__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `target_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
move_base_msgs__action__MoveBase_Goal__init(move_base_msgs__action__MoveBase_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->target_pose)) {
    move_base_msgs__action__MoveBase_Goal__fini(msg);
    return false;
  }
  return true;
}

void
move_base_msgs__action__MoveBase_Goal__fini(move_base_msgs__action__MoveBase_Goal * msg)
{
  if (!msg) {
    return;
  }
  // target_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->target_pose);
}

move_base_msgs__action__MoveBase_Goal *
move_base_msgs__action__MoveBase_Goal__create()
{
  move_base_msgs__action__MoveBase_Goal * msg = (move_base_msgs__action__MoveBase_Goal *)malloc(sizeof(move_base_msgs__action__MoveBase_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(move_base_msgs__action__MoveBase_Goal));
  bool success = move_base_msgs__action__MoveBase_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
move_base_msgs__action__MoveBase_Goal__destroy(move_base_msgs__action__MoveBase_Goal * msg)
{
  if (msg) {
    move_base_msgs__action__MoveBase_Goal__fini(msg);
  }
  free(msg);
}


bool
move_base_msgs__action__MoveBase_Goal__Sequence__init(move_base_msgs__action__MoveBase_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  move_base_msgs__action__MoveBase_Goal * data = NULL;
  if (size) {
    data = (move_base_msgs__action__MoveBase_Goal *)calloc(size, sizeof(move_base_msgs__action__MoveBase_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = move_base_msgs__action__MoveBase_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        move_base_msgs__action__MoveBase_Goal__fini(&data[i - 1]);
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
move_base_msgs__action__MoveBase_Goal__Sequence__fini(move_base_msgs__action__MoveBase_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      move_base_msgs__action__MoveBase_Goal__fini(&array->data[i]);
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

move_base_msgs__action__MoveBase_Goal__Sequence *
move_base_msgs__action__MoveBase_Goal__Sequence__create(size_t size)
{
  move_base_msgs__action__MoveBase_Goal__Sequence * array = (move_base_msgs__action__MoveBase_Goal__Sequence *)malloc(sizeof(move_base_msgs__action__MoveBase_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = move_base_msgs__action__MoveBase_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
move_base_msgs__action__MoveBase_Goal__Sequence__destroy(move_base_msgs__action__MoveBase_Goal__Sequence * array)
{
  if (array) {
    move_base_msgs__action__MoveBase_Goal__Sequence__fini(array);
  }
  free(array);
}


bool
move_base_msgs__action__MoveBase_Result__init(move_base_msgs__action__MoveBase_Result * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
move_base_msgs__action__MoveBase_Result__fini(move_base_msgs__action__MoveBase_Result * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

move_base_msgs__action__MoveBase_Result *
move_base_msgs__action__MoveBase_Result__create()
{
  move_base_msgs__action__MoveBase_Result * msg = (move_base_msgs__action__MoveBase_Result *)malloc(sizeof(move_base_msgs__action__MoveBase_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(move_base_msgs__action__MoveBase_Result));
  bool success = move_base_msgs__action__MoveBase_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
move_base_msgs__action__MoveBase_Result__destroy(move_base_msgs__action__MoveBase_Result * msg)
{
  if (msg) {
    move_base_msgs__action__MoveBase_Result__fini(msg);
  }
  free(msg);
}


bool
move_base_msgs__action__MoveBase_Result__Sequence__init(move_base_msgs__action__MoveBase_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  move_base_msgs__action__MoveBase_Result * data = NULL;
  if (size) {
    data = (move_base_msgs__action__MoveBase_Result *)calloc(size, sizeof(move_base_msgs__action__MoveBase_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = move_base_msgs__action__MoveBase_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        move_base_msgs__action__MoveBase_Result__fini(&data[i - 1]);
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
move_base_msgs__action__MoveBase_Result__Sequence__fini(move_base_msgs__action__MoveBase_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      move_base_msgs__action__MoveBase_Result__fini(&array->data[i]);
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

move_base_msgs__action__MoveBase_Result__Sequence *
move_base_msgs__action__MoveBase_Result__Sequence__create(size_t size)
{
  move_base_msgs__action__MoveBase_Result__Sequence * array = (move_base_msgs__action__MoveBase_Result__Sequence *)malloc(sizeof(move_base_msgs__action__MoveBase_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = move_base_msgs__action__MoveBase_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
move_base_msgs__action__MoveBase_Result__Sequence__destroy(move_base_msgs__action__MoveBase_Result__Sequence * array)
{
  if (array) {
    move_base_msgs__action__MoveBase_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `base_position`
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
move_base_msgs__action__MoveBase_Feedback__init(move_base_msgs__action__MoveBase_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // base_position
  if (!geometry_msgs__msg__PoseStamped__init(&msg->base_position)) {
    move_base_msgs__action__MoveBase_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
move_base_msgs__action__MoveBase_Feedback__fini(move_base_msgs__action__MoveBase_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // base_position
  geometry_msgs__msg__PoseStamped__fini(&msg->base_position);
}

move_base_msgs__action__MoveBase_Feedback *
move_base_msgs__action__MoveBase_Feedback__create()
{
  move_base_msgs__action__MoveBase_Feedback * msg = (move_base_msgs__action__MoveBase_Feedback *)malloc(sizeof(move_base_msgs__action__MoveBase_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(move_base_msgs__action__MoveBase_Feedback));
  bool success = move_base_msgs__action__MoveBase_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
move_base_msgs__action__MoveBase_Feedback__destroy(move_base_msgs__action__MoveBase_Feedback * msg)
{
  if (msg) {
    move_base_msgs__action__MoveBase_Feedback__fini(msg);
  }
  free(msg);
}


bool
move_base_msgs__action__MoveBase_Feedback__Sequence__init(move_base_msgs__action__MoveBase_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  move_base_msgs__action__MoveBase_Feedback * data = NULL;
  if (size) {
    data = (move_base_msgs__action__MoveBase_Feedback *)calloc(size, sizeof(move_base_msgs__action__MoveBase_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = move_base_msgs__action__MoveBase_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        move_base_msgs__action__MoveBase_Feedback__fini(&data[i - 1]);
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
move_base_msgs__action__MoveBase_Feedback__Sequence__fini(move_base_msgs__action__MoveBase_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      move_base_msgs__action__MoveBase_Feedback__fini(&array->data[i]);
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

move_base_msgs__action__MoveBase_Feedback__Sequence *
move_base_msgs__action__MoveBase_Feedback__Sequence__create(size_t size)
{
  move_base_msgs__action__MoveBase_Feedback__Sequence * array = (move_base_msgs__action__MoveBase_Feedback__Sequence *)malloc(sizeof(move_base_msgs__action__MoveBase_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = move_base_msgs__action__MoveBase_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
move_base_msgs__action__MoveBase_Feedback__Sequence__destroy(move_base_msgs__action__MoveBase_Feedback__Sequence * array)
{
  if (array) {
    move_base_msgs__action__MoveBase_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "move_base_msgs/action/detail/move_base__functions.h"

bool
move_base_msgs__action__MoveBase_SendGoal_Request__init(move_base_msgs__action__MoveBase_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    move_base_msgs__action__MoveBase_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!move_base_msgs__action__MoveBase_Goal__init(&msg->goal)) {
    move_base_msgs__action__MoveBase_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
move_base_msgs__action__MoveBase_SendGoal_Request__fini(move_base_msgs__action__MoveBase_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  move_base_msgs__action__MoveBase_Goal__fini(&msg->goal);
}

move_base_msgs__action__MoveBase_SendGoal_Request *
move_base_msgs__action__MoveBase_SendGoal_Request__create()
{
  move_base_msgs__action__MoveBase_SendGoal_Request * msg = (move_base_msgs__action__MoveBase_SendGoal_Request *)malloc(sizeof(move_base_msgs__action__MoveBase_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(move_base_msgs__action__MoveBase_SendGoal_Request));
  bool success = move_base_msgs__action__MoveBase_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
move_base_msgs__action__MoveBase_SendGoal_Request__destroy(move_base_msgs__action__MoveBase_SendGoal_Request * msg)
{
  if (msg) {
    move_base_msgs__action__MoveBase_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
move_base_msgs__action__MoveBase_SendGoal_Request__Sequence__init(move_base_msgs__action__MoveBase_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  move_base_msgs__action__MoveBase_SendGoal_Request * data = NULL;
  if (size) {
    data = (move_base_msgs__action__MoveBase_SendGoal_Request *)calloc(size, sizeof(move_base_msgs__action__MoveBase_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = move_base_msgs__action__MoveBase_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        move_base_msgs__action__MoveBase_SendGoal_Request__fini(&data[i - 1]);
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
move_base_msgs__action__MoveBase_SendGoal_Request__Sequence__fini(move_base_msgs__action__MoveBase_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      move_base_msgs__action__MoveBase_SendGoal_Request__fini(&array->data[i]);
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

move_base_msgs__action__MoveBase_SendGoal_Request__Sequence *
move_base_msgs__action__MoveBase_SendGoal_Request__Sequence__create(size_t size)
{
  move_base_msgs__action__MoveBase_SendGoal_Request__Sequence * array = (move_base_msgs__action__MoveBase_SendGoal_Request__Sequence *)malloc(sizeof(move_base_msgs__action__MoveBase_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = move_base_msgs__action__MoveBase_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
move_base_msgs__action__MoveBase_SendGoal_Request__Sequence__destroy(move_base_msgs__action__MoveBase_SendGoal_Request__Sequence * array)
{
  if (array) {
    move_base_msgs__action__MoveBase_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
move_base_msgs__action__MoveBase_SendGoal_Response__init(move_base_msgs__action__MoveBase_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    move_base_msgs__action__MoveBase_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
move_base_msgs__action__MoveBase_SendGoal_Response__fini(move_base_msgs__action__MoveBase_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

move_base_msgs__action__MoveBase_SendGoal_Response *
move_base_msgs__action__MoveBase_SendGoal_Response__create()
{
  move_base_msgs__action__MoveBase_SendGoal_Response * msg = (move_base_msgs__action__MoveBase_SendGoal_Response *)malloc(sizeof(move_base_msgs__action__MoveBase_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(move_base_msgs__action__MoveBase_SendGoal_Response));
  bool success = move_base_msgs__action__MoveBase_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
move_base_msgs__action__MoveBase_SendGoal_Response__destroy(move_base_msgs__action__MoveBase_SendGoal_Response * msg)
{
  if (msg) {
    move_base_msgs__action__MoveBase_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
move_base_msgs__action__MoveBase_SendGoal_Response__Sequence__init(move_base_msgs__action__MoveBase_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  move_base_msgs__action__MoveBase_SendGoal_Response * data = NULL;
  if (size) {
    data = (move_base_msgs__action__MoveBase_SendGoal_Response *)calloc(size, sizeof(move_base_msgs__action__MoveBase_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = move_base_msgs__action__MoveBase_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        move_base_msgs__action__MoveBase_SendGoal_Response__fini(&data[i - 1]);
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
move_base_msgs__action__MoveBase_SendGoal_Response__Sequence__fini(move_base_msgs__action__MoveBase_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      move_base_msgs__action__MoveBase_SendGoal_Response__fini(&array->data[i]);
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

move_base_msgs__action__MoveBase_SendGoal_Response__Sequence *
move_base_msgs__action__MoveBase_SendGoal_Response__Sequence__create(size_t size)
{
  move_base_msgs__action__MoveBase_SendGoal_Response__Sequence * array = (move_base_msgs__action__MoveBase_SendGoal_Response__Sequence *)malloc(sizeof(move_base_msgs__action__MoveBase_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = move_base_msgs__action__MoveBase_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
move_base_msgs__action__MoveBase_SendGoal_Response__Sequence__destroy(move_base_msgs__action__MoveBase_SendGoal_Response__Sequence * array)
{
  if (array) {
    move_base_msgs__action__MoveBase_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
move_base_msgs__action__MoveBase_GetResult_Request__init(move_base_msgs__action__MoveBase_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    move_base_msgs__action__MoveBase_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
move_base_msgs__action__MoveBase_GetResult_Request__fini(move_base_msgs__action__MoveBase_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

move_base_msgs__action__MoveBase_GetResult_Request *
move_base_msgs__action__MoveBase_GetResult_Request__create()
{
  move_base_msgs__action__MoveBase_GetResult_Request * msg = (move_base_msgs__action__MoveBase_GetResult_Request *)malloc(sizeof(move_base_msgs__action__MoveBase_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(move_base_msgs__action__MoveBase_GetResult_Request));
  bool success = move_base_msgs__action__MoveBase_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
move_base_msgs__action__MoveBase_GetResult_Request__destroy(move_base_msgs__action__MoveBase_GetResult_Request * msg)
{
  if (msg) {
    move_base_msgs__action__MoveBase_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
move_base_msgs__action__MoveBase_GetResult_Request__Sequence__init(move_base_msgs__action__MoveBase_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  move_base_msgs__action__MoveBase_GetResult_Request * data = NULL;
  if (size) {
    data = (move_base_msgs__action__MoveBase_GetResult_Request *)calloc(size, sizeof(move_base_msgs__action__MoveBase_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = move_base_msgs__action__MoveBase_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        move_base_msgs__action__MoveBase_GetResult_Request__fini(&data[i - 1]);
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
move_base_msgs__action__MoveBase_GetResult_Request__Sequence__fini(move_base_msgs__action__MoveBase_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      move_base_msgs__action__MoveBase_GetResult_Request__fini(&array->data[i]);
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

move_base_msgs__action__MoveBase_GetResult_Request__Sequence *
move_base_msgs__action__MoveBase_GetResult_Request__Sequence__create(size_t size)
{
  move_base_msgs__action__MoveBase_GetResult_Request__Sequence * array = (move_base_msgs__action__MoveBase_GetResult_Request__Sequence *)malloc(sizeof(move_base_msgs__action__MoveBase_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = move_base_msgs__action__MoveBase_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
move_base_msgs__action__MoveBase_GetResult_Request__Sequence__destroy(move_base_msgs__action__MoveBase_GetResult_Request__Sequence * array)
{
  if (array) {
    move_base_msgs__action__MoveBase_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "move_base_msgs/action/detail/move_base__functions.h"

bool
move_base_msgs__action__MoveBase_GetResult_Response__init(move_base_msgs__action__MoveBase_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!move_base_msgs__action__MoveBase_Result__init(&msg->result)) {
    move_base_msgs__action__MoveBase_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
move_base_msgs__action__MoveBase_GetResult_Response__fini(move_base_msgs__action__MoveBase_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  move_base_msgs__action__MoveBase_Result__fini(&msg->result);
}

move_base_msgs__action__MoveBase_GetResult_Response *
move_base_msgs__action__MoveBase_GetResult_Response__create()
{
  move_base_msgs__action__MoveBase_GetResult_Response * msg = (move_base_msgs__action__MoveBase_GetResult_Response *)malloc(sizeof(move_base_msgs__action__MoveBase_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(move_base_msgs__action__MoveBase_GetResult_Response));
  bool success = move_base_msgs__action__MoveBase_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
move_base_msgs__action__MoveBase_GetResult_Response__destroy(move_base_msgs__action__MoveBase_GetResult_Response * msg)
{
  if (msg) {
    move_base_msgs__action__MoveBase_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
move_base_msgs__action__MoveBase_GetResult_Response__Sequence__init(move_base_msgs__action__MoveBase_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  move_base_msgs__action__MoveBase_GetResult_Response * data = NULL;
  if (size) {
    data = (move_base_msgs__action__MoveBase_GetResult_Response *)calloc(size, sizeof(move_base_msgs__action__MoveBase_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = move_base_msgs__action__MoveBase_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        move_base_msgs__action__MoveBase_GetResult_Response__fini(&data[i - 1]);
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
move_base_msgs__action__MoveBase_GetResult_Response__Sequence__fini(move_base_msgs__action__MoveBase_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      move_base_msgs__action__MoveBase_GetResult_Response__fini(&array->data[i]);
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

move_base_msgs__action__MoveBase_GetResult_Response__Sequence *
move_base_msgs__action__MoveBase_GetResult_Response__Sequence__create(size_t size)
{
  move_base_msgs__action__MoveBase_GetResult_Response__Sequence * array = (move_base_msgs__action__MoveBase_GetResult_Response__Sequence *)malloc(sizeof(move_base_msgs__action__MoveBase_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = move_base_msgs__action__MoveBase_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
move_base_msgs__action__MoveBase_GetResult_Response__Sequence__destroy(move_base_msgs__action__MoveBase_GetResult_Response__Sequence * array)
{
  if (array) {
    move_base_msgs__action__MoveBase_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "move_base_msgs/action/detail/move_base__functions.h"

bool
move_base_msgs__action__MoveBase_FeedbackMessage__init(move_base_msgs__action__MoveBase_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    move_base_msgs__action__MoveBase_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!move_base_msgs__action__MoveBase_Feedback__init(&msg->feedback)) {
    move_base_msgs__action__MoveBase_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
move_base_msgs__action__MoveBase_FeedbackMessage__fini(move_base_msgs__action__MoveBase_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  move_base_msgs__action__MoveBase_Feedback__fini(&msg->feedback);
}

move_base_msgs__action__MoveBase_FeedbackMessage *
move_base_msgs__action__MoveBase_FeedbackMessage__create()
{
  move_base_msgs__action__MoveBase_FeedbackMessage * msg = (move_base_msgs__action__MoveBase_FeedbackMessage *)malloc(sizeof(move_base_msgs__action__MoveBase_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(move_base_msgs__action__MoveBase_FeedbackMessage));
  bool success = move_base_msgs__action__MoveBase_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
move_base_msgs__action__MoveBase_FeedbackMessage__destroy(move_base_msgs__action__MoveBase_FeedbackMessage * msg)
{
  if (msg) {
    move_base_msgs__action__MoveBase_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
move_base_msgs__action__MoveBase_FeedbackMessage__Sequence__init(move_base_msgs__action__MoveBase_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  move_base_msgs__action__MoveBase_FeedbackMessage * data = NULL;
  if (size) {
    data = (move_base_msgs__action__MoveBase_FeedbackMessage *)calloc(size, sizeof(move_base_msgs__action__MoveBase_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = move_base_msgs__action__MoveBase_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        move_base_msgs__action__MoveBase_FeedbackMessage__fini(&data[i - 1]);
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
move_base_msgs__action__MoveBase_FeedbackMessage__Sequence__fini(move_base_msgs__action__MoveBase_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      move_base_msgs__action__MoveBase_FeedbackMessage__fini(&array->data[i]);
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

move_base_msgs__action__MoveBase_FeedbackMessage__Sequence *
move_base_msgs__action__MoveBase_FeedbackMessage__Sequence__create(size_t size)
{
  move_base_msgs__action__MoveBase_FeedbackMessage__Sequence * array = (move_base_msgs__action__MoveBase_FeedbackMessage__Sequence *)malloc(sizeof(move_base_msgs__action__MoveBase_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = move_base_msgs__action__MoveBase_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
move_base_msgs__action__MoveBase_FeedbackMessage__Sequence__destroy(move_base_msgs__action__MoveBase_FeedbackMessage__Sequence * array)
{
  if (array) {
    move_base_msgs__action__MoveBase_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
