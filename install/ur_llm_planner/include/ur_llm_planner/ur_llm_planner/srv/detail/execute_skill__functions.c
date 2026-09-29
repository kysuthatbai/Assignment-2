// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ur_llm_planner:srv/ExecuteSkill.idl
// generated code does not contain a copyright notice
#include "ur_llm_planner/srv/detail/execute_skill__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `skill`
// Member `object`
// Member `zone`
#include "rosidl_runtime_c/string_functions.h"

bool
ur_llm_planner__srv__ExecuteSkill_Request__init(ur_llm_planner__srv__ExecuteSkill_Request * msg)
{
  if (!msg) {
    return false;
  }
  // skill
  if (!rosidl_runtime_c__String__init(&msg->skill)) {
    ur_llm_planner__srv__ExecuteSkill_Request__fini(msg);
    return false;
  }
  // object
  if (!rosidl_runtime_c__String__init(&msg->object)) {
    ur_llm_planner__srv__ExecuteSkill_Request__fini(msg);
    return false;
  }
  // zone
  if (!rosidl_runtime_c__String__init(&msg->zone)) {
    ur_llm_planner__srv__ExecuteSkill_Request__fini(msg);
    return false;
  }
  return true;
}

void
ur_llm_planner__srv__ExecuteSkill_Request__fini(ur_llm_planner__srv__ExecuteSkill_Request * msg)
{
  if (!msg) {
    return;
  }
  // skill
  rosidl_runtime_c__String__fini(&msg->skill);
  // object
  rosidl_runtime_c__String__fini(&msg->object);
  // zone
  rosidl_runtime_c__String__fini(&msg->zone);
}

bool
ur_llm_planner__srv__ExecuteSkill_Request__are_equal(const ur_llm_planner__srv__ExecuteSkill_Request * lhs, const ur_llm_planner__srv__ExecuteSkill_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // skill
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->skill), &(rhs->skill)))
  {
    return false;
  }
  // object
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object), &(rhs->object)))
  {
    return false;
  }
  // zone
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->zone), &(rhs->zone)))
  {
    return false;
  }
  return true;
}

bool
ur_llm_planner__srv__ExecuteSkill_Request__copy(
  const ur_llm_planner__srv__ExecuteSkill_Request * input,
  ur_llm_planner__srv__ExecuteSkill_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // skill
  if (!rosidl_runtime_c__String__copy(
      &(input->skill), &(output->skill)))
  {
    return false;
  }
  // object
  if (!rosidl_runtime_c__String__copy(
      &(input->object), &(output->object)))
  {
    return false;
  }
  // zone
  if (!rosidl_runtime_c__String__copy(
      &(input->zone), &(output->zone)))
  {
    return false;
  }
  return true;
}

ur_llm_planner__srv__ExecuteSkill_Request *
ur_llm_planner__srv__ExecuteSkill_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_llm_planner__srv__ExecuteSkill_Request * msg = (ur_llm_planner__srv__ExecuteSkill_Request *)allocator.allocate(sizeof(ur_llm_planner__srv__ExecuteSkill_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_llm_planner__srv__ExecuteSkill_Request));
  bool success = ur_llm_planner__srv__ExecuteSkill_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ur_llm_planner__srv__ExecuteSkill_Request__destroy(ur_llm_planner__srv__ExecuteSkill_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ur_llm_planner__srv__ExecuteSkill_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ur_llm_planner__srv__ExecuteSkill_Request__Sequence__init(ur_llm_planner__srv__ExecuteSkill_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_llm_planner__srv__ExecuteSkill_Request * data = NULL;

  if (size) {
    data = (ur_llm_planner__srv__ExecuteSkill_Request *)allocator.zero_allocate(size, sizeof(ur_llm_planner__srv__ExecuteSkill_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_llm_planner__srv__ExecuteSkill_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_llm_planner__srv__ExecuteSkill_Request__fini(&data[i - 1]);
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
ur_llm_planner__srv__ExecuteSkill_Request__Sequence__fini(ur_llm_planner__srv__ExecuteSkill_Request__Sequence * array)
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
      ur_llm_planner__srv__ExecuteSkill_Request__fini(&array->data[i]);
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

ur_llm_planner__srv__ExecuteSkill_Request__Sequence *
ur_llm_planner__srv__ExecuteSkill_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_llm_planner__srv__ExecuteSkill_Request__Sequence * array = (ur_llm_planner__srv__ExecuteSkill_Request__Sequence *)allocator.allocate(sizeof(ur_llm_planner__srv__ExecuteSkill_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ur_llm_planner__srv__ExecuteSkill_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ur_llm_planner__srv__ExecuteSkill_Request__Sequence__destroy(ur_llm_planner__srv__ExecuteSkill_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ur_llm_planner__srv__ExecuteSkill_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ur_llm_planner__srv__ExecuteSkill_Request__Sequence__are_equal(const ur_llm_planner__srv__ExecuteSkill_Request__Sequence * lhs, const ur_llm_planner__srv__ExecuteSkill_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur_llm_planner__srv__ExecuteSkill_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur_llm_planner__srv__ExecuteSkill_Request__Sequence__copy(
  const ur_llm_planner__srv__ExecuteSkill_Request__Sequence * input,
  ur_llm_planner__srv__ExecuteSkill_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur_llm_planner__srv__ExecuteSkill_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ur_llm_planner__srv__ExecuteSkill_Request * data =
      (ur_llm_planner__srv__ExecuteSkill_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur_llm_planner__srv__ExecuteSkill_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ur_llm_planner__srv__ExecuteSkill_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ur_llm_planner__srv__ExecuteSkill_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
ur_llm_planner__srv__ExecuteSkill_Response__init(ur_llm_planner__srv__ExecuteSkill_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    ur_llm_planner__srv__ExecuteSkill_Response__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    ur_llm_planner__srv__ExecuteSkill_Response__fini(msg);
    return false;
  }
  return true;
}

void
ur_llm_planner__srv__ExecuteSkill_Response__fini(ur_llm_planner__srv__ExecuteSkill_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  rosidl_runtime_c__String__fini(&msg->status);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
ur_llm_planner__srv__ExecuteSkill_Response__are_equal(const ur_llm_planner__srv__ExecuteSkill_Response * lhs, const ur_llm_planner__srv__ExecuteSkill_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
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
ur_llm_planner__srv__ExecuteSkill_Response__copy(
  const ur_llm_planner__srv__ExecuteSkill_Response * input,
  ur_llm_planner__srv__ExecuteSkill_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
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

ur_llm_planner__srv__ExecuteSkill_Response *
ur_llm_planner__srv__ExecuteSkill_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_llm_planner__srv__ExecuteSkill_Response * msg = (ur_llm_planner__srv__ExecuteSkill_Response *)allocator.allocate(sizeof(ur_llm_planner__srv__ExecuteSkill_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_llm_planner__srv__ExecuteSkill_Response));
  bool success = ur_llm_planner__srv__ExecuteSkill_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ur_llm_planner__srv__ExecuteSkill_Response__destroy(ur_llm_planner__srv__ExecuteSkill_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ur_llm_planner__srv__ExecuteSkill_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ur_llm_planner__srv__ExecuteSkill_Response__Sequence__init(ur_llm_planner__srv__ExecuteSkill_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_llm_planner__srv__ExecuteSkill_Response * data = NULL;

  if (size) {
    data = (ur_llm_planner__srv__ExecuteSkill_Response *)allocator.zero_allocate(size, sizeof(ur_llm_planner__srv__ExecuteSkill_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_llm_planner__srv__ExecuteSkill_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_llm_planner__srv__ExecuteSkill_Response__fini(&data[i - 1]);
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
ur_llm_planner__srv__ExecuteSkill_Response__Sequence__fini(ur_llm_planner__srv__ExecuteSkill_Response__Sequence * array)
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
      ur_llm_planner__srv__ExecuteSkill_Response__fini(&array->data[i]);
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

ur_llm_planner__srv__ExecuteSkill_Response__Sequence *
ur_llm_planner__srv__ExecuteSkill_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_llm_planner__srv__ExecuteSkill_Response__Sequence * array = (ur_llm_planner__srv__ExecuteSkill_Response__Sequence *)allocator.allocate(sizeof(ur_llm_planner__srv__ExecuteSkill_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ur_llm_planner__srv__ExecuteSkill_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ur_llm_planner__srv__ExecuteSkill_Response__Sequence__destroy(ur_llm_planner__srv__ExecuteSkill_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ur_llm_planner__srv__ExecuteSkill_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ur_llm_planner__srv__ExecuteSkill_Response__Sequence__are_equal(const ur_llm_planner__srv__ExecuteSkill_Response__Sequence * lhs, const ur_llm_planner__srv__ExecuteSkill_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur_llm_planner__srv__ExecuteSkill_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur_llm_planner__srv__ExecuteSkill_Response__Sequence__copy(
  const ur_llm_planner__srv__ExecuteSkill_Response__Sequence * input,
  ur_llm_planner__srv__ExecuteSkill_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur_llm_planner__srv__ExecuteSkill_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ur_llm_planner__srv__ExecuteSkill_Response * data =
      (ur_llm_planner__srv__ExecuteSkill_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur_llm_planner__srv__ExecuteSkill_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ur_llm_planner__srv__ExecuteSkill_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ur_llm_planner__srv__ExecuteSkill_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
