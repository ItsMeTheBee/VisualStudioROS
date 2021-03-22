// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mcd_interfaces:msg\MCD.idl
// generated code does not contain a copyright notice

#ifndef MCD_INTERFACES__MSG__DETAIL__MCD__STRUCT_HPP_
#define MCD_INTERFACES__MSG__DETAIL__MCD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mcd_interfaces__msg__MCD __attribute__((deprecated))
#else
# define DEPRECATED__mcd_interfaces__msg__MCD __declspec(deprecated)
#endif

namespace mcd_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MCD_
{
  using Type = MCD_<ContainerAllocator>;

  explicit MCD_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hint = 0l;
      this->flood = 0.0f;
      this->trouble = 0.0;
      this->word = "";
    }
  }

  explicit MCD_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : word(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hint = 0l;
      this->flood = 0.0f;
      this->trouble = 0.0;
      this->word = "";
    }
  }

  // field types and members
  using _hint_type =
    int32_t;
  _hint_type hint;
  using _flood_type =
    float;
  _flood_type flood;
  using _trouble_type =
    double;
  _trouble_type trouble;
  using _word_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _word_type word;
  using _hint_arr_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _hint_arr_type hint_arr;
  using _flood_arr_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _flood_arr_type flood_arr;
  using _trouble_arr_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _trouble_arr_type trouble_arr;
  using _word_arr_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _word_arr_type word_arr;

  // setters for named parameter idiom
  Type & set__hint(
    const int32_t & _arg)
  {
    this->hint = _arg;
    return *this;
  }
  Type & set__flood(
    const float & _arg)
  {
    this->flood = _arg;
    return *this;
  }
  Type & set__trouble(
    const double & _arg)
  {
    this->trouble = _arg;
    return *this;
  }
  Type & set__word(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->word = _arg;
    return *this;
  }
  Type & set__hint_arr(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->hint_arr = _arg;
    return *this;
  }
  Type & set__flood_arr(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->flood_arr = _arg;
    return *this;
  }
  Type & set__trouble_arr(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->trouble_arr = _arg;
    return *this;
  }
  Type & set__word_arr(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->word_arr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mcd_interfaces::msg::MCD_<ContainerAllocator> *;
  using ConstRawPtr =
    const mcd_interfaces::msg::MCD_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mcd_interfaces::msg::MCD_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mcd_interfaces::msg::MCD_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mcd_interfaces::msg::MCD_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mcd_interfaces::msg::MCD_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mcd_interfaces::msg::MCD_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mcd_interfaces::msg::MCD_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mcd_interfaces::msg::MCD_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mcd_interfaces::msg::MCD_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mcd_interfaces__msg__MCD
    std::shared_ptr<mcd_interfaces::msg::MCD_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mcd_interfaces__msg__MCD
    std::shared_ptr<mcd_interfaces::msg::MCD_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MCD_ & other) const
  {
    if (this->hint != other.hint) {
      return false;
    }
    if (this->flood != other.flood) {
      return false;
    }
    if (this->trouble != other.trouble) {
      return false;
    }
    if (this->word != other.word) {
      return false;
    }
    if (this->hint_arr != other.hint_arr) {
      return false;
    }
    if (this->flood_arr != other.flood_arr) {
      return false;
    }
    if (this->trouble_arr != other.trouble_arr) {
      return false;
    }
    if (this->word_arr != other.word_arr) {
      return false;
    }
    return true;
  }
  bool operator!=(const MCD_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MCD_

// alias to use template instance with default allocator
using MCD =
  mcd_interfaces::msg::MCD_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mcd_interfaces

#endif  // MCD_INTERFACES__MSG__DETAIL__MCD__STRUCT_HPP_
