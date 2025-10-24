// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from btcpp_ros2_interfaces:action/Sleep.idl
// generated code does not contain a copyright notice
#include "btcpp_ros2_interfaces/action/detail/sleep__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
btcpp_ros2_interfaces__action__Sleep_Goal__init(btcpp_ros2_interfaces__action__Sleep_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // msec_timeout
  return true;
}

void
btcpp_ros2_interfaces__action__Sleep_Goal__fini(btcpp_ros2_interfaces__action__Sleep_Goal * msg)
{
  if (!msg) {
    return;
  }
  // msec_timeout
}

bool
btcpp_ros2_interfaces__action__Sleep_Goal__are_equal(const btcpp_ros2_interfaces__action__Sleep_Goal * lhs, const btcpp_ros2_interfaces__action__Sleep_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // msec_timeout
  if (lhs->msec_timeout != rhs->msec_timeout) {
    return false;
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__Sleep_Goal__copy(
  const btcpp_ros2_interfaces__action__Sleep_Goal * input,
  btcpp_ros2_interfaces__action__Sleep_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // msec_timeout
  output->msec_timeout = input->msec_timeout;
  return true;
}

btcpp_ros2_interfaces__action__Sleep_Goal *
btcpp_ros2_interfaces__action__Sleep_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__Sleep_Goal * msg = (btcpp_ros2_interfaces__action__Sleep_Goal *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__Sleep_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(btcpp_ros2_interfaces__action__Sleep_Goal));
  bool success = btcpp_ros2_interfaces__action__Sleep_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
btcpp_ros2_interfaces__action__Sleep_Goal__destroy(btcpp_ros2_interfaces__action__Sleep_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    btcpp_ros2_interfaces__action__Sleep_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
btcpp_ros2_interfaces__action__Sleep_Goal__Sequence__init(btcpp_ros2_interfaces__action__Sleep_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__Sleep_Goal * data = NULL;

  if (size) {
    data = (btcpp_ros2_interfaces__action__Sleep_Goal *)allocator.zero_allocate(size, sizeof(btcpp_ros2_interfaces__action__Sleep_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = btcpp_ros2_interfaces__action__Sleep_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        btcpp_ros2_interfaces__action__Sleep_Goal__fini(&data[i - 1]);
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
btcpp_ros2_interfaces__action__Sleep_Goal__Sequence__fini(btcpp_ros2_interfaces__action__Sleep_Goal__Sequence * array)
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
      btcpp_ros2_interfaces__action__Sleep_Goal__fini(&array->data[i]);
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

btcpp_ros2_interfaces__action__Sleep_Goal__Sequence *
btcpp_ros2_interfaces__action__Sleep_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__Sleep_Goal__Sequence * array = (btcpp_ros2_interfaces__action__Sleep_Goal__Sequence *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__Sleep_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = btcpp_ros2_interfaces__action__Sleep_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
btcpp_ros2_interfaces__action__Sleep_Goal__Sequence__destroy(btcpp_ros2_interfaces__action__Sleep_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    btcpp_ros2_interfaces__action__Sleep_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
btcpp_ros2_interfaces__action__Sleep_Goal__Sequence__are_equal(const btcpp_ros2_interfaces__action__Sleep_Goal__Sequence * lhs, const btcpp_ros2_interfaces__action__Sleep_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!btcpp_ros2_interfaces__action__Sleep_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__Sleep_Goal__Sequence__copy(
  const btcpp_ros2_interfaces__action__Sleep_Goal__Sequence * input,
  btcpp_ros2_interfaces__action__Sleep_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(btcpp_ros2_interfaces__action__Sleep_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    btcpp_ros2_interfaces__action__Sleep_Goal * data =
      (btcpp_ros2_interfaces__action__Sleep_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!btcpp_ros2_interfaces__action__Sleep_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          btcpp_ros2_interfaces__action__Sleep_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!btcpp_ros2_interfaces__action__Sleep_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
btcpp_ros2_interfaces__action__Sleep_Result__init(btcpp_ros2_interfaces__action__Sleep_Result * msg)
{
  if (!msg) {
    return false;
  }
  // done
  return true;
}

void
btcpp_ros2_interfaces__action__Sleep_Result__fini(btcpp_ros2_interfaces__action__Sleep_Result * msg)
{
  if (!msg) {
    return;
  }
  // done
}

bool
btcpp_ros2_interfaces__action__Sleep_Result__are_equal(const btcpp_ros2_interfaces__action__Sleep_Result * lhs, const btcpp_ros2_interfaces__action__Sleep_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // done
  if (lhs->done != rhs->done) {
    return false;
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__Sleep_Result__copy(
  const btcpp_ros2_interfaces__action__Sleep_Result * input,
  btcpp_ros2_interfaces__action__Sleep_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // done
  output->done = input->done;
  return true;
}

btcpp_ros2_interfaces__action__Sleep_Result *
btcpp_ros2_interfaces__action__Sleep_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__Sleep_Result * msg = (btcpp_ros2_interfaces__action__Sleep_Result *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__Sleep_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(btcpp_ros2_interfaces__action__Sleep_Result));
  bool success = btcpp_ros2_interfaces__action__Sleep_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
btcpp_ros2_interfaces__action__Sleep_Result__destroy(btcpp_ros2_interfaces__action__Sleep_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    btcpp_ros2_interfaces__action__Sleep_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
btcpp_ros2_interfaces__action__Sleep_Result__Sequence__init(btcpp_ros2_interfaces__action__Sleep_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__Sleep_Result * data = NULL;

  if (size) {
    data = (btcpp_ros2_interfaces__action__Sleep_Result *)allocator.zero_allocate(size, sizeof(btcpp_ros2_interfaces__action__Sleep_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = btcpp_ros2_interfaces__action__Sleep_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        btcpp_ros2_interfaces__action__Sleep_Result__fini(&data[i - 1]);
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
btcpp_ros2_interfaces__action__Sleep_Result__Sequence__fini(btcpp_ros2_interfaces__action__Sleep_Result__Sequence * array)
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
      btcpp_ros2_interfaces__action__Sleep_Result__fini(&array->data[i]);
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

btcpp_ros2_interfaces__action__Sleep_Result__Sequence *
btcpp_ros2_interfaces__action__Sleep_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__Sleep_Result__Sequence * array = (btcpp_ros2_interfaces__action__Sleep_Result__Sequence *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__Sleep_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = btcpp_ros2_interfaces__action__Sleep_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
btcpp_ros2_interfaces__action__Sleep_Result__Sequence__destroy(btcpp_ros2_interfaces__action__Sleep_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    btcpp_ros2_interfaces__action__Sleep_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
btcpp_ros2_interfaces__action__Sleep_Result__Sequence__are_equal(const btcpp_ros2_interfaces__action__Sleep_Result__Sequence * lhs, const btcpp_ros2_interfaces__action__Sleep_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!btcpp_ros2_interfaces__action__Sleep_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__Sleep_Result__Sequence__copy(
  const btcpp_ros2_interfaces__action__Sleep_Result__Sequence * input,
  btcpp_ros2_interfaces__action__Sleep_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(btcpp_ros2_interfaces__action__Sleep_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    btcpp_ros2_interfaces__action__Sleep_Result * data =
      (btcpp_ros2_interfaces__action__Sleep_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!btcpp_ros2_interfaces__action__Sleep_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          btcpp_ros2_interfaces__action__Sleep_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!btcpp_ros2_interfaces__action__Sleep_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
btcpp_ros2_interfaces__action__Sleep_Feedback__init(btcpp_ros2_interfaces__action__Sleep_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // cycle
  return true;
}

void
btcpp_ros2_interfaces__action__Sleep_Feedback__fini(btcpp_ros2_interfaces__action__Sleep_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // cycle
}

bool
btcpp_ros2_interfaces__action__Sleep_Feedback__are_equal(const btcpp_ros2_interfaces__action__Sleep_Feedback * lhs, const btcpp_ros2_interfaces__action__Sleep_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cycle
  if (lhs->cycle != rhs->cycle) {
    return false;
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__Sleep_Feedback__copy(
  const btcpp_ros2_interfaces__action__Sleep_Feedback * input,
  btcpp_ros2_interfaces__action__Sleep_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // cycle
  output->cycle = input->cycle;
  return true;
}

btcpp_ros2_interfaces__action__Sleep_Feedback *
btcpp_ros2_interfaces__action__Sleep_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__Sleep_Feedback * msg = (btcpp_ros2_interfaces__action__Sleep_Feedback *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__Sleep_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(btcpp_ros2_interfaces__action__Sleep_Feedback));
  bool success = btcpp_ros2_interfaces__action__Sleep_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
btcpp_ros2_interfaces__action__Sleep_Feedback__destroy(btcpp_ros2_interfaces__action__Sleep_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    btcpp_ros2_interfaces__action__Sleep_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
btcpp_ros2_interfaces__action__Sleep_Feedback__Sequence__init(btcpp_ros2_interfaces__action__Sleep_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__Sleep_Feedback * data = NULL;

  if (size) {
    data = (btcpp_ros2_interfaces__action__Sleep_Feedback *)allocator.zero_allocate(size, sizeof(btcpp_ros2_interfaces__action__Sleep_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = btcpp_ros2_interfaces__action__Sleep_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        btcpp_ros2_interfaces__action__Sleep_Feedback__fini(&data[i - 1]);
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
btcpp_ros2_interfaces__action__Sleep_Feedback__Sequence__fini(btcpp_ros2_interfaces__action__Sleep_Feedback__Sequence * array)
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
      btcpp_ros2_interfaces__action__Sleep_Feedback__fini(&array->data[i]);
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

btcpp_ros2_interfaces__action__Sleep_Feedback__Sequence *
btcpp_ros2_interfaces__action__Sleep_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__Sleep_Feedback__Sequence * array = (btcpp_ros2_interfaces__action__Sleep_Feedback__Sequence *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__Sleep_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = btcpp_ros2_interfaces__action__Sleep_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
btcpp_ros2_interfaces__action__Sleep_Feedback__Sequence__destroy(btcpp_ros2_interfaces__action__Sleep_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    btcpp_ros2_interfaces__action__Sleep_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
btcpp_ros2_interfaces__action__Sleep_Feedback__Sequence__are_equal(const btcpp_ros2_interfaces__action__Sleep_Feedback__Sequence * lhs, const btcpp_ros2_interfaces__action__Sleep_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!btcpp_ros2_interfaces__action__Sleep_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__Sleep_Feedback__Sequence__copy(
  const btcpp_ros2_interfaces__action__Sleep_Feedback__Sequence * input,
  btcpp_ros2_interfaces__action__Sleep_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(btcpp_ros2_interfaces__action__Sleep_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    btcpp_ros2_interfaces__action__Sleep_Feedback * data =
      (btcpp_ros2_interfaces__action__Sleep_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!btcpp_ros2_interfaces__action__Sleep_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          btcpp_ros2_interfaces__action__Sleep_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!btcpp_ros2_interfaces__action__Sleep_Feedback__copy(
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
// #include "btcpp_ros2_interfaces/action/detail/sleep__functions.h"

bool
btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__init(btcpp_ros2_interfaces__action__Sleep_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!btcpp_ros2_interfaces__action__Sleep_Goal__init(&msg->goal)) {
    btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__fini(btcpp_ros2_interfaces__action__Sleep_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  btcpp_ros2_interfaces__action__Sleep_Goal__fini(&msg->goal);
}

bool
btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__are_equal(const btcpp_ros2_interfaces__action__Sleep_SendGoal_Request * lhs, const btcpp_ros2_interfaces__action__Sleep_SendGoal_Request * rhs)
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
  if (!btcpp_ros2_interfaces__action__Sleep_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__copy(
  const btcpp_ros2_interfaces__action__Sleep_SendGoal_Request * input,
  btcpp_ros2_interfaces__action__Sleep_SendGoal_Request * output)
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
  if (!btcpp_ros2_interfaces__action__Sleep_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

btcpp_ros2_interfaces__action__Sleep_SendGoal_Request *
btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__Sleep_SendGoal_Request * msg = (btcpp_ros2_interfaces__action__Sleep_SendGoal_Request *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__Sleep_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(btcpp_ros2_interfaces__action__Sleep_SendGoal_Request));
  bool success = btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__destroy(btcpp_ros2_interfaces__action__Sleep_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__Sequence__init(btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__Sleep_SendGoal_Request * data = NULL;

  if (size) {
    data = (btcpp_ros2_interfaces__action__Sleep_SendGoal_Request *)allocator.zero_allocate(size, sizeof(btcpp_ros2_interfaces__action__Sleep_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__fini(&data[i - 1]);
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
btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__Sequence__fini(btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__Sequence * array)
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
      btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__fini(&array->data[i]);
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

btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__Sequence *
btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__Sequence * array = (btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__Sequence *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__Sequence__destroy(btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__Sequence__are_equal(const btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__Sequence * lhs, const btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__Sequence__copy(
  const btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__Sequence * input,
  btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(btcpp_ros2_interfaces__action__Sleep_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    btcpp_ros2_interfaces__action__Sleep_SendGoal_Request * data =
      (btcpp_ros2_interfaces__action__Sleep_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!btcpp_ros2_interfaces__action__Sleep_SendGoal_Request__copy(
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
btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__init(btcpp_ros2_interfaces__action__Sleep_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__fini(btcpp_ros2_interfaces__action__Sleep_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__are_equal(const btcpp_ros2_interfaces__action__Sleep_SendGoal_Response * lhs, const btcpp_ros2_interfaces__action__Sleep_SendGoal_Response * rhs)
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
btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__copy(
  const btcpp_ros2_interfaces__action__Sleep_SendGoal_Response * input,
  btcpp_ros2_interfaces__action__Sleep_SendGoal_Response * output)
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

btcpp_ros2_interfaces__action__Sleep_SendGoal_Response *
btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__Sleep_SendGoal_Response * msg = (btcpp_ros2_interfaces__action__Sleep_SendGoal_Response *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__Sleep_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(btcpp_ros2_interfaces__action__Sleep_SendGoal_Response));
  bool success = btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__destroy(btcpp_ros2_interfaces__action__Sleep_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__Sequence__init(btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__Sleep_SendGoal_Response * data = NULL;

  if (size) {
    data = (btcpp_ros2_interfaces__action__Sleep_SendGoal_Response *)allocator.zero_allocate(size, sizeof(btcpp_ros2_interfaces__action__Sleep_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__fini(&data[i - 1]);
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
btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__Sequence__fini(btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__Sequence * array)
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
      btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__fini(&array->data[i]);
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

btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__Sequence *
btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__Sequence * array = (btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__Sequence *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__Sequence__destroy(btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__Sequence__are_equal(const btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__Sequence * lhs, const btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__Sequence__copy(
  const btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__Sequence * input,
  btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(btcpp_ros2_interfaces__action__Sleep_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    btcpp_ros2_interfaces__action__Sleep_SendGoal_Response * data =
      (btcpp_ros2_interfaces__action__Sleep_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!btcpp_ros2_interfaces__action__Sleep_SendGoal_Response__copy(
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
btcpp_ros2_interfaces__action__Sleep_GetResult_Request__init(btcpp_ros2_interfaces__action__Sleep_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    btcpp_ros2_interfaces__action__Sleep_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
btcpp_ros2_interfaces__action__Sleep_GetResult_Request__fini(btcpp_ros2_interfaces__action__Sleep_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
btcpp_ros2_interfaces__action__Sleep_GetResult_Request__are_equal(const btcpp_ros2_interfaces__action__Sleep_GetResult_Request * lhs, const btcpp_ros2_interfaces__action__Sleep_GetResult_Request * rhs)
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
btcpp_ros2_interfaces__action__Sleep_GetResult_Request__copy(
  const btcpp_ros2_interfaces__action__Sleep_GetResult_Request * input,
  btcpp_ros2_interfaces__action__Sleep_GetResult_Request * output)
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

btcpp_ros2_interfaces__action__Sleep_GetResult_Request *
btcpp_ros2_interfaces__action__Sleep_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__Sleep_GetResult_Request * msg = (btcpp_ros2_interfaces__action__Sleep_GetResult_Request *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__Sleep_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(btcpp_ros2_interfaces__action__Sleep_GetResult_Request));
  bool success = btcpp_ros2_interfaces__action__Sleep_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
btcpp_ros2_interfaces__action__Sleep_GetResult_Request__destroy(btcpp_ros2_interfaces__action__Sleep_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    btcpp_ros2_interfaces__action__Sleep_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
btcpp_ros2_interfaces__action__Sleep_GetResult_Request__Sequence__init(btcpp_ros2_interfaces__action__Sleep_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__Sleep_GetResult_Request * data = NULL;

  if (size) {
    data = (btcpp_ros2_interfaces__action__Sleep_GetResult_Request *)allocator.zero_allocate(size, sizeof(btcpp_ros2_interfaces__action__Sleep_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = btcpp_ros2_interfaces__action__Sleep_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        btcpp_ros2_interfaces__action__Sleep_GetResult_Request__fini(&data[i - 1]);
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
btcpp_ros2_interfaces__action__Sleep_GetResult_Request__Sequence__fini(btcpp_ros2_interfaces__action__Sleep_GetResult_Request__Sequence * array)
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
      btcpp_ros2_interfaces__action__Sleep_GetResult_Request__fini(&array->data[i]);
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

btcpp_ros2_interfaces__action__Sleep_GetResult_Request__Sequence *
btcpp_ros2_interfaces__action__Sleep_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__Sleep_GetResult_Request__Sequence * array = (btcpp_ros2_interfaces__action__Sleep_GetResult_Request__Sequence *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__Sleep_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = btcpp_ros2_interfaces__action__Sleep_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
btcpp_ros2_interfaces__action__Sleep_GetResult_Request__Sequence__destroy(btcpp_ros2_interfaces__action__Sleep_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    btcpp_ros2_interfaces__action__Sleep_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
btcpp_ros2_interfaces__action__Sleep_GetResult_Request__Sequence__are_equal(const btcpp_ros2_interfaces__action__Sleep_GetResult_Request__Sequence * lhs, const btcpp_ros2_interfaces__action__Sleep_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!btcpp_ros2_interfaces__action__Sleep_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__Sleep_GetResult_Request__Sequence__copy(
  const btcpp_ros2_interfaces__action__Sleep_GetResult_Request__Sequence * input,
  btcpp_ros2_interfaces__action__Sleep_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(btcpp_ros2_interfaces__action__Sleep_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    btcpp_ros2_interfaces__action__Sleep_GetResult_Request * data =
      (btcpp_ros2_interfaces__action__Sleep_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!btcpp_ros2_interfaces__action__Sleep_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          btcpp_ros2_interfaces__action__Sleep_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!btcpp_ros2_interfaces__action__Sleep_GetResult_Request__copy(
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
// #include "btcpp_ros2_interfaces/action/detail/sleep__functions.h"

bool
btcpp_ros2_interfaces__action__Sleep_GetResult_Response__init(btcpp_ros2_interfaces__action__Sleep_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!btcpp_ros2_interfaces__action__Sleep_Result__init(&msg->result)) {
    btcpp_ros2_interfaces__action__Sleep_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
btcpp_ros2_interfaces__action__Sleep_GetResult_Response__fini(btcpp_ros2_interfaces__action__Sleep_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  btcpp_ros2_interfaces__action__Sleep_Result__fini(&msg->result);
}

bool
btcpp_ros2_interfaces__action__Sleep_GetResult_Response__are_equal(const btcpp_ros2_interfaces__action__Sleep_GetResult_Response * lhs, const btcpp_ros2_interfaces__action__Sleep_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!btcpp_ros2_interfaces__action__Sleep_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__Sleep_GetResult_Response__copy(
  const btcpp_ros2_interfaces__action__Sleep_GetResult_Response * input,
  btcpp_ros2_interfaces__action__Sleep_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!btcpp_ros2_interfaces__action__Sleep_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

btcpp_ros2_interfaces__action__Sleep_GetResult_Response *
btcpp_ros2_interfaces__action__Sleep_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__Sleep_GetResult_Response * msg = (btcpp_ros2_interfaces__action__Sleep_GetResult_Response *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__Sleep_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(btcpp_ros2_interfaces__action__Sleep_GetResult_Response));
  bool success = btcpp_ros2_interfaces__action__Sleep_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
btcpp_ros2_interfaces__action__Sleep_GetResult_Response__destroy(btcpp_ros2_interfaces__action__Sleep_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    btcpp_ros2_interfaces__action__Sleep_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
btcpp_ros2_interfaces__action__Sleep_GetResult_Response__Sequence__init(btcpp_ros2_interfaces__action__Sleep_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__Sleep_GetResult_Response * data = NULL;

  if (size) {
    data = (btcpp_ros2_interfaces__action__Sleep_GetResult_Response *)allocator.zero_allocate(size, sizeof(btcpp_ros2_interfaces__action__Sleep_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = btcpp_ros2_interfaces__action__Sleep_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        btcpp_ros2_interfaces__action__Sleep_GetResult_Response__fini(&data[i - 1]);
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
btcpp_ros2_interfaces__action__Sleep_GetResult_Response__Sequence__fini(btcpp_ros2_interfaces__action__Sleep_GetResult_Response__Sequence * array)
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
      btcpp_ros2_interfaces__action__Sleep_GetResult_Response__fini(&array->data[i]);
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

btcpp_ros2_interfaces__action__Sleep_GetResult_Response__Sequence *
btcpp_ros2_interfaces__action__Sleep_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__Sleep_GetResult_Response__Sequence * array = (btcpp_ros2_interfaces__action__Sleep_GetResult_Response__Sequence *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__Sleep_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = btcpp_ros2_interfaces__action__Sleep_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
btcpp_ros2_interfaces__action__Sleep_GetResult_Response__Sequence__destroy(btcpp_ros2_interfaces__action__Sleep_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    btcpp_ros2_interfaces__action__Sleep_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
btcpp_ros2_interfaces__action__Sleep_GetResult_Response__Sequence__are_equal(const btcpp_ros2_interfaces__action__Sleep_GetResult_Response__Sequence * lhs, const btcpp_ros2_interfaces__action__Sleep_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!btcpp_ros2_interfaces__action__Sleep_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__Sleep_GetResult_Response__Sequence__copy(
  const btcpp_ros2_interfaces__action__Sleep_GetResult_Response__Sequence * input,
  btcpp_ros2_interfaces__action__Sleep_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(btcpp_ros2_interfaces__action__Sleep_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    btcpp_ros2_interfaces__action__Sleep_GetResult_Response * data =
      (btcpp_ros2_interfaces__action__Sleep_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!btcpp_ros2_interfaces__action__Sleep_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          btcpp_ros2_interfaces__action__Sleep_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!btcpp_ros2_interfaces__action__Sleep_GetResult_Response__copy(
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
// #include "btcpp_ros2_interfaces/action/detail/sleep__functions.h"

bool
btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__init(btcpp_ros2_interfaces__action__Sleep_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!btcpp_ros2_interfaces__action__Sleep_Feedback__init(&msg->feedback)) {
    btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__fini(btcpp_ros2_interfaces__action__Sleep_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  btcpp_ros2_interfaces__action__Sleep_Feedback__fini(&msg->feedback);
}

bool
btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__are_equal(const btcpp_ros2_interfaces__action__Sleep_FeedbackMessage * lhs, const btcpp_ros2_interfaces__action__Sleep_FeedbackMessage * rhs)
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
  if (!btcpp_ros2_interfaces__action__Sleep_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__copy(
  const btcpp_ros2_interfaces__action__Sleep_FeedbackMessage * input,
  btcpp_ros2_interfaces__action__Sleep_FeedbackMessage * output)
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
  if (!btcpp_ros2_interfaces__action__Sleep_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

btcpp_ros2_interfaces__action__Sleep_FeedbackMessage *
btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__Sleep_FeedbackMessage * msg = (btcpp_ros2_interfaces__action__Sleep_FeedbackMessage *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__Sleep_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(btcpp_ros2_interfaces__action__Sleep_FeedbackMessage));
  bool success = btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__destroy(btcpp_ros2_interfaces__action__Sleep_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__Sequence__init(btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__Sleep_FeedbackMessage * data = NULL;

  if (size) {
    data = (btcpp_ros2_interfaces__action__Sleep_FeedbackMessage *)allocator.zero_allocate(size, sizeof(btcpp_ros2_interfaces__action__Sleep_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__fini(&data[i - 1]);
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
btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__Sequence__fini(btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__Sequence * array)
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
      btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__fini(&array->data[i]);
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

btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__Sequence *
btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__Sequence * array = (btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__Sequence *)allocator.allocate(sizeof(btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__Sequence__destroy(btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__Sequence__are_equal(const btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__Sequence * lhs, const btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__Sequence__copy(
  const btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__Sequence * input,
  btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(btcpp_ros2_interfaces__action__Sleep_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    btcpp_ros2_interfaces__action__Sleep_FeedbackMessage * data =
      (btcpp_ros2_interfaces__action__Sleep_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!btcpp_ros2_interfaces__action__Sleep_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
