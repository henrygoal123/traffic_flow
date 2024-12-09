# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: location.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import common_pb2 as common__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='location.proto',
  package='sim_msg',
  syntax='proto3',
  serialized_pb=_b('\n\x0elocation.proto\x12\x07sim_msg\x1a\x0c\x63ommon.proto\"\x85\x01\n\x08Location\x12\t\n\x01t\x18\x01 \x01(\x01\x12\x1a\n\x03pos\x18\x02 \x01(\x0b\x32\r.sim_msg.Vec3\x12\x1a\n\x03rpy\x18\x03 \x01(\x0b\x32\r.sim_msg.Vec3\x12\x1a\n\x03vel\x18\x04 \x01(\x0b\x32\r.sim_msg.Vec3\x12\x1a\n\x03\x61\x63\x63\x18\x05 \x01(\x0b\x32\r.sim_msg.Vec3b\x06proto3')
  ,
  dependencies=[common__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_LOCATION = _descriptor.Descriptor(
  name='Location',
  full_name='sim_msg.Location',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='t', full_name='sim_msg.Location.t', index=0,
      number=1, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pos', full_name='sim_msg.Location.pos', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='rpy', full_name='sim_msg.Location.rpy', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='vel', full_name='sim_msg.Location.vel', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='acc', full_name='sim_msg.Location.acc', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=42,
  serialized_end=175,
)

_LOCATION.fields_by_name['pos'].message_type = common__pb2._VEC3
_LOCATION.fields_by_name['rpy'].message_type = common__pb2._VEC3
_LOCATION.fields_by_name['vel'].message_type = common__pb2._VEC3
_LOCATION.fields_by_name['acc'].message_type = common__pb2._VEC3
DESCRIPTOR.message_types_by_name['Location'] = _LOCATION

Location = _reflection.GeneratedProtocolMessageType('Location', (_message.Message,), dict(
  DESCRIPTOR = _LOCATION,
  __module__ = 'location_pb2'
  # @@protoc_insertion_point(class_scope:sim_msg.Location)
  ))
_sym_db.RegisterMessage(Location)


# @@protoc_insertion_point(module_scope)