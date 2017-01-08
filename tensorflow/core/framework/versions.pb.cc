// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/versions.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "tensorflow/core/framework/versions.pb.h"

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
class VersionDefDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VersionDef> {};
VersionDefDefaultTypeInternal _VersionDef_default_instance_;

namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace


const ::google::protobuf::uint32* protobuf_Offsets_tensorflow_2fcore_2fframework_2fversions_2eproto() GOOGLE_ATTRIBUTE_COLD;
const ::google::protobuf::uint32* protobuf_Offsets_tensorflow_2fcore_2fframework_2fversions_2eproto() {
  static const ::google::protobuf::uint32 offsets[] = {
    ~0u,  // no _has_bits_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VersionDef, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VersionDef, producer_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VersionDef, min_consumer_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VersionDef, bad_consumers_),
  };
  return offsets;
}

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(VersionDef)},
};

static const ::google::protobuf::internal::DefaultInstanceData file_default_instances[] = {
  {reinterpret_cast<const ::google::protobuf::Message*>(&_VersionDef_default_instance_), NULL},
};

namespace {

void protobuf_AssignDescriptors() {
  protobuf_AddDesc_tensorflow_2fcore_2fframework_2fversions_2eproto();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "tensorflow/core/framework/versions.proto", schemas, file_default_instances, protobuf_Offsets_tensorflow_2fcore_2fframework_2fversions_2eproto(), factory,
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

void protobuf_ShutdownFile_tensorflow_2fcore_2fframework_2fversions_2eproto() {
  _VersionDef_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fversions_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _VersionDef_default_instance_.DefaultConstruct();
}

void protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fversions_2eproto() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fversions_2eproto_impl);
}
void protobuf_AddDesc_tensorflow_2fcore_2fframework_2fversions_2eproto_impl() {
  protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fversions_2eproto();
  static const char descriptor[] = {
      "\n(tensorflow/core/framework/versions.pro"
      "to\022\ntensorflow\"K\n\nVersionDef\022\020\n\010producer"
      "\030\001 \001(\005\022\024\n\014min_consumer\030\002 \001(\005\022\025\n\rbad_cons"
      "umers\030\003 \003(\005B/\n\030org.tensorflow.frameworkB"
      "\016VersionsProtosP\001\370\001\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 188);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/core/framework/versions.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_tensorflow_2fcore_2fframework_2fversions_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_tensorflow_2fcore_2fframework_2fversions_2eproto_once_);
void protobuf_AddDesc_tensorflow_2fcore_2fframework_2fversions_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_tensorflow_2fcore_2fframework_2fversions_2eproto_once_,
                 &protobuf_AddDesc_tensorflow_2fcore_2fframework_2fversions_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_tensorflow_2fcore_2fframework_2fversions_2eproto {
  StaticDescriptorInitializer_tensorflow_2fcore_2fframework_2fversions_2eproto() {
    protobuf_AddDesc_tensorflow_2fcore_2fframework_2fversions_2eproto();
  }
} static_descriptor_initializer_tensorflow_2fcore_2fframework_2fversions_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VersionDef::kProducerFieldNumber;
const int VersionDef::kMinConsumerFieldNumber;
const int VersionDef::kBadConsumersFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VersionDef::VersionDef()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fversions_2eproto();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.VersionDef)
}
VersionDef::VersionDef(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena),
  bad_consumers_(arena) {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fversions_2eproto();
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.VersionDef)
}
VersionDef::VersionDef(const VersionDef& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      bad_consumers_(from.bad_consumers_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&producer_, &from.producer_,
    reinterpret_cast<char*>(&min_consumer_) -
    reinterpret_cast<char*>(&producer_) + sizeof(min_consumer_));
  // @@protoc_insertion_point(copy_constructor:tensorflow.VersionDef)
}

void VersionDef::SharedCtor() {
  ::memset(&producer_, 0, reinterpret_cast<char*>(&min_consumer_) -
    reinterpret_cast<char*>(&producer_) + sizeof(min_consumer_));
  _cached_size_ = 0;
}

VersionDef::~VersionDef() {
  // @@protoc_insertion_point(destructor:tensorflow.VersionDef)
  SharedDtor();
}

void VersionDef::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  if (arena != NULL) {
    return;
  }

}

void VersionDef::ArenaDtor(void* object) {
  VersionDef* _this = reinterpret_cast< VersionDef* >(object);
  (void)_this;
}
void VersionDef::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void VersionDef::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VersionDef::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[0].descriptor;
}

const VersionDef& VersionDef::default_instance() {
  protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fversions_2eproto();
  return *internal_default_instance();
}

VersionDef* VersionDef::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<VersionDef>(arena);
}

void VersionDef::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.VersionDef)
  bad_consumers_.Clear();
  ::memset(&producer_, 0, reinterpret_cast<char*>(&min_consumer_) -
    reinterpret_cast<char*>(&producer_) + sizeof(min_consumer_));
}

bool VersionDef::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.VersionDef)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 producer = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &producer_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 min_consumer = 2;
      case 2: {
        if (tag == 16u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &min_consumer_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated int32 bad_consumers = 3;
      case 3: {
        if (tag == 26u) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_bad_consumers())));
        } else if (tag == 24u) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 26u, input, this->mutable_bad_consumers())));
        } else {
          goto handle_unusual;
        }
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
  // @@protoc_insertion_point(parse_success:tensorflow.VersionDef)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.VersionDef)
  return false;
#undef DO_
}

void VersionDef::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.VersionDef)
  // int32 producer = 1;
  if (this->producer() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->producer(), output);
  }

  // int32 min_consumer = 2;
  if (this->min_consumer() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->min_consumer(), output);
  }

  // repeated int32 bad_consumers = 3;
  if (this->bad_consumers_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(3, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_bad_consumers_cached_byte_size_);
  }
  for (int i = 0; i < this->bad_consumers_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->bad_consumers(i), output);
  }

  // @@protoc_insertion_point(serialize_end:tensorflow.VersionDef)
}

::google::protobuf::uint8* VersionDef::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.VersionDef)
  // int32 producer = 1;
  if (this->producer() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->producer(), target);
  }

  // int32 min_consumer = 2;
  if (this->min_consumer() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->min_consumer(), target);
  }

  // repeated int32 bad_consumers = 3;
  if (this->bad_consumers_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      3,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _bad_consumers_cached_byte_size_, target);
  }
  for (int i = 0; i < this->bad_consumers_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->bad_consumers(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.VersionDef)
  return target;
}

size_t VersionDef::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.VersionDef)
  size_t total_size = 0;

  // repeated int32 bad_consumers = 3;
  {
    size_t data_size = 0;
    unsigned int count = this->bad_consumers_size();
    for (unsigned int i = 0; i < count; i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->bad_consumers(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _bad_consumers_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // int32 producer = 1;
  if (this->producer() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->producer());
  }

  // int32 min_consumer = 2;
  if (this->min_consumer() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->min_consumer());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VersionDef::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.VersionDef)
  GOOGLE_DCHECK_NE(&from, this);
  const VersionDef* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VersionDef>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.VersionDef)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.VersionDef)
    MergeFrom(*source);
  }
}

void VersionDef::MergeFrom(const VersionDef& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.VersionDef)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  bad_consumers_.MergeFrom(from.bad_consumers_);
  if (from.producer() != 0) {
    set_producer(from.producer());
  }
  if (from.min_consumer() != 0) {
    set_min_consumer(from.min_consumer());
  }
}

void VersionDef::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.VersionDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VersionDef::CopyFrom(const VersionDef& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.VersionDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VersionDef::IsInitialized() const {
  return true;
}

void VersionDef::Swap(VersionDef* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    VersionDef* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void VersionDef::UnsafeArenaSwap(VersionDef* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void VersionDef::InternalSwap(VersionDef* other) {
  bad_consumers_.UnsafeArenaSwap(&other->bad_consumers_);
  std::swap(producer_, other->producer_);
  std::swap(min_consumer_, other->min_consumer_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VersionDef::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VersionDef

// int32 producer = 1;
void VersionDef::clear_producer() {
  producer_ = 0;
}
::google::protobuf::int32 VersionDef::producer() const {
  // @@protoc_insertion_point(field_get:tensorflow.VersionDef.producer)
  return producer_;
}
void VersionDef::set_producer(::google::protobuf::int32 value) {
  
  producer_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.VersionDef.producer)
}

// int32 min_consumer = 2;
void VersionDef::clear_min_consumer() {
  min_consumer_ = 0;
}
::google::protobuf::int32 VersionDef::min_consumer() const {
  // @@protoc_insertion_point(field_get:tensorflow.VersionDef.min_consumer)
  return min_consumer_;
}
void VersionDef::set_min_consumer(::google::protobuf::int32 value) {
  
  min_consumer_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.VersionDef.min_consumer)
}

// repeated int32 bad_consumers = 3;
int VersionDef::bad_consumers_size() const {
  return bad_consumers_.size();
}
void VersionDef::clear_bad_consumers() {
  bad_consumers_.Clear();
}
::google::protobuf::int32 VersionDef::bad_consumers(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.VersionDef.bad_consumers)
  return bad_consumers_.Get(index);
}
void VersionDef::set_bad_consumers(int index, ::google::protobuf::int32 value) {
  bad_consumers_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.VersionDef.bad_consumers)
}
void VersionDef::add_bad_consumers(::google::protobuf::int32 value) {
  bad_consumers_.Add(value);
  // @@protoc_insertion_point(field_add:tensorflow.VersionDef.bad_consumers)
}
const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
VersionDef::bad_consumers() const {
  // @@protoc_insertion_point(field_list:tensorflow.VersionDef.bad_consumers)
  return bad_consumers_;
}
::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
VersionDef::mutable_bad_consumers() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.VersionDef.bad_consumers)
  return &bad_consumers_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)
