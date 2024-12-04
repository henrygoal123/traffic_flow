// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: location.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "location.pb.h"

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

const ::google::protobuf::Descriptor* Location_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Location_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_location_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_location_2eproto() {
  protobuf_AddDesc_location_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "location.proto");
  GOOGLE_CHECK(file != NULL);
  Location_descriptor_ = file->message_type(0);
  static const int Location_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Location, t_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Location, pos_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Location, rpy_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Location, vel_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Location, acc_),
  };
  Location_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Location_descriptor_,
      Location::default_instance_,
      Location_offsets_,
      -1,
      -1,
      -1,
      sizeof(Location),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Location, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Location, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_location_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Location_descriptor_, &Location::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_location_2eproto() {
  delete Location::default_instance_;
  delete Location_reflection_;
}

void protobuf_AddDesc_location_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_location_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::sim_msg::protobuf_AddDesc_common_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016location.proto\022\007sim_msg\032\014common.proto\""
    "\205\001\n\010Location\022\t\n\001t\030\001 \001(\001\022\032\n\003pos\030\002 \001(\0132\r.s"
    "im_msg.Vec3\022\032\n\003rpy\030\003 \001(\0132\r.sim_msg.Vec3\022"
    "\032\n\003vel\030\004 \001(\0132\r.sim_msg.Vec3\022\032\n\003acc\030\005 \001(\013"
    "2\r.sim_msg.Vec3b\006proto3", 183);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "location.proto", &protobuf_RegisterTypes);
  Location::default_instance_ = new Location();
  Location::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_location_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_location_2eproto {
  StaticDescriptorInitializer_location_2eproto() {
    protobuf_AddDesc_location_2eproto();
  }
} static_descriptor_initializer_location_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Location::kTFieldNumber;
const int Location::kPosFieldNumber;
const int Location::kRpyFieldNumber;
const int Location::kVelFieldNumber;
const int Location::kAccFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Location::Location()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sim_msg.Location)
}

void Location::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  pos_ = const_cast< ::sim_msg::Vec3*>(&::sim_msg::Vec3::default_instance());
  rpy_ = const_cast< ::sim_msg::Vec3*>(&::sim_msg::Vec3::default_instance());
  vel_ = const_cast< ::sim_msg::Vec3*>(&::sim_msg::Vec3::default_instance());
  acc_ = const_cast< ::sim_msg::Vec3*>(&::sim_msg::Vec3::default_instance());
}

Location::Location(const Location& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:sim_msg.Location)
}

void Location::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  t_ = 0;
  pos_ = NULL;
  rpy_ = NULL;
  vel_ = NULL;
  acc_ = NULL;
}

Location::~Location() {
  // @@protoc_insertion_point(destructor:sim_msg.Location)
  SharedDtor();
}

void Location::SharedDtor() {
  if (this != default_instance_) {
    delete pos_;
    delete rpy_;
    delete vel_;
    delete acc_;
  }
}

void Location::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Location::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Location_descriptor_;
}

const Location& Location::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_location_2eproto();
  return *default_instance_;
}

Location* Location::default_instance_ = NULL;

Location* Location::New(::google::protobuf::Arena* arena) const {
  Location* n = new Location;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Location::Clear() {
// @@protoc_insertion_point(message_clear_start:sim_msg.Location)
  t_ = 0;
  if (GetArenaNoVirtual() == NULL && pos_ != NULL) delete pos_;
  pos_ = NULL;
  if (GetArenaNoVirtual() == NULL && rpy_ != NULL) delete rpy_;
  rpy_ = NULL;
  if (GetArenaNoVirtual() == NULL && vel_ != NULL) delete vel_;
  vel_ = NULL;
  if (GetArenaNoVirtual() == NULL && acc_ != NULL) delete acc_;
  acc_ = NULL;
}

bool Location::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:sim_msg.Location)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double t = 1;
      case 1: {
        if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &t_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_pos;
        break;
      }

      // optional .sim_msg.Vec3 pos = 2;
      case 2: {
        if (tag == 18) {
         parse_pos:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pos()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_rpy;
        break;
      }

      // optional .sim_msg.Vec3 rpy = 3;
      case 3: {
        if (tag == 26) {
         parse_rpy:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_rpy()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_vel;
        break;
      }

      // optional .sim_msg.Vec3 vel = 4;
      case 4: {
        if (tag == 34) {
         parse_vel:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_vel()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_acc;
        break;
      }

      // optional .sim_msg.Vec3 acc = 5;
      case 5: {
        if (tag == 42) {
         parse_acc:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_acc()));
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
  // @@protoc_insertion_point(parse_success:sim_msg.Location)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sim_msg.Location)
  return false;
#undef DO_
}

void Location::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sim_msg.Location)
  // optional double t = 1;
  if (this->t() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->t(), output);
  }

  // optional .sim_msg.Vec3 pos = 2;
  if (this->has_pos()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->pos_, output);
  }

  // optional .sim_msg.Vec3 rpy = 3;
  if (this->has_rpy()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->rpy_, output);
  }

  // optional .sim_msg.Vec3 vel = 4;
  if (this->has_vel()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->vel_, output);
  }

  // optional .sim_msg.Vec3 acc = 5;
  if (this->has_acc()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, *this->acc_, output);
  }

  // @@protoc_insertion_point(serialize_end:sim_msg.Location)
}

::google::protobuf::uint8* Location::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:sim_msg.Location)
  // optional double t = 1;
  if (this->t() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->t(), target);
  }

  // optional .sim_msg.Vec3 pos = 2;
  if (this->has_pos()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->pos_, false, target);
  }

  // optional .sim_msg.Vec3 rpy = 3;
  if (this->has_rpy()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->rpy_, false, target);
  }

  // optional .sim_msg.Vec3 vel = 4;
  if (this->has_vel()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->vel_, false, target);
  }

  // optional .sim_msg.Vec3 acc = 5;
  if (this->has_acc()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, *this->acc_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:sim_msg.Location)
  return target;
}

int Location::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:sim_msg.Location)
  int total_size = 0;

  // optional double t = 1;
  if (this->t() != 0) {
    total_size += 1 + 8;
  }

  // optional .sim_msg.Vec3 pos = 2;
  if (this->has_pos()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->pos_);
  }

  // optional .sim_msg.Vec3 rpy = 3;
  if (this->has_rpy()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->rpy_);
  }

  // optional .sim_msg.Vec3 vel = 4;
  if (this->has_vel()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->vel_);
  }

  // optional .sim_msg.Vec3 acc = 5;
  if (this->has_acc()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->acc_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Location::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:sim_msg.Location)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Location* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Location>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:sim_msg.Location)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:sim_msg.Location)
    MergeFrom(*source);
  }
}

void Location::MergeFrom(const Location& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sim_msg.Location)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.t() != 0) {
    set_t(from.t());
  }
  if (from.has_pos()) {
    mutable_pos()->::sim_msg::Vec3::MergeFrom(from.pos());
  }
  if (from.has_rpy()) {
    mutable_rpy()->::sim_msg::Vec3::MergeFrom(from.rpy());
  }
  if (from.has_vel()) {
    mutable_vel()->::sim_msg::Vec3::MergeFrom(from.vel());
  }
  if (from.has_acc()) {
    mutable_acc()->::sim_msg::Vec3::MergeFrom(from.acc());
  }
}

void Location::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:sim_msg.Location)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Location::CopyFrom(const Location& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sim_msg.Location)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Location::IsInitialized() const {

  return true;
}

void Location::Swap(Location* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Location::InternalSwap(Location* other) {
  std::swap(t_, other->t_);
  std::swap(pos_, other->pos_);
  std::swap(rpy_, other->rpy_);
  std::swap(vel_, other->vel_);
  std::swap(acc_, other->acc_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Location::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Location_descriptor_;
  metadata.reflection = Location_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Location

// optional double t = 1;
void Location::clear_t() {
  t_ = 0;
}
 double Location::t() const {
  // @@protoc_insertion_point(field_get:sim_msg.Location.t)
  return t_;
}
 void Location::set_t(double value) {
  
  t_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.Location.t)
}

// optional .sim_msg.Vec3 pos = 2;
bool Location::has_pos() const {
  return !_is_default_instance_ && pos_ != NULL;
}
void Location::clear_pos() {
  if (GetArenaNoVirtual() == NULL && pos_ != NULL) delete pos_;
  pos_ = NULL;
}
const ::sim_msg::Vec3& Location::pos() const {
  // @@protoc_insertion_point(field_get:sim_msg.Location.pos)
  return pos_ != NULL ? *pos_ : *default_instance_->pos_;
}
::sim_msg::Vec3* Location::mutable_pos() {
  
  if (pos_ == NULL) {
    pos_ = new ::sim_msg::Vec3;
  }
  // @@protoc_insertion_point(field_mutable:sim_msg.Location.pos)
  return pos_;
}
::sim_msg::Vec3* Location::release_pos() {
  // @@protoc_insertion_point(field_release:sim_msg.Location.pos)
  
  ::sim_msg::Vec3* temp = pos_;
  pos_ = NULL;
  return temp;
}
void Location::set_allocated_pos(::sim_msg::Vec3* pos) {
  delete pos_;
  pos_ = pos;
  if (pos) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:sim_msg.Location.pos)
}

// optional .sim_msg.Vec3 rpy = 3;
bool Location::has_rpy() const {
  return !_is_default_instance_ && rpy_ != NULL;
}
void Location::clear_rpy() {
  if (GetArenaNoVirtual() == NULL && rpy_ != NULL) delete rpy_;
  rpy_ = NULL;
}
const ::sim_msg::Vec3& Location::rpy() const {
  // @@protoc_insertion_point(field_get:sim_msg.Location.rpy)
  return rpy_ != NULL ? *rpy_ : *default_instance_->rpy_;
}
::sim_msg::Vec3* Location::mutable_rpy() {
  
  if (rpy_ == NULL) {
    rpy_ = new ::sim_msg::Vec3;
  }
  // @@protoc_insertion_point(field_mutable:sim_msg.Location.rpy)
  return rpy_;
}
::sim_msg::Vec3* Location::release_rpy() {
  // @@protoc_insertion_point(field_release:sim_msg.Location.rpy)
  
  ::sim_msg::Vec3* temp = rpy_;
  rpy_ = NULL;
  return temp;
}
void Location::set_allocated_rpy(::sim_msg::Vec3* rpy) {
  delete rpy_;
  rpy_ = rpy;
  if (rpy) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:sim_msg.Location.rpy)
}

// optional .sim_msg.Vec3 vel = 4;
bool Location::has_vel() const {
  return !_is_default_instance_ && vel_ != NULL;
}
void Location::clear_vel() {
  if (GetArenaNoVirtual() == NULL && vel_ != NULL) delete vel_;
  vel_ = NULL;
}
const ::sim_msg::Vec3& Location::vel() const {
  // @@protoc_insertion_point(field_get:sim_msg.Location.vel)
  return vel_ != NULL ? *vel_ : *default_instance_->vel_;
}
::sim_msg::Vec3* Location::mutable_vel() {
  
  if (vel_ == NULL) {
    vel_ = new ::sim_msg::Vec3;
  }
  // @@protoc_insertion_point(field_mutable:sim_msg.Location.vel)
  return vel_;
}
::sim_msg::Vec3* Location::release_vel() {
  // @@protoc_insertion_point(field_release:sim_msg.Location.vel)
  
  ::sim_msg::Vec3* temp = vel_;
  vel_ = NULL;
  return temp;
}
void Location::set_allocated_vel(::sim_msg::Vec3* vel) {
  delete vel_;
  vel_ = vel;
  if (vel) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:sim_msg.Location.vel)
}

// optional .sim_msg.Vec3 acc = 5;
bool Location::has_acc() const {
  return !_is_default_instance_ && acc_ != NULL;
}
void Location::clear_acc() {
  if (GetArenaNoVirtual() == NULL && acc_ != NULL) delete acc_;
  acc_ = NULL;
}
const ::sim_msg::Vec3& Location::acc() const {
  // @@protoc_insertion_point(field_get:sim_msg.Location.acc)
  return acc_ != NULL ? *acc_ : *default_instance_->acc_;
}
::sim_msg::Vec3* Location::mutable_acc() {
  
  if (acc_ == NULL) {
    acc_ = new ::sim_msg::Vec3;
  }
  // @@protoc_insertion_point(field_mutable:sim_msg.Location.acc)
  return acc_;
}
::sim_msg::Vec3* Location::release_acc() {
  // @@protoc_insertion_point(field_release:sim_msg.Location.acc)
  
  ::sim_msg::Vec3* temp = acc_;
  acc_ = NULL;
  return temp;
}
void Location::set_allocated_acc(::sim_msg::Vec3* acc) {
  delete acc_;
  acc_ = acc;
  if (acc) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:sim_msg.Location.acc)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sim_msg

// @@protoc_insertion_point(global_scope)
