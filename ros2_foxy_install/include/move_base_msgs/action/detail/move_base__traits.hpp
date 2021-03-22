// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from move_base_msgs:action\MoveBase.idl
// generated code does not contain a copyright notice

#ifndef MOVE_BASE_MSGS__ACTION__DETAIL__MOVE_BASE__TRAITS_HPP_
#define MOVE_BASE_MSGS__ACTION__DETAIL__MOVE_BASE__TRAITS_HPP_

#include "move_base_msgs/action/detail/move_base__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_base_msgs::action::MoveBase_Goal>()
{
  return "move_base_msgs::action::MoveBase_Goal";
}

template<>
inline const char * name<move_base_msgs::action::MoveBase_Goal>()
{
  return "move_base_msgs/action/MoveBase_Goal";
}

template<>
struct has_fixed_size<move_base_msgs::action::MoveBase_Goal>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<move_base_msgs::action::MoveBase_Goal>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<move_base_msgs::action::MoveBase_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_base_msgs::action::MoveBase_Result>()
{
  return "move_base_msgs::action::MoveBase_Result";
}

template<>
inline const char * name<move_base_msgs::action::MoveBase_Result>()
{
  return "move_base_msgs/action/MoveBase_Result";
}

template<>
struct has_fixed_size<move_base_msgs::action::MoveBase_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<move_base_msgs::action::MoveBase_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<move_base_msgs::action::MoveBase_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'base_position'
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_base_msgs::action::MoveBase_Feedback>()
{
  return "move_base_msgs::action::MoveBase_Feedback";
}

template<>
inline const char * name<move_base_msgs::action::MoveBase_Feedback>()
{
  return "move_base_msgs/action/MoveBase_Feedback";
}

template<>
struct has_fixed_size<move_base_msgs::action::MoveBase_Feedback>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<move_base_msgs::action::MoveBase_Feedback>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<move_base_msgs::action::MoveBase_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "move_base_msgs/action/detail/move_base__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_base_msgs::action::MoveBase_SendGoal_Request>()
{
  return "move_base_msgs::action::MoveBase_SendGoal_Request";
}

template<>
inline const char * name<move_base_msgs::action::MoveBase_SendGoal_Request>()
{
  return "move_base_msgs/action/MoveBase_SendGoal_Request";
}

template<>
struct has_fixed_size<move_base_msgs::action::MoveBase_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<move_base_msgs::action::MoveBase_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<move_base_msgs::action::MoveBase_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<move_base_msgs::action::MoveBase_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<move_base_msgs::action::MoveBase_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_base_msgs::action::MoveBase_SendGoal_Response>()
{
  return "move_base_msgs::action::MoveBase_SendGoal_Response";
}

template<>
inline const char * name<move_base_msgs::action::MoveBase_SendGoal_Response>()
{
  return "move_base_msgs/action/MoveBase_SendGoal_Response";
}

template<>
struct has_fixed_size<move_base_msgs::action::MoveBase_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<move_base_msgs::action::MoveBase_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<move_base_msgs::action::MoveBase_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_base_msgs::action::MoveBase_SendGoal>()
{
  return "move_base_msgs::action::MoveBase_SendGoal";
}

template<>
inline const char * name<move_base_msgs::action::MoveBase_SendGoal>()
{
  return "move_base_msgs/action/MoveBase_SendGoal";
}

template<>
struct has_fixed_size<move_base_msgs::action::MoveBase_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<move_base_msgs::action::MoveBase_SendGoal_Request>::value &&
    has_fixed_size<move_base_msgs::action::MoveBase_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<move_base_msgs::action::MoveBase_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<move_base_msgs::action::MoveBase_SendGoal_Request>::value &&
    has_bounded_size<move_base_msgs::action::MoveBase_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<move_base_msgs::action::MoveBase_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<move_base_msgs::action::MoveBase_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<move_base_msgs::action::MoveBase_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_base_msgs::action::MoveBase_GetResult_Request>()
{
  return "move_base_msgs::action::MoveBase_GetResult_Request";
}

template<>
inline const char * name<move_base_msgs::action::MoveBase_GetResult_Request>()
{
  return "move_base_msgs/action/MoveBase_GetResult_Request";
}

template<>
struct has_fixed_size<move_base_msgs::action::MoveBase_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<move_base_msgs::action::MoveBase_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<move_base_msgs::action::MoveBase_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "move_base_msgs/action/detail/move_base__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_base_msgs::action::MoveBase_GetResult_Response>()
{
  return "move_base_msgs::action::MoveBase_GetResult_Response";
}

template<>
inline const char * name<move_base_msgs::action::MoveBase_GetResult_Response>()
{
  return "move_base_msgs/action/MoveBase_GetResult_Response";
}

template<>
struct has_fixed_size<move_base_msgs::action::MoveBase_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<move_base_msgs::action::MoveBase_Result>::value> {};

template<>
struct has_bounded_size<move_base_msgs::action::MoveBase_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<move_base_msgs::action::MoveBase_Result>::value> {};

template<>
struct is_message<move_base_msgs::action::MoveBase_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_base_msgs::action::MoveBase_GetResult>()
{
  return "move_base_msgs::action::MoveBase_GetResult";
}

template<>
inline const char * name<move_base_msgs::action::MoveBase_GetResult>()
{
  return "move_base_msgs/action/MoveBase_GetResult";
}

template<>
struct has_fixed_size<move_base_msgs::action::MoveBase_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<move_base_msgs::action::MoveBase_GetResult_Request>::value &&
    has_fixed_size<move_base_msgs::action::MoveBase_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<move_base_msgs::action::MoveBase_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<move_base_msgs::action::MoveBase_GetResult_Request>::value &&
    has_bounded_size<move_base_msgs::action::MoveBase_GetResult_Response>::value
  >
{
};

template<>
struct is_service<move_base_msgs::action::MoveBase_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<move_base_msgs::action::MoveBase_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<move_base_msgs::action::MoveBase_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "move_base_msgs/action/detail/move_base__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_base_msgs::action::MoveBase_FeedbackMessage>()
{
  return "move_base_msgs::action::MoveBase_FeedbackMessage";
}

template<>
inline const char * name<move_base_msgs::action::MoveBase_FeedbackMessage>()
{
  return "move_base_msgs/action/MoveBase_FeedbackMessage";
}

template<>
struct has_fixed_size<move_base_msgs::action::MoveBase_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<move_base_msgs::action::MoveBase_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<move_base_msgs::action::MoveBase_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<move_base_msgs::action::MoveBase_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<move_base_msgs::action::MoveBase_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<move_base_msgs::action::MoveBase>
  : std::true_type
{
};

template<>
struct is_action_goal<move_base_msgs::action::MoveBase_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<move_base_msgs::action::MoveBase_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<move_base_msgs::action::MoveBase_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MOVE_BASE_MSGS__ACTION__DETAIL__MOVE_BASE__TRAITS_HPP_
