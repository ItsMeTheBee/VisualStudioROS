// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from move_base_msgs:action\MoveBase.idl
// generated code does not contain a copyright notice

#ifndef MOVE_BASE_MSGS__ACTION__DETAIL__MOVE_BASE__BUILDER_HPP_
#define MOVE_BASE_MSGS__ACTION__DETAIL__MOVE_BASE__BUILDER_HPP_

#include "move_base_msgs/action/detail/move_base__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace move_base_msgs
{

namespace action
{

namespace builder
{

class Init_MoveBase_Goal_target_pose
{
public:
  Init_MoveBase_Goal_target_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::move_base_msgs::action::MoveBase_Goal target_pose(::move_base_msgs::action::MoveBase_Goal::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_base_msgs::action::MoveBase_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_base_msgs::action::MoveBase_Goal>()
{
  return move_base_msgs::action::builder::Init_MoveBase_Goal_target_pose();
}

}  // namespace move_base_msgs


namespace move_base_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_base_msgs::action::MoveBase_Result>()
{
  return ::move_base_msgs::action::MoveBase_Result(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace move_base_msgs


namespace move_base_msgs
{

namespace action
{

namespace builder
{

class Init_MoveBase_Feedback_base_position
{
public:
  Init_MoveBase_Feedback_base_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::move_base_msgs::action::MoveBase_Feedback base_position(::move_base_msgs::action::MoveBase_Feedback::_base_position_type arg)
  {
    msg_.base_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_base_msgs::action::MoveBase_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_base_msgs::action::MoveBase_Feedback>()
{
  return move_base_msgs::action::builder::Init_MoveBase_Feedback_base_position();
}

}  // namespace move_base_msgs


namespace move_base_msgs
{

namespace action
{

namespace builder
{

class Init_MoveBase_SendGoal_Request_goal
{
public:
  explicit Init_MoveBase_SendGoal_Request_goal(::move_base_msgs::action::MoveBase_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::move_base_msgs::action::MoveBase_SendGoal_Request goal(::move_base_msgs::action::MoveBase_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_base_msgs::action::MoveBase_SendGoal_Request msg_;
};

class Init_MoveBase_SendGoal_Request_goal_id
{
public:
  Init_MoveBase_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveBase_SendGoal_Request_goal goal_id(::move_base_msgs::action::MoveBase_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveBase_SendGoal_Request_goal(msg_);
  }

private:
  ::move_base_msgs::action::MoveBase_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_base_msgs::action::MoveBase_SendGoal_Request>()
{
  return move_base_msgs::action::builder::Init_MoveBase_SendGoal_Request_goal_id();
}

}  // namespace move_base_msgs


namespace move_base_msgs
{

namespace action
{

namespace builder
{

class Init_MoveBase_SendGoal_Response_stamp
{
public:
  explicit Init_MoveBase_SendGoal_Response_stamp(::move_base_msgs::action::MoveBase_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::move_base_msgs::action::MoveBase_SendGoal_Response stamp(::move_base_msgs::action::MoveBase_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_base_msgs::action::MoveBase_SendGoal_Response msg_;
};

class Init_MoveBase_SendGoal_Response_accepted
{
public:
  Init_MoveBase_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveBase_SendGoal_Response_stamp accepted(::move_base_msgs::action::MoveBase_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveBase_SendGoal_Response_stamp(msg_);
  }

private:
  ::move_base_msgs::action::MoveBase_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_base_msgs::action::MoveBase_SendGoal_Response>()
{
  return move_base_msgs::action::builder::Init_MoveBase_SendGoal_Response_accepted();
}

}  // namespace move_base_msgs


namespace move_base_msgs
{

namespace action
{

namespace builder
{

class Init_MoveBase_GetResult_Request_goal_id
{
public:
  Init_MoveBase_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::move_base_msgs::action::MoveBase_GetResult_Request goal_id(::move_base_msgs::action::MoveBase_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_base_msgs::action::MoveBase_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_base_msgs::action::MoveBase_GetResult_Request>()
{
  return move_base_msgs::action::builder::Init_MoveBase_GetResult_Request_goal_id();
}

}  // namespace move_base_msgs


namespace move_base_msgs
{

namespace action
{

namespace builder
{

class Init_MoveBase_GetResult_Response_result
{
public:
  explicit Init_MoveBase_GetResult_Response_result(::move_base_msgs::action::MoveBase_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::move_base_msgs::action::MoveBase_GetResult_Response result(::move_base_msgs::action::MoveBase_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_base_msgs::action::MoveBase_GetResult_Response msg_;
};

class Init_MoveBase_GetResult_Response_status
{
public:
  Init_MoveBase_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveBase_GetResult_Response_result status(::move_base_msgs::action::MoveBase_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveBase_GetResult_Response_result(msg_);
  }

private:
  ::move_base_msgs::action::MoveBase_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_base_msgs::action::MoveBase_GetResult_Response>()
{
  return move_base_msgs::action::builder::Init_MoveBase_GetResult_Response_status();
}

}  // namespace move_base_msgs


namespace move_base_msgs
{

namespace action
{

namespace builder
{

class Init_MoveBase_FeedbackMessage_feedback
{
public:
  explicit Init_MoveBase_FeedbackMessage_feedback(::move_base_msgs::action::MoveBase_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::move_base_msgs::action::MoveBase_FeedbackMessage feedback(::move_base_msgs::action::MoveBase_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_base_msgs::action::MoveBase_FeedbackMessage msg_;
};

class Init_MoveBase_FeedbackMessage_goal_id
{
public:
  Init_MoveBase_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveBase_FeedbackMessage_feedback goal_id(::move_base_msgs::action::MoveBase_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveBase_FeedbackMessage_feedback(msg_);
  }

private:
  ::move_base_msgs::action::MoveBase_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_base_msgs::action::MoveBase_FeedbackMessage>()
{
  return move_base_msgs::action::builder::Init_MoveBase_FeedbackMessage_goal_id();
}

}  // namespace move_base_msgs

#endif  // MOVE_BASE_MSGS__ACTION__DETAIL__MOVE_BASE__BUILDER_HPP_
