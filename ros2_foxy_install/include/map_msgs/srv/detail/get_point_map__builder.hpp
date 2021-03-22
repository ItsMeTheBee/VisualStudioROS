// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from map_msgs:srv\GetPointMap.idl
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__DETAIL__GET_POINT_MAP__BUILDER_HPP_
#define MAP_MSGS__SRV__DETAIL__GET_POINT_MAP__BUILDER_HPP_

#include "map_msgs/srv/detail/get_point_map__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace map_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::map_msgs::srv::GetPointMap_Request>()
{
  return ::map_msgs::srv::GetPointMap_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace map_msgs


namespace map_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPointMap_Response_map
{
public:
  Init_GetPointMap_Response_map()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::map_msgs::srv::GetPointMap_Response map(::map_msgs::srv::GetPointMap_Response::_map_type arg)
  {
    msg_.map = std::move(arg);
    return std::move(msg_);
  }

private:
  ::map_msgs::srv::GetPointMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::map_msgs::srv::GetPointMap_Response>()
{
  return map_msgs::srv::builder::Init_GetPointMap_Response_map();
}

}  // namespace map_msgs

#endif  // MAP_MSGS__SRV__DETAIL__GET_POINT_MAP__BUILDER_HPP_
