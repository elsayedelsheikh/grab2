// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from btcpp_ros2_interfaces:action/ExecuteTree.idl
// generated code does not contain a copyright notice
#include "btcpp_ros2_interfaces/action/detail/execute_tree__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `target_tree`
// Member `payload`
#include "rosidl_runtime_c/string_functions.h"

bool
btcpp_ros2_interfaces__action__ExecuteTree_Goal__init(btcpp_ros2_interfaces__action__ExecuteTree_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // target_tree
  if (!rosidl_runtime_c__String__init(&msg->target_tree)) {
    btcpp_ros2_interfaces__action__ExecuteTree_Goal__fini(msg);
    return false;
  }
  // payload
  if (!rosidl_runtime_c__String__init(&msg->payload)) {
    btcpp_ros2_interfaces__action__ExecuteTree_Goal__fini(msg);
    return false;
  }
  return true;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_Goal__fini(btcpp_ros2_interfaces__action__ExecuteTree_Goal * msg)
{
  if (!msg) {
    return;
  }
  // target_tree
  rosidl_runtime_c__String__fini(&msg->target_tree);
  // payload
  rosidl_runtime_c__String__fini(&msg->payload);
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_Goal__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_Goal * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_tree
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_tree), &(rhs->target_tree)))
  {
    return false;
  }
  // payload
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->payload), &(rhs->payload)))
  {
    return false;
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_Goal__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_Goal * input,
  btcpp_ros2_interfaces__action__ExecuteTree_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // target_tree
  if (!rosidl_runtime_c__String__copy(
      &(input->target_tree), &(output->target_tree)))
  {
    return false;
  }
  // payload
  if (!rosidl_runtime_c__String__copy(
      &(input->payload), &(output->payload)))
  {
    return false;
  }
  return true;
}

btcpp_ros2_interfaces__action__ExecuteTree_Goal *
btcpp_ros2_interfaces__action__ExecuteTree_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__ExecuteTree_Goal * msg = (btcpp_ros2_interfaces__action__ExecuteTree_Goal *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__ExecuteTree_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(btcpp_ros2_interfaces__action__ExecuteTree_Goal));
  bool success = btcpp_ros2_interfaces__action__ExecuteTree_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_Goal__destroy(btcpp_ros2_interfaces__action__ExecuteTree_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    btcpp_ros2_interfaces__action__ExecuteTree_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence__init(btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__ExecuteTree_Goal * data = NULL;

  if (size) {
    data = (btcpp_ros2_interfaces__action__ExecuteTree_Goal *)allocator.zero_allocate(size, sizeof(btcpp_ros2_interfaces__action__ExecuteTree_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = btcpp_ros2_interfaces__action__ExecuteTree_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        btcpp_ros2_interfaces__action__ExecuteTree_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence__fini(btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      btcpp_ros2_interfaces__action__ExecuteTree_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence *
btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence * array = (btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence__destroy(btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!btcpp_ros2_interfaces__action__ExecuteTree_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence * input,
  btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(btcpp_ros2_interfaces__action__ExecuteTree_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    btcpp_ros2_interfaces__action__ExecuteTree_Goal * data =
      (btcpp_ros2_interfaces__action__ExecuteTree_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!btcpp_ros2_interfaces__action__ExecuteTree_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          btcpp_ros2_interfaces__action__ExecuteTree_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!btcpp_ros2_interfaces__action__ExecuteTree_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `node_status`
#include "btcpp_ros2_interfaces/msg/detail/node_status__functions.h"
// Member `return_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
btcpp_ros2_interfaces__action__ExecuteTree_Result__init(btcpp_ros2_interfaces__action__ExecuteTree_Result * msg)
{
  if (!msg) {
    return false;
  }
  // node_status
  if (!btcpp_ros2_interfaces__msg__NodeStatus__init(&msg->node_status)) {
    btcpp_ros2_interfaces__action__ExecuteTree_Result__fini(msg);
    return false;
  }
  // return_message
  if (!rosidl_runtime_c__String__init(&msg->return_message)) {
    btcpp_ros2_interfaces__action__ExecuteTree_Result__fini(msg);
    return false;
  }
  return true;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_Result__fini(btcpp_ros2_interfaces__action__ExecuteTree_Result * msg)
{
  if (!msg) {
    return;
  }
  // node_status
  btcpp_ros2_interfaces__msg__NodeStatus__fini(&msg->node_status);
  // return_message
  rosidl_runtime_c__String__fini(&msg->return_message);
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_Result__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_Result * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_status
  if (!btcpp_ros2_interfaces__msg__NodeStatus__are_equal(
      &(lhs->node_status), &(rhs->node_status)))
  {
    return false;
  }
  // return_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->return_message), &(rhs->return_message)))
  {
    return false;
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_Result__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_Result * input,
  btcpp_ros2_interfaces__action__ExecuteTree_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // node_status
  if (!btcpp_ros2_interfaces__msg__NodeStatus__copy(
      &(input->node_status), &(output->node_status)))
  {
    return false;
  }
  // return_message
  if (!rosidl_runtime_c__String__copy(
      &(input->return_message), &(output->return_message)))
  {
    return false;
  }
  return true;
}

btcpp_ros2_interfaces__action__ExecuteTree_Result *
btcpp_ros2_interfaces__action__ExecuteTree_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__ExecuteTree_Result * msg = (btcpp_ros2_interfaces__action__ExecuteTree_Result *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__ExecuteTree_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(btcpp_ros2_interfaces__action__ExecuteTree_Result));
  bool success = btcpp_ros2_interfaces__action__ExecuteTree_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_Result__destroy(btcpp_ros2_interfaces__action__ExecuteTree_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    btcpp_ros2_interfaces__action__ExecuteTree_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence__init(btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__ExecuteTree_Result * data = NULL;

  if (size) {
    data = (btcpp_ros2_interfaces__action__ExecuteTree_Result *)allocator.zero_allocate(size, sizeof(btcpp_ros2_interfaces__action__ExecuteTree_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = btcpp_ros2_interfaces__action__ExecuteTree_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        btcpp_ros2_interfaces__action__ExecuteTree_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence__fini(btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      btcpp_ros2_interfaces__action__ExecuteTree_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence *
btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence * array = (btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence__destroy(btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!btcpp_ros2_interfaces__action__ExecuteTree_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence * input,
  btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(btcpp_ros2_interfaces__action__ExecuteTree_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    btcpp_ros2_interfaces__action__ExecuteTree_Result * data =
      (btcpp_ros2_interfaces__action__ExecuteTree_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!btcpp_ros2_interfaces__action__ExecuteTree_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          btcpp_ros2_interfaces__action__ExecuteTree_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!btcpp_ros2_interfaces__action__ExecuteTree_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__init(btcpp_ros2_interfaces__action__ExecuteTree_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    btcpp_ros2_interfaces__action__ExecuteTree_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__fini(btcpp_ros2_interfaces__action__ExecuteTree_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_Feedback * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_Feedback * input,
  btcpp_ros2_interfaces__action__ExecuteTree_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

btcpp_ros2_interfaces__action__ExecuteTree_Feedback *
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__ExecuteTree_Feedback * msg = (btcpp_ros2_interfaces__action__ExecuteTree_Feedback *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__ExecuteTree_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(btcpp_ros2_interfaces__action__ExecuteTree_Feedback));
  bool success = btcpp_ros2_interfaces__action__ExecuteTree_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__destroy(btcpp_ros2_interfaces__action__ExecuteTree_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    btcpp_ros2_interfaces__action__ExecuteTree_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence__init(btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__ExecuteTree_Feedback * data = NULL;

  if (size) {
    data = (btcpp_ros2_interfaces__action__ExecuteTree_Feedback *)allocator.zero_allocate(size, sizeof(btcpp_ros2_interfaces__action__ExecuteTree_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = btcpp_ros2_interfaces__action__ExecuteTree_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        btcpp_ros2_interfaces__action__ExecuteTree_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence__fini(btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      btcpp_ros2_interfaces__action__ExecuteTree_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence *
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence * array = (btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence__destroy(btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!btcpp_ros2_interfaces__action__ExecuteTree_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence * input,
  btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(btcpp_ros2_interfaces__action__ExecuteTree_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    btcpp_ros2_interfaces__action__ExecuteTree_Feedback * data =
      (btcpp_ros2_interfaces__action__ExecuteTree_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!btcpp_ros2_interfaces__action__ExecuteTree_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          btcpp_ros2_interfaces__action__ExecuteTree_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!btcpp_ros2_interfaces__action__ExecuteTree_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "btcpp_ros2_interfaces/action/detail/execute_tree__functions.h"

bool
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__init(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!btcpp_ros2_interfaces__action__ExecuteTree_Goal__init(&msg->goal)) {
    btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__fini(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  btcpp_ros2_interfaces__action__ExecuteTree_Goal__fini(&msg->goal);
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!btcpp_ros2_interfaces__action__ExecuteTree_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request * input,
  btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!btcpp_ros2_interfaces__action__ExecuteTree_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request *
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request * msg = (btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request));
  bool success = btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__destroy(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence__init(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request * data = NULL;

  if (size) {
    data = (btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request *)allocator.zero_allocate(size, sizeof(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence__fini(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence *
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence * array = (btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence__destroy(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence * input,
  btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request * data =
      (btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__init(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__fini(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response * input,
  btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response *
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response * msg = (btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response));
  bool success = btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__destroy(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence__init(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response * data = NULL;

  if (size) {
    data = (btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response *)allocator.zero_allocate(size, sizeof(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence__fini(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence *
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence * array = (btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence__destroy(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence * input,
  btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response * data =
      (btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__init(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__fini(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request * input,
  btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request *
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request * msg = (btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request));
  bool success = btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__destroy(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence__init(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request * data = NULL;

  if (size) {
    data = (btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request *)allocator.zero_allocate(size, sizeof(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence__fini(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence *
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence * array = (btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence__destroy(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence * input,
  btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request * data =
      (btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "btcpp_ros2_interfaces/action/detail/execute_tree__functions.h"

bool
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__init(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!btcpp_ros2_interfaces__action__ExecuteTree_Result__init(&msg->result)) {
    btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__fini(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  btcpp_ros2_interfaces__action__ExecuteTree_Result__fini(&msg->result);
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!btcpp_ros2_interfaces__action__ExecuteTree_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response * input,
  btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!btcpp_ros2_interfaces__action__ExecuteTree_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response *
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response * msg = (btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response));
  bool success = btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__destroy(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence__init(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response * data = NULL;

  if (size) {
    data = (btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response *)allocator.zero_allocate(size, sizeof(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence__fini(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence *
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence * array = (btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence__destroy(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence * input,
  btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response * data =
      (btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "btcpp_ros2_interfaces/action/detail/execute_tree__functions.h"

bool
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__init(btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!btcpp_ros2_interfaces__action__ExecuteTree_Feedback__init(&msg->feedback)) {
    btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__fini(btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  btcpp_ros2_interfaces__action__ExecuteTree_Feedback__fini(&msg->feedback);
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!btcpp_ros2_interfaces__action__ExecuteTree_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage * input,
  btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!btcpp_ros2_interfaces__action__ExecuteTree_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage *
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage * msg = (btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage));
  bool success = btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__destroy(btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence__init(btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage * data = NULL;

  if (size) {
    data = (btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage *)allocator.zero_allocate(size, sizeof(btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence__fini(btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence *
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence * array = (btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence__destroy(btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence * input,
  btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage * data =
      (btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
