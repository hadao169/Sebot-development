// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from motordriver_msgs:msg/MotordriverMessage.idl
// generated code does not contain a copyright notice
#include "motordriver_msgs/msg/detail/motordriver_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "motordriver_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "motordriver_msgs/msg/detail/motordriver_message__struct.h"
#include "motordriver_msgs/msg/detail/motordriver_message__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MotordriverMessage__ros_msg_type = motordriver_msgs__msg__MotordriverMessage;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motordriver_msgs
bool cdr_serialize_motordriver_msgs__msg__MotordriverMessage(
  const motordriver_msgs__msg__MotordriverMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: encoder1
  {
    cdr << ros_message->encoder1;
  }

  // Field name: encoder2
  {
    cdr << ros_message->encoder2;
  }

  // Field name: speed1
  {
    cdr << ros_message->speed1;
  }

  // Field name: speed2
  {
    cdr << ros_message->speed2;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motordriver_msgs
bool cdr_deserialize_motordriver_msgs__msg__MotordriverMessage(
  eprosima::fastcdr::Cdr & cdr,
  motordriver_msgs__msg__MotordriverMessage * ros_message)
{
  // Field name: encoder1
  {
    cdr >> ros_message->encoder1;
  }

  // Field name: encoder2
  {
    cdr >> ros_message->encoder2;
  }

  // Field name: speed1
  {
    cdr >> ros_message->speed1;
  }

  // Field name: speed2
  {
    cdr >> ros_message->speed2;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motordriver_msgs
size_t get_serialized_size_motordriver_msgs__msg__MotordriverMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotordriverMessage__ros_msg_type * ros_message = static_cast<const _MotordriverMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: encoder1
  {
    size_t item_size = sizeof(ros_message->encoder1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: encoder2
  {
    size_t item_size = sizeof(ros_message->encoder2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: speed1
  {
    size_t item_size = sizeof(ros_message->speed1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: speed2
  {
    size_t item_size = sizeof(ros_message->speed2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motordriver_msgs
size_t max_serialized_size_motordriver_msgs__msg__MotordriverMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: encoder1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: encoder2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: speed1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: speed2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = motordriver_msgs__msg__MotordriverMessage;
    is_plain =
      (
      offsetof(DataType, speed2) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motordriver_msgs
bool cdr_serialize_key_motordriver_msgs__msg__MotordriverMessage(
  const motordriver_msgs__msg__MotordriverMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: encoder1
  {
    cdr << ros_message->encoder1;
  }

  // Field name: encoder2
  {
    cdr << ros_message->encoder2;
  }

  // Field name: speed1
  {
    cdr << ros_message->speed1;
  }

  // Field name: speed2
  {
    cdr << ros_message->speed2;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motordriver_msgs
size_t get_serialized_size_key_motordriver_msgs__msg__MotordriverMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotordriverMessage__ros_msg_type * ros_message = static_cast<const _MotordriverMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: encoder1
  {
    size_t item_size = sizeof(ros_message->encoder1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: encoder2
  {
    size_t item_size = sizeof(ros_message->encoder2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: speed1
  {
    size_t item_size = sizeof(ros_message->speed1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: speed2
  {
    size_t item_size = sizeof(ros_message->speed2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motordriver_msgs
size_t max_serialized_size_key_motordriver_msgs__msg__MotordriverMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: encoder1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: encoder2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: speed1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: speed2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = motordriver_msgs__msg__MotordriverMessage;
    is_plain =
      (
      offsetof(DataType, speed2) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _MotordriverMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const motordriver_msgs__msg__MotordriverMessage * ros_message = static_cast<const motordriver_msgs__msg__MotordriverMessage *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_motordriver_msgs__msg__MotordriverMessage(ros_message, cdr);
}

static bool _MotordriverMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  motordriver_msgs__msg__MotordriverMessage * ros_message = static_cast<motordriver_msgs__msg__MotordriverMessage *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_motordriver_msgs__msg__MotordriverMessage(cdr, ros_message);
}

static uint32_t _MotordriverMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_motordriver_msgs__msg__MotordriverMessage(
      untyped_ros_message, 0));
}

static size_t _MotordriverMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_motordriver_msgs__msg__MotordriverMessage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MotordriverMessage = {
  "motordriver_msgs::msg",
  "MotordriverMessage",
  _MotordriverMessage__cdr_serialize,
  _MotordriverMessage__cdr_deserialize,
  _MotordriverMessage__get_serialized_size,
  _MotordriverMessage__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MotordriverMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotordriverMessage,
  get_message_typesupport_handle_function,
  &motordriver_msgs__msg__MotordriverMessage__get_type_hash,
  &motordriver_msgs__msg__MotordriverMessage__get_type_description,
  &motordriver_msgs__msg__MotordriverMessage__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motordriver_msgs, msg, MotordriverMessage)() {
  return &_MotordriverMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
