// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from move_base_msgs:action\MoveBase.idl
// generated code does not contain a copyright notice

#ifndef MOVE_BASE_MSGS__ACTION__DETAIL__MOVE_BASE__STRUCT_HPP_
#define MOVE_BASE_MSGS__ACTION__DETAIL__MOVE_BASE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__move_base_msgs__action__MoveBase_Goal __attribute__((deprecated))
#else
# define DEPRECATED__move_base_msgs__action__MoveBase_Goal __declspec(deprecated)
#endif

namespace move_base_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveBase_Goal_
{
  using Type = MoveBase_Goal_<ContainerAllocator>;

  explicit MoveBase_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_init)
  {
    (void)_init;
  }

  explicit MoveBase_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _target_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _target_pose_type target_pose;

  // setters for named parameter idiom
  Type & set__target_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->target_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    move_base_msgs::action::MoveBase_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const move_base_msgs::action::MoveBase_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<move_base_msgs::action::MoveBase_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<move_base_msgs::action::MoveBase_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      move_base_msgs::action::MoveBase_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<move_base_msgs::action::MoveBase_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      move_base_msgs::action::MoveBase_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<move_base_msgs::action::MoveBase_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<move_base_msgs::action::MoveBase_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<move_base_msgs::action::MoveBase_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__move_base_msgs__action__MoveBase_Goal
    std::shared_ptr<move_base_msgs::action::MoveBase_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__move_base_msgs__action__MoveBase_Goal
    std::shared_ptr<move_base_msgs::action::MoveBase_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveBase_Goal_ & other) const
  {
    if (this->target_pose != other.target_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveBase_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveBase_Goal_

// alias to use template instance with default allocator
using MoveBase_Goal =
  move_base_msgs::action::MoveBase_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace move_base_msgs


#ifndef _WIN32
# define DEPRECATED__move_base_msgs__action__MoveBase_Result __attribute__((deprecated))
#else
# define DEPRECATED__move_base_msgs__action__MoveBase_Result __declspec(deprecated)
#endif

namespace move_base_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveBase_Result_
{
  using Type = MoveBase_Result_<ContainerAllocator>;

  explicit MoveBase_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit MoveBase_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    move_base_msgs::action::MoveBase_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const move_base_msgs::action::MoveBase_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<move_base_msgs::action::MoveBase_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<move_base_msgs::action::MoveBase_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      move_base_msgs::action::MoveBase_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<move_base_msgs::action::MoveBase_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      move_base_msgs::action::MoveBase_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<move_base_msgs::action::MoveBase_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<move_base_msgs::action::MoveBase_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<move_base_msgs::action::MoveBase_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__move_base_msgs__action__MoveBase_Result
    std::shared_ptr<move_base_msgs::action::MoveBase_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__move_base_msgs__action__MoveBase_Result
    std::shared_ptr<move_base_msgs::action::MoveBase_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveBase_Result_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveBase_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveBase_Result_

// alias to use template instance with default allocator
using MoveBase_Result =
  move_base_msgs::action::MoveBase_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace move_base_msgs


// Include directives for member types
// Member 'base_position'
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__move_base_msgs__action__MoveBase_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__move_base_msgs__action__MoveBase_Feedback __declspec(deprecated)
#endif

namespace move_base_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveBase_Feedback_
{
  using Type = MoveBase_Feedback_<ContainerAllocator>;

  explicit MoveBase_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_position(_init)
  {
    (void)_init;
  }

  explicit MoveBase_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_position(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _base_position_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _base_position_type base_position;

  // setters for named parameter idiom
  Type & set__base_position(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->base_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    move_base_msgs::action::MoveBase_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const move_base_msgs::action::MoveBase_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<move_base_msgs::action::MoveBase_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<move_base_msgs::action::MoveBase_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      move_base_msgs::action::MoveBase_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<move_base_msgs::action::MoveBase_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      move_base_msgs::action::MoveBase_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<move_base_msgs::action::MoveBase_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<move_base_msgs::action::MoveBase_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<move_base_msgs::action::MoveBase_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__move_base_msgs__action__MoveBase_Feedback
    std::shared_ptr<move_base_msgs::action::MoveBase_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__move_base_msgs__action__MoveBase_Feedback
    std::shared_ptr<move_base_msgs::action::MoveBase_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveBase_Feedback_ & other) const
  {
    if (this->base_position != other.base_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveBase_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveBase_Feedback_

// alias to use template instance with default allocator
using MoveBase_Feedback =
  move_base_msgs::action::MoveBase_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace move_base_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "move_base_msgs/action/detail/move_base__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__move_base_msgs__action__MoveBase_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__move_base_msgs__action__MoveBase_SendGoal_Request __declspec(deprecated)
#endif

namespace move_base_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveBase_SendGoal_Request_
{
  using Type = MoveBase_SendGoal_Request_<ContainerAllocator>;

  explicit MoveBase_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit MoveBase_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    move_base_msgs::action::MoveBase_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const move_base_msgs::action::MoveBase_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    move_base_msgs::action::MoveBase_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const move_base_msgs::action::MoveBase_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<move_base_msgs::action::MoveBase_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<move_base_msgs::action::MoveBase_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      move_base_msgs::action::MoveBase_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<move_base_msgs::action::MoveBase_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      move_base_msgs::action::MoveBase_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<move_base_msgs::action::MoveBase_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<move_base_msgs::action::MoveBase_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<move_base_msgs::action::MoveBase_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__move_base_msgs__action__MoveBase_SendGoal_Request
    std::shared_ptr<move_base_msgs::action::MoveBase_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__move_base_msgs__action__MoveBase_SendGoal_Request
    std::shared_ptr<move_base_msgs::action::MoveBase_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveBase_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveBase_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveBase_SendGoal_Request_

// alias to use template instance with default allocator
using MoveBase_SendGoal_Request =
  move_base_msgs::action::MoveBase_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace move_base_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__move_base_msgs__action__MoveBase_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__move_base_msgs__action__MoveBase_SendGoal_Response __declspec(deprecated)
#endif

namespace move_base_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveBase_SendGoal_Response_
{
  using Type = MoveBase_SendGoal_Response_<ContainerAllocator>;

  explicit MoveBase_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit MoveBase_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    move_base_msgs::action::MoveBase_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const move_base_msgs::action::MoveBase_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<move_base_msgs::action::MoveBase_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<move_base_msgs::action::MoveBase_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      move_base_msgs::action::MoveBase_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<move_base_msgs::action::MoveBase_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      move_base_msgs::action::MoveBase_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<move_base_msgs::action::MoveBase_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<move_base_msgs::action::MoveBase_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<move_base_msgs::action::MoveBase_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__move_base_msgs__action__MoveBase_SendGoal_Response
    std::shared_ptr<move_base_msgs::action::MoveBase_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__move_base_msgs__action__MoveBase_SendGoal_Response
    std::shared_ptr<move_base_msgs::action::MoveBase_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveBase_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveBase_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveBase_SendGoal_Response_

// alias to use template instance with default allocator
using MoveBase_SendGoal_Response =
  move_base_msgs::action::MoveBase_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace move_base_msgs

namespace move_base_msgs
{

namespace action
{

struct MoveBase_SendGoal
{
  using Request = move_base_msgs::action::MoveBase_SendGoal_Request;
  using Response = move_base_msgs::action::MoveBase_SendGoal_Response;
};

}  // namespace action

}  // namespace move_base_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__move_base_msgs__action__MoveBase_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__move_base_msgs__action__MoveBase_GetResult_Request __declspec(deprecated)
#endif

namespace move_base_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveBase_GetResult_Request_
{
  using Type = MoveBase_GetResult_Request_<ContainerAllocator>;

  explicit MoveBase_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit MoveBase_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    move_base_msgs::action::MoveBase_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const move_base_msgs::action::MoveBase_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<move_base_msgs::action::MoveBase_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<move_base_msgs::action::MoveBase_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      move_base_msgs::action::MoveBase_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<move_base_msgs::action::MoveBase_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      move_base_msgs::action::MoveBase_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<move_base_msgs::action::MoveBase_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<move_base_msgs::action::MoveBase_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<move_base_msgs::action::MoveBase_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__move_base_msgs__action__MoveBase_GetResult_Request
    std::shared_ptr<move_base_msgs::action::MoveBase_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__move_base_msgs__action__MoveBase_GetResult_Request
    std::shared_ptr<move_base_msgs::action::MoveBase_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveBase_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveBase_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveBase_GetResult_Request_

// alias to use template instance with default allocator
using MoveBase_GetResult_Request =
  move_base_msgs::action::MoveBase_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace move_base_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "move_base_msgs/action/detail/move_base__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__move_base_msgs__action__MoveBase_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__move_base_msgs__action__MoveBase_GetResult_Response __declspec(deprecated)
#endif

namespace move_base_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveBase_GetResult_Response_
{
  using Type = MoveBase_GetResult_Response_<ContainerAllocator>;

  explicit MoveBase_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit MoveBase_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    move_base_msgs::action::MoveBase_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const move_base_msgs::action::MoveBase_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    move_base_msgs::action::MoveBase_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const move_base_msgs::action::MoveBase_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<move_base_msgs::action::MoveBase_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<move_base_msgs::action::MoveBase_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      move_base_msgs::action::MoveBase_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<move_base_msgs::action::MoveBase_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      move_base_msgs::action::MoveBase_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<move_base_msgs::action::MoveBase_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<move_base_msgs::action::MoveBase_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<move_base_msgs::action::MoveBase_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__move_base_msgs__action__MoveBase_GetResult_Response
    std::shared_ptr<move_base_msgs::action::MoveBase_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__move_base_msgs__action__MoveBase_GetResult_Response
    std::shared_ptr<move_base_msgs::action::MoveBase_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveBase_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveBase_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveBase_GetResult_Response_

// alias to use template instance with default allocator
using MoveBase_GetResult_Response =
  move_base_msgs::action::MoveBase_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace move_base_msgs

namespace move_base_msgs
{

namespace action
{

struct MoveBase_GetResult
{
  using Request = move_base_msgs::action::MoveBase_GetResult_Request;
  using Response = move_base_msgs::action::MoveBase_GetResult_Response;
};

}  // namespace action

}  // namespace move_base_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "move_base_msgs/action/detail/move_base__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__move_base_msgs__action__MoveBase_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__move_base_msgs__action__MoveBase_FeedbackMessage __declspec(deprecated)
#endif

namespace move_base_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveBase_FeedbackMessage_
{
  using Type = MoveBase_FeedbackMessage_<ContainerAllocator>;

  explicit MoveBase_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit MoveBase_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    move_base_msgs::action::MoveBase_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const move_base_msgs::action::MoveBase_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    move_base_msgs::action::MoveBase_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const move_base_msgs::action::MoveBase_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<move_base_msgs::action::MoveBase_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<move_base_msgs::action::MoveBase_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      move_base_msgs::action::MoveBase_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<move_base_msgs::action::MoveBase_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      move_base_msgs::action::MoveBase_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<move_base_msgs::action::MoveBase_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<move_base_msgs::action::MoveBase_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<move_base_msgs::action::MoveBase_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__move_base_msgs__action__MoveBase_FeedbackMessage
    std::shared_ptr<move_base_msgs::action::MoveBase_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__move_base_msgs__action__MoveBase_FeedbackMessage
    std::shared_ptr<move_base_msgs::action::MoveBase_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveBase_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveBase_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveBase_FeedbackMessage_

// alias to use template instance with default allocator
using MoveBase_FeedbackMessage =
  move_base_msgs::action::MoveBase_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace move_base_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace move_base_msgs
{

namespace action
{

struct MoveBase
{
  /// The goal message defined in the action definition.
  using Goal = move_base_msgs::action::MoveBase_Goal;
  /// The result message defined in the action definition.
  using Result = move_base_msgs::action::MoveBase_Result;
  /// The feedback message defined in the action definition.
  using Feedback = move_base_msgs::action::MoveBase_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = move_base_msgs::action::MoveBase_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = move_base_msgs::action::MoveBase_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = move_base_msgs::action::MoveBase_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct MoveBase MoveBase;

}  // namespace action

}  // namespace move_base_msgs

#endif  // MOVE_BASE_MSGS__ACTION__DETAIL__MOVE_BASE__STRUCT_HPP_
