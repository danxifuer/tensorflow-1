// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/kernels/reader_base.proto

#ifndef PROTOBUF_tensorflow_2fcore_2fkernels_2freader_5fbase_2eproto__INCLUDED
#define PROTOBUF_tensorflow_2fcore_2fkernels_2freader_5fbase_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace tensorflow {
class ReaderBaseState;
class ReaderBaseStateDefaultTypeInternal;
extern ReaderBaseStateDefaultTypeInternal _ReaderBaseState_default_instance_;
}  // namespace tensorflow

namespace tensorflow {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_tensorflow_2fcore_2fkernels_2freader_5fbase_2eproto();
void protobuf_InitDefaults_tensorflow_2fcore_2fkernels_2freader_5fbase_2eproto();

// ===================================================================

class ReaderBaseState : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.ReaderBaseState) */ {
 public:
  ReaderBaseState();
  virtual ~ReaderBaseState();

  ReaderBaseState(const ReaderBaseState& from);

  inline ReaderBaseState& operator=(const ReaderBaseState& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const ReaderBaseState& default_instance();

  static inline const ReaderBaseState* internal_default_instance() {
    return reinterpret_cast<const ReaderBaseState*>(
               &_ReaderBaseState_default_instance_);
  }

  void UnsafeArenaSwap(ReaderBaseState* other);
  void Swap(ReaderBaseState* other);

  // implements Message ----------------------------------------------

  inline ReaderBaseState* New() const PROTOBUF_FINAL { return New(NULL); }

  ReaderBaseState* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ReaderBaseState& from);
  void MergeFrom(const ReaderBaseState& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ReaderBaseState* other);
  protected:
  explicit ReaderBaseState(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int64 work_started = 1;
  void clear_work_started();
  static const int kWorkStartedFieldNumber = 1;
  ::google::protobuf::int64 work_started() const;
  void set_work_started(::google::protobuf::int64 value);

  // int64 work_finished = 2;
  void clear_work_finished();
  static const int kWorkFinishedFieldNumber = 2;
  ::google::protobuf::int64 work_finished() const;
  void set_work_finished(::google::protobuf::int64 value);

  // int64 num_records_produced = 3;
  void clear_num_records_produced();
  static const int kNumRecordsProducedFieldNumber = 3;
  ::google::protobuf::int64 num_records_produced() const;
  void set_num_records_produced(::google::protobuf::int64 value);

  // bytes current_work = 4;
  void clear_current_work();
  static const int kCurrentWorkFieldNumber = 4;
  const ::std::string& current_work() const;
  void set_current_work(const ::std::string& value);
  void set_current_work(const char* value);
  void set_current_work(const void* value, size_t size);
  ::std::string* mutable_current_work();
  ::std::string* release_current_work();
  void set_allocated_current_work(::std::string* current_work);
  ::std::string* unsafe_arena_release_current_work();
  void unsafe_arena_set_allocated_current_work(
      ::std::string* current_work);

  // @@protoc_insertion_point(class_scope:tensorflow.ReaderBaseState)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::ArenaStringPtr current_work_;
  ::google::protobuf::int64 work_started_;
  ::google::protobuf::int64 work_finished_;
  ::google::protobuf::int64 num_records_produced_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_tensorflow_2fcore_2fkernels_2freader_5fbase_2eproto_impl();
  friend void  protobuf_AddDesc_tensorflow_2fcore_2fkernels_2freader_5fbase_2eproto_impl();
  friend const ::google::protobuf::uint32* protobuf_Offsets_tensorflow_2fcore_2fkernels_2freader_5fbase_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2fkernels_2freader_5fbase_2eproto();

};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ReaderBaseState

// int64 work_started = 1;
inline void ReaderBaseState::clear_work_started() {
  work_started_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ReaderBaseState::work_started() const {
  // @@protoc_insertion_point(field_get:tensorflow.ReaderBaseState.work_started)
  return work_started_;
}
inline void ReaderBaseState::set_work_started(::google::protobuf::int64 value) {
  
  work_started_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.ReaderBaseState.work_started)
}

// int64 work_finished = 2;
inline void ReaderBaseState::clear_work_finished() {
  work_finished_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ReaderBaseState::work_finished() const {
  // @@protoc_insertion_point(field_get:tensorflow.ReaderBaseState.work_finished)
  return work_finished_;
}
inline void ReaderBaseState::set_work_finished(::google::protobuf::int64 value) {
  
  work_finished_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.ReaderBaseState.work_finished)
}

// int64 num_records_produced = 3;
inline void ReaderBaseState::clear_num_records_produced() {
  num_records_produced_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ReaderBaseState::num_records_produced() const {
  // @@protoc_insertion_point(field_get:tensorflow.ReaderBaseState.num_records_produced)
  return num_records_produced_;
}
inline void ReaderBaseState::set_num_records_produced(::google::protobuf::int64 value) {
  
  num_records_produced_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.ReaderBaseState.num_records_produced)
}

// bytes current_work = 4;
inline void ReaderBaseState::clear_current_work() {
  current_work_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& ReaderBaseState::current_work() const {
  // @@protoc_insertion_point(field_get:tensorflow.ReaderBaseState.current_work)
  return current_work_.Get();
}
inline void ReaderBaseState::set_current_work(const ::std::string& value) {
  
  current_work_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.ReaderBaseState.current_work)
}
inline void ReaderBaseState::set_current_work(const char* value) {
  
  current_work_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.ReaderBaseState.current_work)
}
inline void ReaderBaseState::set_current_work(const void* value,
    size_t size) {
  
  current_work_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.ReaderBaseState.current_work)
}
inline ::std::string* ReaderBaseState::mutable_current_work() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.ReaderBaseState.current_work)
  return current_work_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* ReaderBaseState::release_current_work() {
  // @@protoc_insertion_point(field_release:tensorflow.ReaderBaseState.current_work)
  
  return current_work_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* ReaderBaseState::unsafe_arena_release_current_work() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.ReaderBaseState.current_work)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return current_work_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void ReaderBaseState::set_allocated_current_work(::std::string* current_work) {
  if (current_work != NULL) {
    
  } else {
    
  }
  current_work_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), current_work,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ReaderBaseState.current_work)
}
inline void ReaderBaseState::unsafe_arena_set_allocated_current_work(
    ::std::string* current_work) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (current_work != NULL) {
    
  } else {
    
  }
  current_work_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      current_work, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.ReaderBaseState.current_work)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tensorflow_2fcore_2fkernels_2freader_5fbase_2eproto__INCLUDED