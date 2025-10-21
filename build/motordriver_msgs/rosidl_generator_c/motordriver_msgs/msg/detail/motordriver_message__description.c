// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from motordriver_msgs:msg/MotordriverMessage.idl
// generated code does not contain a copyright notice

#include "motordriver_msgs/msg/detail/motordriver_message__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_motordriver_msgs
const rosidl_type_hash_t *
motordriver_msgs__msg__MotordriverMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xee, 0x39, 0x60, 0x0f, 0x12, 0x39, 0xfb, 0x5a,
      0x5c, 0xc5, 0xf7, 0xbb, 0xed, 0xfa, 0xea, 0xe7,
      0x2c, 0x27, 0xd5, 0x4e, 0xe6, 0xb6, 0x06, 0x0e,
      0xb9, 0x12, 0x7f, 0x01, 0x91, 0x04, 0x65, 0x7f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char motordriver_msgs__msg__MotordriverMessage__TYPE_NAME[] = "motordriver_msgs/msg/MotordriverMessage";

// Define type names, field names, and default values
static char motordriver_msgs__msg__MotordriverMessage__FIELD_NAME__encoder1[] = "encoder1";
static char motordriver_msgs__msg__MotordriverMessage__FIELD_NAME__encoder2[] = "encoder2";
static char motordriver_msgs__msg__MotordriverMessage__FIELD_NAME__speed1[] = "speed1";
static char motordriver_msgs__msg__MotordriverMessage__FIELD_NAME__speed2[] = "speed2";

static rosidl_runtime_c__type_description__Field motordriver_msgs__msg__MotordriverMessage__FIELDS[] = {
  {
    {motordriver_msgs__msg__MotordriverMessage__FIELD_NAME__encoder1, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motordriver_msgs__msg__MotordriverMessage__FIELD_NAME__encoder2, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motordriver_msgs__msg__MotordriverMessage__FIELD_NAME__speed1, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motordriver_msgs__msg__MotordriverMessage__FIELD_NAME__speed2, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
motordriver_msgs__msg__MotordriverMessage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motordriver_msgs__msg__MotordriverMessage__TYPE_NAME, 39, 39},
      {motordriver_msgs__msg__MotordriverMessage__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 encoder1\n"
  "int32 encoder2\n"
  "int32 speed1\n"
  "int32 speed2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
motordriver_msgs__msg__MotordriverMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motordriver_msgs__msg__MotordriverMessage__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 55, 55},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motordriver_msgs__msg__MotordriverMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motordriver_msgs__msg__MotordriverMessage__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
