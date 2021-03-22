// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from move_base_msgs:action\MoveBase.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "move_base_msgs/action/detail/move_base__rosidl_typesupport_introspection_c.h"
#include "move_base_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "move_base_msgs/action/detail/move_base__functions.h"
#include "move_base_msgs/action/detail/move_base__struct.h"


// Include directives for member types
// Member `target_pose`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `target_pose`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveBase_Goal__rosidl_typesupport_introspection_c__MoveBase_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  move_base_msgs__action__MoveBase_Goal__init(message_memory);
}

void MoveBase_Goal__rosidl_typesupport_introspection_c__MoveBase_Goal_fini_function(void * message_memory)
{
  move_base_msgs__action__MoveBase_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveBase_Goal__rosidl_typesupport_introspection_c__MoveBase_Goal_message_member_array[1] = {
  {
    "target_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(move_base_msgs__action__MoveBase_Goal, target_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveBase_Goal__rosidl_typesupport_introspection_c__MoveBase_Goal_message_members = {
  "move_base_msgs__action",  // message namespace
  "MoveBase_Goal",  // message name
  1,  // number of fields
  sizeof(move_base_msgs__action__MoveBase_Goal),
  MoveBase_Goal__rosidl_typesupport_introspection_c__MoveBase_Goal_message_member_array,  // message members
  MoveBase_Goal__rosidl_typesupport_introspection_c__MoveBase_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveBase_Goal__rosidl_typesupport_introspection_c__MoveBase_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveBase_Goal__rosidl_typesupport_introspection_c__MoveBase_Goal_message_type_support_handle = {
  0,
  &MoveBase_Goal__rosidl_typesupport_introspection_c__MoveBase_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_move_base_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_base_msgs, action, MoveBase_Goal)() {
  MoveBase_Goal__rosidl_typesupport_introspection_c__MoveBase_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!MoveBase_Goal__rosidl_typesupport_introspection_c__MoveBase_Goal_message_type_support_handle.typesupport_identifier) {
    MoveBase_Goal__rosidl_typesupport_introspection_c__MoveBase_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveBase_Goal__rosidl_typesupport_introspection_c__MoveBase_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "move_base_msgs/action/detail/move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "move_base_msgs/action/detail/move_base__functions.h"
// already included above
// #include "move_base_msgs/action/detail/move_base__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MoveBase_Result__rosidl_typesupport_introspection_c__MoveBase_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  move_base_msgs__action__MoveBase_Result__init(message_memory);
}

void MoveBase_Result__rosidl_typesupport_introspection_c__MoveBase_Result_fini_function(void * message_memory)
{
  move_base_msgs__action__MoveBase_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveBase_Result__rosidl_typesupport_introspection_c__MoveBase_Result_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(move_base_msgs__action__MoveBase_Result, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveBase_Result__rosidl_typesupport_introspection_c__MoveBase_Result_message_members = {
  "move_base_msgs__action",  // message namespace
  "MoveBase_Result",  // message name
  1,  // number of fields
  sizeof(move_base_msgs__action__MoveBase_Result),
  MoveBase_Result__rosidl_typesupport_introspection_c__MoveBase_Result_message_member_array,  // message members
  MoveBase_Result__rosidl_typesupport_introspection_c__MoveBase_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveBase_Result__rosidl_typesupport_introspection_c__MoveBase_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveBase_Result__rosidl_typesupport_introspection_c__MoveBase_Result_message_type_support_handle = {
  0,
  &MoveBase_Result__rosidl_typesupport_introspection_c__MoveBase_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_move_base_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_base_msgs, action, MoveBase_Result)() {
  if (!MoveBase_Result__rosidl_typesupport_introspection_c__MoveBase_Result_message_type_support_handle.typesupport_identifier) {
    MoveBase_Result__rosidl_typesupport_introspection_c__MoveBase_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveBase_Result__rosidl_typesupport_introspection_c__MoveBase_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "move_base_msgs/action/detail/move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "move_base_msgs/action/detail/move_base__functions.h"
// already included above
// #include "move_base_msgs/action/detail/move_base__struct.h"


// Include directives for member types
// Member `base_position`
// already included above
// #include "geometry_msgs/msg/pose_stamped.h"
// Member `base_position`
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveBase_Feedback__rosidl_typesupport_introspection_c__MoveBase_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  move_base_msgs__action__MoveBase_Feedback__init(message_memory);
}

void MoveBase_Feedback__rosidl_typesupport_introspection_c__MoveBase_Feedback_fini_function(void * message_memory)
{
  move_base_msgs__action__MoveBase_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveBase_Feedback__rosidl_typesupport_introspection_c__MoveBase_Feedback_message_member_array[1] = {
  {
    "base_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(move_base_msgs__action__MoveBase_Feedback, base_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveBase_Feedback__rosidl_typesupport_introspection_c__MoveBase_Feedback_message_members = {
  "move_base_msgs__action",  // message namespace
  "MoveBase_Feedback",  // message name
  1,  // number of fields
  sizeof(move_base_msgs__action__MoveBase_Feedback),
  MoveBase_Feedback__rosidl_typesupport_introspection_c__MoveBase_Feedback_message_member_array,  // message members
  MoveBase_Feedback__rosidl_typesupport_introspection_c__MoveBase_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveBase_Feedback__rosidl_typesupport_introspection_c__MoveBase_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveBase_Feedback__rosidl_typesupport_introspection_c__MoveBase_Feedback_message_type_support_handle = {
  0,
  &MoveBase_Feedback__rosidl_typesupport_introspection_c__MoveBase_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_move_base_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_base_msgs, action, MoveBase_Feedback)() {
  MoveBase_Feedback__rosidl_typesupport_introspection_c__MoveBase_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!MoveBase_Feedback__rosidl_typesupport_introspection_c__MoveBase_Feedback_message_type_support_handle.typesupport_identifier) {
    MoveBase_Feedback__rosidl_typesupport_introspection_c__MoveBase_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveBase_Feedback__rosidl_typesupport_introspection_c__MoveBase_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "move_base_msgs/action/detail/move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "move_base_msgs/action/detail/move_base__functions.h"
// already included above
// #include "move_base_msgs/action/detail/move_base__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "move_base_msgs/action/move_base.h"
// Member `goal`
// already included above
// #include "move_base_msgs/action/detail/move_base__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  move_base_msgs__action__MoveBase_SendGoal_Request__init(message_memory);
}

void MoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Request_fini_function(void * message_memory)
{
  move_base_msgs__action__MoveBase_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(move_base_msgs__action__MoveBase_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(move_base_msgs__action__MoveBase_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Request_message_members = {
  "move_base_msgs__action",  // message namespace
  "MoveBase_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(move_base_msgs__action__MoveBase_SendGoal_Request),
  MoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Request_message_member_array,  // message members
  MoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Request_message_type_support_handle = {
  0,
  &MoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_move_base_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_base_msgs, action, MoveBase_SendGoal_Request)() {
  MoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  MoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_base_msgs, action, MoveBase_Goal)();
  if (!MoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    MoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveBase_SendGoal_Request__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "move_base_msgs/action/detail/move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "move_base_msgs/action/detail/move_base__functions.h"
// already included above
// #include "move_base_msgs/action/detail/move_base__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  move_base_msgs__action__MoveBase_SendGoal_Response__init(message_memory);
}

void MoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Response_fini_function(void * message_memory)
{
  move_base_msgs__action__MoveBase_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(move_base_msgs__action__MoveBase_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(move_base_msgs__action__MoveBase_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Response_message_members = {
  "move_base_msgs__action",  // message namespace
  "MoveBase_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(move_base_msgs__action__MoveBase_SendGoal_Response),
  MoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Response_message_member_array,  // message members
  MoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Response_message_type_support_handle = {
  0,
  &MoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_move_base_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_base_msgs, action, MoveBase_SendGoal_Response)() {
  MoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!MoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    MoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveBase_SendGoal_Response__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "move_base_msgs/action/detail/move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers move_base_msgs__action__detail__move_base__rosidl_typesupport_introspection_c__MoveBase_SendGoal_service_members = {
  "move_base_msgs__action",  // service namespace
  "MoveBase_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // move_base_msgs__action__detail__move_base__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // move_base_msgs__action__detail__move_base__rosidl_typesupport_introspection_c__MoveBase_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t move_base_msgs__action__detail__move_base__rosidl_typesupport_introspection_c__MoveBase_SendGoal_service_type_support_handle = {
  0,
  &move_base_msgs__action__detail__move_base__rosidl_typesupport_introspection_c__MoveBase_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_base_msgs, action, MoveBase_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_base_msgs, action, MoveBase_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_move_base_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_base_msgs, action, MoveBase_SendGoal)() {
  if (!move_base_msgs__action__detail__move_base__rosidl_typesupport_introspection_c__MoveBase_SendGoal_service_type_support_handle.typesupport_identifier) {
    move_base_msgs__action__detail__move_base__rosidl_typesupport_introspection_c__MoveBase_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)move_base_msgs__action__detail__move_base__rosidl_typesupport_introspection_c__MoveBase_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_base_msgs, action, MoveBase_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_base_msgs, action, MoveBase_SendGoal_Response)()->data;
  }

  return &move_base_msgs__action__detail__move_base__rosidl_typesupport_introspection_c__MoveBase_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "move_base_msgs/action/detail/move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "move_base_msgs/action/detail/move_base__functions.h"
// already included above
// #include "move_base_msgs/action/detail/move_base__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MoveBase_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  move_base_msgs__action__MoveBase_GetResult_Request__init(message_memory);
}

void MoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MoveBase_GetResult_Request_fini_function(void * message_memory)
{
  move_base_msgs__action__MoveBase_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MoveBase_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(move_base_msgs__action__MoveBase_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MoveBase_GetResult_Request_message_members = {
  "move_base_msgs__action",  // message namespace
  "MoveBase_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(move_base_msgs__action__MoveBase_GetResult_Request),
  MoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MoveBase_GetResult_Request_message_member_array,  // message members
  MoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MoveBase_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MoveBase_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MoveBase_GetResult_Request_message_type_support_handle = {
  0,
  &MoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MoveBase_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_move_base_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_base_msgs, action, MoveBase_GetResult_Request)() {
  MoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MoveBase_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!MoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MoveBase_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    MoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MoveBase_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveBase_GetResult_Request__rosidl_typesupport_introspection_c__MoveBase_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "move_base_msgs/action/detail/move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "move_base_msgs/action/detail/move_base__functions.h"
// already included above
// #include "move_base_msgs/action/detail/move_base__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "move_base_msgs/action/move_base.h"
// Member `result`
// already included above
// #include "move_base_msgs/action/detail/move_base__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MoveBase_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  move_base_msgs__action__MoveBase_GetResult_Response__init(message_memory);
}

void MoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MoveBase_GetResult_Response_fini_function(void * message_memory)
{
  move_base_msgs__action__MoveBase_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MoveBase_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(move_base_msgs__action__MoveBase_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(move_base_msgs__action__MoveBase_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MoveBase_GetResult_Response_message_members = {
  "move_base_msgs__action",  // message namespace
  "MoveBase_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(move_base_msgs__action__MoveBase_GetResult_Response),
  MoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MoveBase_GetResult_Response_message_member_array,  // message members
  MoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MoveBase_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MoveBase_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MoveBase_GetResult_Response_message_type_support_handle = {
  0,
  &MoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MoveBase_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_move_base_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_base_msgs, action, MoveBase_GetResult_Response)() {
  MoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MoveBase_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_base_msgs, action, MoveBase_Result)();
  if (!MoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MoveBase_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    MoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MoveBase_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveBase_GetResult_Response__rosidl_typesupport_introspection_c__MoveBase_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "move_base_msgs/action/detail/move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers move_base_msgs__action__detail__move_base__rosidl_typesupport_introspection_c__MoveBase_GetResult_service_members = {
  "move_base_msgs__action",  // service namespace
  "MoveBase_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // move_base_msgs__action__detail__move_base__rosidl_typesupport_introspection_c__MoveBase_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // move_base_msgs__action__detail__move_base__rosidl_typesupport_introspection_c__MoveBase_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t move_base_msgs__action__detail__move_base__rosidl_typesupport_introspection_c__MoveBase_GetResult_service_type_support_handle = {
  0,
  &move_base_msgs__action__detail__move_base__rosidl_typesupport_introspection_c__MoveBase_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_base_msgs, action, MoveBase_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_base_msgs, action, MoveBase_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_move_base_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_base_msgs, action, MoveBase_GetResult)() {
  if (!move_base_msgs__action__detail__move_base__rosidl_typesupport_introspection_c__MoveBase_GetResult_service_type_support_handle.typesupport_identifier) {
    move_base_msgs__action__detail__move_base__rosidl_typesupport_introspection_c__MoveBase_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)move_base_msgs__action__detail__move_base__rosidl_typesupport_introspection_c__MoveBase_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_base_msgs, action, MoveBase_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_base_msgs, action, MoveBase_GetResult_Response)()->data;
  }

  return &move_base_msgs__action__detail__move_base__rosidl_typesupport_introspection_c__MoveBase_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "move_base_msgs/action/detail/move_base__rosidl_typesupport_introspection_c.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "move_base_msgs/action/detail/move_base__functions.h"
// already included above
// #include "move_base_msgs/action/detail/move_base__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "move_base_msgs/action/move_base.h"
// Member `feedback`
// already included above
// #include "move_base_msgs/action/detail/move_base__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MoveBase_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  move_base_msgs__action__MoveBase_FeedbackMessage__init(message_memory);
}

void MoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MoveBase_FeedbackMessage_fini_function(void * message_memory)
{
  move_base_msgs__action__MoveBase_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MoveBase_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(move_base_msgs__action__MoveBase_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(move_base_msgs__action__MoveBase_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MoveBase_FeedbackMessage_message_members = {
  "move_base_msgs__action",  // message namespace
  "MoveBase_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(move_base_msgs__action__MoveBase_FeedbackMessage),
  MoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MoveBase_FeedbackMessage_message_member_array,  // message members
  MoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MoveBase_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MoveBase_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MoveBase_FeedbackMessage_message_type_support_handle = {
  0,
  &MoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MoveBase_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_move_base_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_base_msgs, action, MoveBase_FeedbackMessage)() {
  MoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MoveBase_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  MoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MoveBase_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, move_base_msgs, action, MoveBase_Feedback)();
  if (!MoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MoveBase_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    MoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MoveBase_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveBase_FeedbackMessage__rosidl_typesupport_introspection_c__MoveBase_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
