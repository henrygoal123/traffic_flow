// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "common.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace sim_msg {

namespace {

const ::google::protobuf::Descriptor* Vec3_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Vec3_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_common_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_common_2eproto() {
  protobuf_AddDesc_common_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "common.proto");
  GOOGLE_CHECK(file != NULL);
  Vec3_descriptor_ = file->message_type(0);
  static const int Vec3_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vec3, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vec3, y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vec3, z_),
  };
  Vec3_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Vec3_descriptor_,
      Vec3::default_instance_,
      Vec3_offsets_,
      -1,
      -1,
      -1,
      sizeof(Vec3),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vec3, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vec3, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_common_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Vec3_descriptor_, &Vec3::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_common_2eproto() {
  delete Vec3::default_instance_;
  delete Vec3_reflection_;
}

void protobuf_AddDesc_common_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_common_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014common.proto\022\007sim_msg\"\'\n\004Vec3\022\t\n\001x\030\001 \001"
    "(\001\022\t\n\001y\030\002 \001(\001\022\t\n\001z\030\003 \001(\001b\006proto3", 72);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "common.proto", &protobuf_RegisterTypes);
  Vec3::default_instance_ = new Vec3();
  Vec3::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_common_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_common_2eproto {
  StaticDescriptorInitializer_common_2eproto() {
    protobuf_AddDesc_common_2eproto();
  }
} static_descriptor_initializer_common_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Vec3::kXFieldNumber;
const int Vec3::kYFieldNumber;
const int Vec3::kZFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Vec3::Vec3()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sim_msg.Vec3)
}

void Vec3::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Vec3::Vec3(const Vec3& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:sim_msg.Vec3)
}

void Vec3::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  x_ = 0;
  y_ = 0;
  z_ = 0;
}

Vec3::~Vec3() {
  // @@protoc_insertion_point(destructor:sim_msg.Vec3)
  SharedDtor();
}

void Vec3::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Vec3::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Vec3::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Vec3_descriptor_;
}

const Vec3& Vec3::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_common_2eproto();
  return *default_instance_;
}

Vec3* Vec3::default_instance_ = NULL;

Vec3* Vec3::New(::google::protobuf::Arena* arena) const {
  Vec3* n = new Vec3;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Vec3::Clear() {
// @@protoc_insertion_point(message_clear_start:sim_msg.Vec3)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(Vec3, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Vec3*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(x_, z_);

#undef ZR_HELPER_
#undef ZR_

}

bool Vec3::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:sim_msg.Vec3)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double x = 1;
      case 1: {
        if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &x_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_y;
        break;
      }

      // optional double y = 2;
      case 2: {
        if (tag == 17) {
         parse_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &y_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_z;
        break;
      }

      // optional double z = 3;
      case 3: {
        if (tag == 25) {
         parse_z:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &z_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sim_msg.Vec3)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sim_msg.Vec3)
  return false;
#undef DO_
}

void Vec3::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sim_msg.Vec3)
  // optional double x = 1;
  if (this->x() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->x(), output);
  }

  // optional double y = 2;
  if (this->y() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->y(), output);
  }

  // optional double z = 3;
  if (this->z() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->z(), output);
  }

  // @@protoc_insertion_point(serialize_end:sim_msg.Vec3)
}

::google::protobuf::uint8* Vec3::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:sim_msg.Vec3)
  // optional double x = 1;
  if (this->x() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->x(), target);
  }

  // optional double y = 2;
  if (this->y() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->y(), target);
  }

  // optional double z = 3;
  if (this->z() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->z(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:sim_msg.Vec3)
  return target;
}

int Vec3::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:sim_msg.Vec3)
  int total_size = 0;

  // optional double x = 1;
  if (this->x() != 0) {
    total_size += 1 + 8;
  }

  // optional double y = 2;
  if (this->y() != 0) {
    total_size += 1 + 8;
  }

  // optional double z = 3;
  if (this->z() != 0) {
    total_size += 1 + 8;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Vec3::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:sim_msg.Vec3)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Vec3* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Vec3>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:sim_msg.Vec3)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:sim_msg.Vec3)
    MergeFrom(*source);
  }
}

void Vec3::MergeFrom(const Vec3& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sim_msg.Vec3)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.x() != 0) {
    set_x(from.x());
  }
  if (from.y() != 0) {
    set_y(from.y());
  }
  if (from.z() != 0) {
    set_z(from.z());
  }
}

void Vec3::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:sim_msg.Vec3)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vec3::CopyFrom(const Vec3& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sim_msg.Vec3)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Vec3::IsInitialized() const {

  return true;
}

void Vec3::Swap(Vec3* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Vec3::InternalSwap(Vec3* other) {
  std::swap(x_, other->x_);
  std::swap(y_, other->y_);
  std::swap(z_, other->z_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Vec3::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Vec3_descriptor_;
  metadata.reflection = Vec3_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Vec3

// optional double x = 1;
void Vec3::clear_x() {
  x_ = 0;
}
 double Vec3::x() const {
  // @@protoc_insertion_point(field_get:sim_msg.Vec3.x)
  return x_;
}
 void Vec3::set_x(double value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Vec3.x)
}

// optional double y = 2;
void Vec3::clear_y() {
  y_ = 0;
}
 double Vec3::y() const {
  // @@protoc_insertion_point(field_get:sim_msg.Vec3.y)
  return y_;
}
 void Vec3::set_y(double value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Vec3.y)
}

// optional double z = 3;
void Vec3::clear_z() {
  z_ = 0;
}
 double Vec3::z() const {
  // @@protoc_insertion_point(field_get:sim_msg.Vec3.z)
  return z_;
}
 void Vec3::set_z(double value) {
  
  z_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Vec3.z)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sim_msg

// @@protoc_insertion_point(global_scope)
