# generated from rosidl_generator_py/resource/_idl.py.em
# with input from grab2_msgs:action/GetIsaacGrasp.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetIsaacGrasp_Goal(type):
    """Metaclass of message 'GetIsaacGrasp_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('grab2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grab2_msgs.action.GetIsaacGrasp_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__get_isaac_grasp__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__get_isaac_grasp__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__get_isaac_grasp__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__get_isaac_grasp__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__get_isaac_grasp__goal

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetIsaacGrasp_Goal(metaclass=Metaclass_GetIsaacGrasp_Goal):
    """Message class 'GetIsaacGrasp_Goal'."""

    __slots__ = [
        '_object_pose',
        '_isaac_grasp',
    ]

    _fields_and_field_types = {
        'object_pose': 'geometry_msgs/PoseStamped',
        'isaac_grasp': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PoseStamped
        self.object_pose = kwargs.get('object_pose', PoseStamped())
        self.isaac_grasp = kwargs.get('isaac_grasp', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.object_pose != other.object_pose:
            return False
        if self.isaac_grasp != other.isaac_grasp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def object_pose(self):
        """Message field 'object_pose'."""
        return self._object_pose

    @object_pose.setter
    def object_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'object_pose' field must be a sub message of type 'PoseStamped'"
        self._object_pose = value

    @builtins.property
    def isaac_grasp(self):
        """Message field 'isaac_grasp'."""
        return self._isaac_grasp

    @isaac_grasp.setter
    def isaac_grasp(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'isaac_grasp' field must be of type 'str'"
        self._isaac_grasp = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetIsaacGrasp_Result(type):
    """Metaclass of message 'GetIsaacGrasp_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('grab2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grab2_msgs.action.GetIsaacGrasp_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__get_isaac_grasp__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__get_isaac_grasp__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__get_isaac_grasp__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__get_isaac_grasp__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__get_isaac_grasp__result

            from moveit_msgs.msg import Grasp
            if Grasp.__class__._TYPE_SUPPORT is None:
                Grasp.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetIsaacGrasp_Result(metaclass=Metaclass_GetIsaacGrasp_Result):
    """Message class 'GetIsaacGrasp_Result'."""

    __slots__ = [
        '_grasps',
    ]

    _fields_and_field_types = {
        'grasps': 'sequence<moveit_msgs/Grasp>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'Grasp')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.grasps = kwargs.get('grasps', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.grasps != other.grasps:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def grasps(self):
        """Message field 'grasps'."""
        return self._grasps

    @grasps.setter
    def grasps(self, value):
        if __debug__:
            from moveit_msgs.msg import Grasp
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Grasp) for v in value) and
                 True), \
                "The 'grasps' field must be a set or sequence and each value of type 'Grasp'"
        self._grasps = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GetIsaacGrasp_Feedback(type):
    """Metaclass of message 'GetIsaacGrasp_Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('grab2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grab2_msgs.action.GetIsaacGrasp_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__get_isaac_grasp__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__get_isaac_grasp__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__get_isaac_grasp__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__get_isaac_grasp__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__get_isaac_grasp__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetIsaacGrasp_Feedback(metaclass=Metaclass_GetIsaacGrasp_Feedback):
    """Message class 'GetIsaacGrasp_Feedback'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetIsaacGrasp_SendGoal_Request(type):
    """Metaclass of message 'GetIsaacGrasp_SendGoal_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('grab2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grab2_msgs.action.GetIsaacGrasp_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__get_isaac_grasp__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__get_isaac_grasp__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__get_isaac_grasp__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__get_isaac_grasp__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__get_isaac_grasp__send_goal__request

            from grab2_msgs.action import GetIsaacGrasp
            if GetIsaacGrasp.Goal.__class__._TYPE_SUPPORT is None:
                GetIsaacGrasp.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetIsaacGrasp_SendGoal_Request(metaclass=Metaclass_GetIsaacGrasp_SendGoal_Request):
    """Message class 'GetIsaacGrasp_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'grab2_msgs/GetIsaacGrasp_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['grab2_msgs', 'action'], 'GetIsaacGrasp_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from grab2_msgs.action._get_isaac_grasp import GetIsaacGrasp_Goal
        self.goal = kwargs.get('goal', GetIsaacGrasp_Goal())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from grab2_msgs.action._get_isaac_grasp import GetIsaacGrasp_Goal
            assert \
                isinstance(value, GetIsaacGrasp_Goal), \
                "The 'goal' field must be a sub message of type 'GetIsaacGrasp_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetIsaacGrasp_SendGoal_Response(type):
    """Metaclass of message 'GetIsaacGrasp_SendGoal_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('grab2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grab2_msgs.action.GetIsaacGrasp_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__get_isaac_grasp__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__get_isaac_grasp__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__get_isaac_grasp__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__get_isaac_grasp__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__get_isaac_grasp__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetIsaacGrasp_SendGoal_Response(metaclass=Metaclass_GetIsaacGrasp_SendGoal_Response):
    """Message class 'GetIsaacGrasp_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_GetIsaacGrasp_SendGoal(type):
    """Metaclass of service 'GetIsaacGrasp_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('grab2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grab2_msgs.action.GetIsaacGrasp_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__get_isaac_grasp__send_goal

            from grab2_msgs.action import _get_isaac_grasp
            if _get_isaac_grasp.Metaclass_GetIsaacGrasp_SendGoal_Request._TYPE_SUPPORT is None:
                _get_isaac_grasp.Metaclass_GetIsaacGrasp_SendGoal_Request.__import_type_support__()
            if _get_isaac_grasp.Metaclass_GetIsaacGrasp_SendGoal_Response._TYPE_SUPPORT is None:
                _get_isaac_grasp.Metaclass_GetIsaacGrasp_SendGoal_Response.__import_type_support__()


class GetIsaacGrasp_SendGoal(metaclass=Metaclass_GetIsaacGrasp_SendGoal):
    from grab2_msgs.action._get_isaac_grasp import GetIsaacGrasp_SendGoal_Request as Request
    from grab2_msgs.action._get_isaac_grasp import GetIsaacGrasp_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetIsaacGrasp_GetResult_Request(type):
    """Metaclass of message 'GetIsaacGrasp_GetResult_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('grab2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grab2_msgs.action.GetIsaacGrasp_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__get_isaac_grasp__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__get_isaac_grasp__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__get_isaac_grasp__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__get_isaac_grasp__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__get_isaac_grasp__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetIsaacGrasp_GetResult_Request(metaclass=Metaclass_GetIsaacGrasp_GetResult_Request):
    """Message class 'GetIsaacGrasp_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetIsaacGrasp_GetResult_Response(type):
    """Metaclass of message 'GetIsaacGrasp_GetResult_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('grab2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grab2_msgs.action.GetIsaacGrasp_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__get_isaac_grasp__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__get_isaac_grasp__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__get_isaac_grasp__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__get_isaac_grasp__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__get_isaac_grasp__get_result__response

            from grab2_msgs.action import GetIsaacGrasp
            if GetIsaacGrasp.Result.__class__._TYPE_SUPPORT is None:
                GetIsaacGrasp.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetIsaacGrasp_GetResult_Response(metaclass=Metaclass_GetIsaacGrasp_GetResult_Response):
    """Message class 'GetIsaacGrasp_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'grab2_msgs/GetIsaacGrasp_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['grab2_msgs', 'action'], 'GetIsaacGrasp_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from grab2_msgs.action._get_isaac_grasp import GetIsaacGrasp_Result
        self.result = kwargs.get('result', GetIsaacGrasp_Result())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from grab2_msgs.action._get_isaac_grasp import GetIsaacGrasp_Result
            assert \
                isinstance(value, GetIsaacGrasp_Result), \
                "The 'result' field must be a sub message of type 'GetIsaacGrasp_Result'"
        self._result = value


class Metaclass_GetIsaacGrasp_GetResult(type):
    """Metaclass of service 'GetIsaacGrasp_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('grab2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grab2_msgs.action.GetIsaacGrasp_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__get_isaac_grasp__get_result

            from grab2_msgs.action import _get_isaac_grasp
            if _get_isaac_grasp.Metaclass_GetIsaacGrasp_GetResult_Request._TYPE_SUPPORT is None:
                _get_isaac_grasp.Metaclass_GetIsaacGrasp_GetResult_Request.__import_type_support__()
            if _get_isaac_grasp.Metaclass_GetIsaacGrasp_GetResult_Response._TYPE_SUPPORT is None:
                _get_isaac_grasp.Metaclass_GetIsaacGrasp_GetResult_Response.__import_type_support__()


class GetIsaacGrasp_GetResult(metaclass=Metaclass_GetIsaacGrasp_GetResult):
    from grab2_msgs.action._get_isaac_grasp import GetIsaacGrasp_GetResult_Request as Request
    from grab2_msgs.action._get_isaac_grasp import GetIsaacGrasp_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetIsaacGrasp_FeedbackMessage(type):
    """Metaclass of message 'GetIsaacGrasp_FeedbackMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('grab2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grab2_msgs.action.GetIsaacGrasp_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__get_isaac_grasp__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__get_isaac_grasp__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__get_isaac_grasp__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__get_isaac_grasp__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__get_isaac_grasp__feedback_message

            from grab2_msgs.action import GetIsaacGrasp
            if GetIsaacGrasp.Feedback.__class__._TYPE_SUPPORT is None:
                GetIsaacGrasp.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetIsaacGrasp_FeedbackMessage(metaclass=Metaclass_GetIsaacGrasp_FeedbackMessage):
    """Message class 'GetIsaacGrasp_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'grab2_msgs/GetIsaacGrasp_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['grab2_msgs', 'action'], 'GetIsaacGrasp_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from grab2_msgs.action._get_isaac_grasp import GetIsaacGrasp_Feedback
        self.feedback = kwargs.get('feedback', GetIsaacGrasp_Feedback())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from grab2_msgs.action._get_isaac_grasp import GetIsaacGrasp_Feedback
            assert \
                isinstance(value, GetIsaacGrasp_Feedback), \
                "The 'feedback' field must be a sub message of type 'GetIsaacGrasp_Feedback'"
        self._feedback = value


class Metaclass_GetIsaacGrasp(type):
    """Metaclass of action 'GetIsaacGrasp'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('grab2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'grab2_msgs.action.GetIsaacGrasp')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__get_isaac_grasp

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from grab2_msgs.action import _get_isaac_grasp
            if _get_isaac_grasp.Metaclass_GetIsaacGrasp_SendGoal._TYPE_SUPPORT is None:
                _get_isaac_grasp.Metaclass_GetIsaacGrasp_SendGoal.__import_type_support__()
            if _get_isaac_grasp.Metaclass_GetIsaacGrasp_GetResult._TYPE_SUPPORT is None:
                _get_isaac_grasp.Metaclass_GetIsaacGrasp_GetResult.__import_type_support__()
            if _get_isaac_grasp.Metaclass_GetIsaacGrasp_FeedbackMessage._TYPE_SUPPORT is None:
                _get_isaac_grasp.Metaclass_GetIsaacGrasp_FeedbackMessage.__import_type_support__()


class GetIsaacGrasp(metaclass=Metaclass_GetIsaacGrasp):

    # The goal message defined in the action definition.
    from grab2_msgs.action._get_isaac_grasp import GetIsaacGrasp_Goal as Goal
    # The result message defined in the action definition.
    from grab2_msgs.action._get_isaac_grasp import GetIsaacGrasp_Result as Result
    # The feedback message defined in the action definition.
    from grab2_msgs.action._get_isaac_grasp import GetIsaacGrasp_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from grab2_msgs.action._get_isaac_grasp import GetIsaacGrasp_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from grab2_msgs.action._get_isaac_grasp import GetIsaacGrasp_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from grab2_msgs.action._get_isaac_grasp import GetIsaacGrasp_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
