// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motordriver_msgs:msg/MotordriverMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motordriver_msgs/msg/motordriver_message.hpp"


#ifndef MOTORDRIVER_MSGS__MSG__DETAIL__MOTORDRIVER_MESSAGE__TRAITS_HPP_
#define MOTORDRIVER_MSGS__MSG__DETAIL__MOTORDRIVER_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "motordriver_msgs/msg/detail/motordriver_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace motordriver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotordriverMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: encoder1
  {
    out << "encoder1: ";
    rosidl_generator_traits::value_to_yaml(msg.encoder1, out);
    out << ", ";
  }

  // member: encoder2
  {
    out << "encoder2: ";
    rosidl_generator_traits::value_to_yaml(msg.encoder2, out);
    out << ", ";
  }

  // member: speed1
  {
    out << "speed1: ";
    rosidl_generator_traits::value_to_yaml(msg.speed1, out);
    out << ", ";
  }

  // member: speed2
  {
    out << "speed2: ";
    rosidl_generator_traits::value_to_yaml(msg.speed2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotordriverMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: encoder1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "encoder1: ";
    rosidl_generator_traits::value_to_yaml(msg.encoder1, out);
    out << "\n";
  }

  // member: encoder2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "encoder2: ";
    rosidl_generator_traits::value_to_yaml(msg.encoder2, out);
    out << "\n";
  }

  // member: speed1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed1: ";
    rosidl_generator_traits::value_to_yaml(msg.speed1, out);
    out << "\n";
  }

  // member: speed2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed2: ";
    rosidl_generator_traits::value_to_yaml(msg.speed2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotordriverMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace motordriver_msgs

namespace rosidl_generator_traits
{

[[deprecated("use motordriver_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const motordriver_msgs::msg::MotordriverMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  motordriver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motordriver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const motordriver_msgs::msg::MotordriverMessage & msg)
{
  return motordriver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<motordriver_msgs::msg::MotordriverMessage>()
{
  return "motordriver_msgs::msg::MotordriverMessage";
}

template<>
inline const char * name<motordriver_msgs::msg::MotordriverMessage>()
{
  return "motordriver_msgs/msg/MotordriverMessage";
}

template<>
struct has_fixed_size<motordriver_msgs::msg::MotordriverMessage>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<motordriver_msgs::msg::MotordriverMessage>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<motordriver_msgs::msg::MotordriverMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOTORDRIVER_MSGS__MSG__DETAIL__MOTORDRIVER_MESSAGE__TRAITS_HPP_
