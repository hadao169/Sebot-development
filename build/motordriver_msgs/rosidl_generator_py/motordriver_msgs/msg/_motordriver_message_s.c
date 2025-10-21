// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from motordriver_msgs:msg/MotordriverMessage.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "motordriver_msgs/msg/detail/motordriver_message__struct.h"
#include "motordriver_msgs/msg/detail/motordriver_message__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool motordriver_msgs__msg__motordriver_message__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("motordriver_msgs.msg._motordriver_message.MotordriverMessage", full_classname_dest, 60) == 0);
  }
  motordriver_msgs__msg__MotordriverMessage * ros_message = _ros_message;
  {  // encoder1
    PyObject * field = PyObject_GetAttrString(_pymsg, "encoder1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->encoder1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // encoder2
    PyObject * field = PyObject_GetAttrString(_pymsg, "encoder2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->encoder2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // speed1
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->speed1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // speed2
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->speed2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * motordriver_msgs__msg__motordriver_message__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotordriverMessage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("motordriver_msgs.msg._motordriver_message");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotordriverMessage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  motordriver_msgs__msg__MotordriverMessage * ros_message = (motordriver_msgs__msg__MotordriverMessage *)raw_ros_message;
  {  // encoder1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->encoder1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "encoder1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // encoder2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->encoder2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "encoder2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->speed1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->speed2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
