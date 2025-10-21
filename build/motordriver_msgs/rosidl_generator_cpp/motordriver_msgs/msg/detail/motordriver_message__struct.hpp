// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motordriver_msgs:msg/MotordriverMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motordriver_msgs/msg/motordriver_message.hpp"


#ifndef MOTORDRIVER_MSGS__MSG__DETAIL__MOTORDRIVER_MESSAGE__STRUCT_HPP_
#define MOTORDRIVER_MSGS__MSG__DETAIL__MOTORDRIVER_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__motordriver_msgs__msg__MotordriverMessage __attribute__((deprecated))
#else
# define DEPRECATED__motordriver_msgs__msg__MotordriverMessage __declspec(deprecated)
#endif

namespace motordriver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotordriverMessage_
{
  using Type = MotordriverMessage_<ContainerAllocator>;

  explicit MotordriverMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->encoder1 = 0l;
      this->encoder2 = 0l;
      this->speed1 = 0l;
      this->speed2 = 0l;
    }
  }

  explicit MotordriverMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->encoder1 = 0l;
      this->encoder2 = 0l;
      this->speed1 = 0l;
      this->speed2 = 0l;
    }
  }

  // field types and members
  using _encoder1_type =
    int32_t;
  _encoder1_type encoder1;
  using _encoder2_type =
    int32_t;
  _encoder2_type encoder2;
  using _speed1_type =
    int32_t;
  _speed1_type speed1;
  using _speed2_type =
    int32_t;
  _speed2_type speed2;

  // setters for named parameter idiom
  Type & set__encoder1(
    const int32_t & _arg)
  {
    this->encoder1 = _arg;
    return *this;
  }
  Type & set__encoder2(
    const int32_t & _arg)
  {
    this->encoder2 = _arg;
    return *this;
  }
  Type & set__speed1(
    const int32_t & _arg)
  {
    this->speed1 = _arg;
    return *this;
  }
  Type & set__speed2(
    const int32_t & _arg)
  {
    this->speed2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motordriver_msgs::msg::MotordriverMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const motordriver_msgs::msg::MotordriverMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motordriver_msgs::msg::MotordriverMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motordriver_msgs::msg::MotordriverMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motordriver_msgs::msg::MotordriverMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motordriver_msgs::msg::MotordriverMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motordriver_msgs::msg::MotordriverMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motordriver_msgs::msg::MotordriverMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motordriver_msgs::msg::MotordriverMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motordriver_msgs::msg::MotordriverMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motordriver_msgs__msg__MotordriverMessage
    std::shared_ptr<motordriver_msgs::msg::MotordriverMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motordriver_msgs__msg__MotordriverMessage
    std::shared_ptr<motordriver_msgs::msg::MotordriverMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotordriverMessage_ & other) const
  {
    if (this->encoder1 != other.encoder1) {
      return false;
    }
    if (this->encoder2 != other.encoder2) {
      return false;
    }
    if (this->speed1 != other.speed1) {
      return false;
    }
    if (this->speed2 != other.speed2) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotordriverMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotordriverMessage_

// alias to use template instance with default allocator
using MotordriverMessage =
  motordriver_msgs::msg::MotordriverMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace motordriver_msgs

#endif  // MOTORDRIVER_MSGS__MSG__DETAIL__MOTORDRIVER_MESSAGE__STRUCT_HPP_
