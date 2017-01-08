// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/debug/debug_service.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "tensorflow/core/debug/debug_service.pb.h"

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

namespace tensorflow {
class EventReplyDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<EventReply> {};
EventReplyDefaultTypeInternal _EventReply_default_instance_;

namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace


const ::google::protobuf::uint32* protobuf_Offsets_tensorflow_2fcore_2fdebug_2fdebug_5fservice_2eproto() GOOGLE_ATTRIBUTE_COLD;
const ::google::protobuf::uint32* protobuf_Offsets_tensorflow_2fcore_2fdebug_2fdebug_5fservice_2eproto() {
  static const ::google::protobuf::uint32 offsets[] = {
    ~0u,  // no _has_bits_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EventReply, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
  };
  return offsets;
}

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(EventReply)},
};

static const ::google::protobuf::internal::DefaultInstanceData file_default_instances[] = {
  {reinterpret_cast<const ::google::protobuf::Message*>(&_EventReply_default_instance_), NULL},
};

namespace {

void protobuf_AssignDescriptors() {
  protobuf_AddDesc_tensorflow_2fcore_2fdebug_2fdebug_5fservice_2eproto();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "tensorflow/core/debug/debug_service.proto", schemas, file_default_instances, protobuf_Offsets_tensorflow_2fcore_2fdebug_2fdebug_5fservice_2eproto(), factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void protobuf_ShutdownFile_tensorflow_2fcore_2fdebug_2fdebug_5fservice_2eproto() {
  _EventReply_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void protobuf_InitDefaults_tensorflow_2fcore_2fdebug_2fdebug_5fservice_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::tensorflow::protobuf_InitDefaults_tensorflow_2fcore_2futil_2fevent_2eproto();
  ::google::protobuf::internal::InitProtobufDefaults();
  _EventReply_default_instance_.DefaultConstruct();
}

void protobuf_InitDefaults_tensorflow_2fcore_2fdebug_2fdebug_5fservice_2eproto() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_InitDefaults_tensorflow_2fcore_2fdebug_2fdebug_5fservice_2eproto_impl);
}
void protobuf_AddDesc_tensorflow_2fcore_2fdebug_2fdebug_5fservice_2eproto_impl() {
  protobuf_InitDefaults_tensorflow_2fcore_2fdebug_2fdebug_5fservice_2eproto();
  static const char descriptor[] = {
      "\n)tensorflow/core/debug/debug_service.pr"
      "oto\022\ntensorflow\032 tensorflow/core/util/ev"
      "ent.proto\"\014\n\nEventReply2L\n\rEventListener"
      "\022;\n\nSendEvents\022\021.tensorflow.Event\032\026.tens"
      "orflow.EventReply(\0010\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 189);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/core/debug/debug_service.proto", &protobuf_RegisterTypes);
  ::tensorflow::protobuf_AddDesc_tensorflow_2fcore_2futil_2fevent_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_tensorflow_2fcore_2fdebug_2fdebug_5fservice_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_tensorflow_2fcore_2fdebug_2fdebug_5fservice_2eproto_once_);
void protobuf_AddDesc_tensorflow_2fcore_2fdebug_2fdebug_5fservice_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_tensorflow_2fcore_2fdebug_2fdebug_5fservice_2eproto_once_,
                 &protobuf_AddDesc_tensorflow_2fcore_2fdebug_2fdebug_5fservice_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_tensorflow_2fcore_2fdebug_2fdebug_5fservice_2eproto {
  StaticDescriptorInitializer_tensorflow_2fcore_2fdebug_2fdebug_5fservice_2eproto() {
    protobuf_AddDesc_tensorflow_2fcore_2fdebug_2fdebug_5fservice_2eproto();
  }
} static_descriptor_initializer_tensorflow_2fcore_2fdebug_2fdebug_5fservice_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EventReply::EventReply()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_InitDefaults_tensorflow_2fcore_2fdebug_2fdebug_5fservice_2eproto();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.EventReply)
}
EventReply::EventReply(const EventReply& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:tensorflow.EventReply)
}

void EventReply::SharedCtor() {
  _cached_size_ = 0;
}

EventReply::~EventReply() {
  // @@protoc_insertion_point(destructor:tensorflow.EventReply)
  SharedDtor();
}

void EventReply::SharedDtor() {
}

void EventReply::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EventReply::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[0].descriptor;
}

const EventReply& EventReply::default_instance() {
  protobuf_InitDefaults_tensorflow_2fcore_2fdebug_2fdebug_5fservice_2eproto();
  return *internal_default_instance();
}

EventReply* EventReply::New(::google::protobuf::Arena* arena) const {
  EventReply* n = new EventReply;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void EventReply::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.EventReply)
}

bool EventReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.EventReply)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
  }
success:
  // @@protoc_insertion_point(parse_success:tensorflow.EventReply)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.EventReply)
  return false;
#undef DO_
}

void EventReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.EventReply)
  // @@protoc_insertion_point(serialize_end:tensorflow.EventReply)
}

::google::protobuf::uint8* EventReply::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.EventReply)
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.EventReply)
  return target;
}

size_t EventReply::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.EventReply)
  size_t total_size = 0;

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EventReply::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.EventReply)
  GOOGLE_DCHECK_NE(&from, this);
  const EventReply* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const EventReply>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.EventReply)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.EventReply)
    MergeFrom(*source);
  }
}

void EventReply::MergeFrom(const EventReply& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.EventReply)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
}

void EventReply::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.EventReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EventReply::CopyFrom(const EventReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.EventReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EventReply::IsInitialized() const {
  return true;
}

void EventReply::Swap(EventReply* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EventReply::InternalSwap(EventReply* other) {
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata EventReply::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// EventReply

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)