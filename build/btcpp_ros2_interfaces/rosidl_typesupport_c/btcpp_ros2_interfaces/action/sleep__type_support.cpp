// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from btcpp_ros2_interfaces:action/Sleep.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "btcpp_ros2_interfaces/action/detail/sleep__struct.h"
#include "btcpp_ros2_interfaces/action/detail/sleep__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace btcpp_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Sleep_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Sleep_Goal_type_support_ids_t;

static const _Sleep_Goal_type_support_ids_t _Sleep_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Sleep_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Sleep_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Sleep_Goal_type_support_symbol_names_t _Sleep_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, btcpp_ros2_interfaces, action, Sleep_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, btcpp_ros2_interfaces, action, Sleep_Goal)),
  }
};

typedef struct _Sleep_Goal_type_support_data_t
{
  void * data[2];
} _Sleep_Goal_type_support_data_t;

static _Sleep_Goal_type_support_data_t _Sleep_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Sleep_Goal_message_typesupport_map = {
  2,
  "btcpp_ros2_interfaces",
  &_Sleep_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Sleep_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Sleep_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Sleep_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Sleep_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace btcpp_ros2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, btcpp_ros2_interfaces, action, Sleep_Goal)() {
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_c::Sleep_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "btcpp_ros2_interfaces/action/detail/sleep__struct.h"
// already included above
// #include "btcpp_ros2_interfaces/action/detail/sleep__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace btcpp_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Sleep_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Sleep_Result_type_support_ids_t;

static const _Sleep_Result_type_support_ids_t _Sleep_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Sleep_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Sleep_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Sleep_Result_type_support_symbol_names_t _Sleep_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, btcpp_ros2_interfaces, action, Sleep_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, btcpp_ros2_interfaces, action, Sleep_Result)),
  }
};

typedef struct _Sleep_Result_type_support_data_t
{
  void * data[2];
} _Sleep_Result_type_support_data_t;

static _Sleep_Result_type_support_data_t _Sleep_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Sleep_Result_message_typesupport_map = {
  2,
  "btcpp_ros2_interfaces",
  &_Sleep_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Sleep_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Sleep_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Sleep_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Sleep_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace btcpp_ros2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, btcpp_ros2_interfaces, action, Sleep_Result)() {
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_c::Sleep_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "btcpp_ros2_interfaces/action/detail/sleep__struct.h"
// already included above
// #include "btcpp_ros2_interfaces/action/detail/sleep__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace btcpp_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Sleep_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Sleep_Feedback_type_support_ids_t;

static const _Sleep_Feedback_type_support_ids_t _Sleep_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Sleep_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Sleep_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Sleep_Feedback_type_support_symbol_names_t _Sleep_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, btcpp_ros2_interfaces, action, Sleep_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, btcpp_ros2_interfaces, action, Sleep_Feedback)),
  }
};

typedef struct _Sleep_Feedback_type_support_data_t
{
  void * data[2];
} _Sleep_Feedback_type_support_data_t;

static _Sleep_Feedback_type_support_data_t _Sleep_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Sleep_Feedback_message_typesupport_map = {
  2,
  "btcpp_ros2_interfaces",
  &_Sleep_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Sleep_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Sleep_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Sleep_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Sleep_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace btcpp_ros2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, btcpp_ros2_interfaces, action, Sleep_Feedback)() {
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_c::Sleep_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "btcpp_ros2_interfaces/action/detail/sleep__struct.h"
// already included above
// #include "btcpp_ros2_interfaces/action/detail/sleep__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace btcpp_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Sleep_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Sleep_SendGoal_Request_type_support_ids_t;

static const _Sleep_SendGoal_Request_type_support_ids_t _Sleep_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Sleep_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Sleep_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Sleep_SendGoal_Request_type_support_symbol_names_t _Sleep_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, btcpp_ros2_interfaces, action, Sleep_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, btcpp_ros2_interfaces, action, Sleep_SendGoal_Request)),
  }
};

typedef struct _Sleep_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Sleep_SendGoal_Request_type_support_data_t;

static _Sleep_SendGoal_Request_type_support_data_t _Sleep_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Sleep_SendGoal_Request_message_typesupport_map = {
  2,
  "btcpp_ros2_interfaces",
  &_Sleep_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Sleep_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Sleep_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Sleep_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Sleep_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace btcpp_ros2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, btcpp_ros2_interfaces, action, Sleep_SendGoal_Request)() {
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_c::Sleep_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "btcpp_ros2_interfaces/action/detail/sleep__struct.h"
// already included above
// #include "btcpp_ros2_interfaces/action/detail/sleep__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace btcpp_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Sleep_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Sleep_SendGoal_Response_type_support_ids_t;

static const _Sleep_SendGoal_Response_type_support_ids_t _Sleep_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Sleep_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Sleep_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Sleep_SendGoal_Response_type_support_symbol_names_t _Sleep_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, btcpp_ros2_interfaces, action, Sleep_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, btcpp_ros2_interfaces, action, Sleep_SendGoal_Response)),
  }
};

typedef struct _Sleep_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Sleep_SendGoal_Response_type_support_data_t;

static _Sleep_SendGoal_Response_type_support_data_t _Sleep_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Sleep_SendGoal_Response_message_typesupport_map = {
  2,
  "btcpp_ros2_interfaces",
  &_Sleep_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Sleep_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Sleep_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Sleep_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Sleep_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace btcpp_ros2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, btcpp_ros2_interfaces, action, Sleep_SendGoal_Response)() {
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_c::Sleep_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "btcpp_ros2_interfaces/action/detail/sleep__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace btcpp_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Sleep_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Sleep_SendGoal_type_support_ids_t;

static const _Sleep_SendGoal_type_support_ids_t _Sleep_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Sleep_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Sleep_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Sleep_SendGoal_type_support_symbol_names_t _Sleep_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, btcpp_ros2_interfaces, action, Sleep_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, btcpp_ros2_interfaces, action, Sleep_SendGoal)),
  }
};

typedef struct _Sleep_SendGoal_type_support_data_t
{
  void * data[2];
} _Sleep_SendGoal_type_support_data_t;

static _Sleep_SendGoal_type_support_data_t _Sleep_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Sleep_SendGoal_service_typesupport_map = {
  2,
  "btcpp_ros2_interfaces",
  &_Sleep_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Sleep_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Sleep_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Sleep_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Sleep_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace btcpp_ros2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, btcpp_ros2_interfaces, action, Sleep_SendGoal)() {
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_c::Sleep_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "btcpp_ros2_interfaces/action/detail/sleep__struct.h"
// already included above
// #include "btcpp_ros2_interfaces/action/detail/sleep__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace btcpp_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Sleep_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Sleep_GetResult_Request_type_support_ids_t;

static const _Sleep_GetResult_Request_type_support_ids_t _Sleep_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Sleep_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Sleep_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Sleep_GetResult_Request_type_support_symbol_names_t _Sleep_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, btcpp_ros2_interfaces, action, Sleep_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, btcpp_ros2_interfaces, action, Sleep_GetResult_Request)),
  }
};

typedef struct _Sleep_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Sleep_GetResult_Request_type_support_data_t;

static _Sleep_GetResult_Request_type_support_data_t _Sleep_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Sleep_GetResult_Request_message_typesupport_map = {
  2,
  "btcpp_ros2_interfaces",
  &_Sleep_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Sleep_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Sleep_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Sleep_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Sleep_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace btcpp_ros2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, btcpp_ros2_interfaces, action, Sleep_GetResult_Request)() {
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_c::Sleep_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "btcpp_ros2_interfaces/action/detail/sleep__struct.h"
// already included above
// #include "btcpp_ros2_interfaces/action/detail/sleep__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace btcpp_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Sleep_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Sleep_GetResult_Response_type_support_ids_t;

static const _Sleep_GetResult_Response_type_support_ids_t _Sleep_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Sleep_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Sleep_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Sleep_GetResult_Response_type_support_symbol_names_t _Sleep_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, btcpp_ros2_interfaces, action, Sleep_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, btcpp_ros2_interfaces, action, Sleep_GetResult_Response)),
  }
};

typedef struct _Sleep_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Sleep_GetResult_Response_type_support_data_t;

static _Sleep_GetResult_Response_type_support_data_t _Sleep_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Sleep_GetResult_Response_message_typesupport_map = {
  2,
  "btcpp_ros2_interfaces",
  &_Sleep_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Sleep_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Sleep_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Sleep_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Sleep_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace btcpp_ros2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, btcpp_ros2_interfaces, action, Sleep_GetResult_Response)() {
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_c::Sleep_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "btcpp_ros2_interfaces/action/detail/sleep__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace btcpp_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Sleep_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Sleep_GetResult_type_support_ids_t;

static const _Sleep_GetResult_type_support_ids_t _Sleep_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Sleep_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Sleep_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Sleep_GetResult_type_support_symbol_names_t _Sleep_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, btcpp_ros2_interfaces, action, Sleep_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, btcpp_ros2_interfaces, action, Sleep_GetResult)),
  }
};

typedef struct _Sleep_GetResult_type_support_data_t
{
  void * data[2];
} _Sleep_GetResult_type_support_data_t;

static _Sleep_GetResult_type_support_data_t _Sleep_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Sleep_GetResult_service_typesupport_map = {
  2,
  "btcpp_ros2_interfaces",
  &_Sleep_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Sleep_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Sleep_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Sleep_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Sleep_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace btcpp_ros2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, btcpp_ros2_interfaces, action, Sleep_GetResult)() {
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_c::Sleep_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "btcpp_ros2_interfaces/action/detail/sleep__struct.h"
// already included above
// #include "btcpp_ros2_interfaces/action/detail/sleep__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace btcpp_ros2_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Sleep_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Sleep_FeedbackMessage_type_support_ids_t;

static const _Sleep_FeedbackMessage_type_support_ids_t _Sleep_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Sleep_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Sleep_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Sleep_FeedbackMessage_type_support_symbol_names_t _Sleep_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, btcpp_ros2_interfaces, action, Sleep_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, btcpp_ros2_interfaces, action, Sleep_FeedbackMessage)),
  }
};

typedef struct _Sleep_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Sleep_FeedbackMessage_type_support_data_t;

static _Sleep_FeedbackMessage_type_support_data_t _Sleep_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Sleep_FeedbackMessage_message_typesupport_map = {
  2,
  "btcpp_ros2_interfaces",
  &_Sleep_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Sleep_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Sleep_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Sleep_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Sleep_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace btcpp_ros2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, btcpp_ros2_interfaces, action, Sleep_FeedbackMessage)() {
  return &::btcpp_ros2_interfaces::action::rosidl_typesupport_c::Sleep_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "btcpp_ros2_interfaces/action/sleep.h"
// already included above
// #include "btcpp_ros2_interfaces/action/detail/sleep__type_support.h"

static rosidl_action_type_support_t _btcpp_ros2_interfaces__action__Sleep__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, btcpp_ros2_interfaces, action, Sleep)()
{
  // Thread-safe by always writing the same values to the static struct
  _btcpp_ros2_interfaces__action__Sleep__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, btcpp_ros2_interfaces, action, Sleep_SendGoal)();
  _btcpp_ros2_interfaces__action__Sleep__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, btcpp_ros2_interfaces, action, Sleep_GetResult)();
  _btcpp_ros2_interfaces__action__Sleep__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _btcpp_ros2_interfaces__action__Sleep__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, btcpp_ros2_interfaces, action, Sleep_FeedbackMessage)();
  _btcpp_ros2_interfaces__action__Sleep__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_btcpp_ros2_interfaces__action__Sleep__typesupport_c;
}

#ifdef __cplusplus
}
#endif
