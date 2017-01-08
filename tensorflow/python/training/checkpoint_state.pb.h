// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/python/training/checkpoint_state.proto

#ifndef PROTOBUF_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto__INCLUDED
#define PROTOBUF_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto__INCLUDED

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
class CheckpointState;
class CheckpointStateDefaultTypeInternal;
extern CheckpointStateDefaultTypeInternal _CheckpointState_default_instance_;
}  // namespace tensorflow

namespace tensorflow {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto();
void protobuf_InitDefaults_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto();

// ===================================================================

class CheckpointState : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.CheckpointState) */ {
 public:
  CheckpointState();
  virtual ~CheckpointState();

  CheckpointState(const CheckpointState& from);

  inline CheckpointState& operator=(const CheckpointState& from) {
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
  static const CheckpointState& default_instance();

  static inline const CheckpointState* internal_default_instance() {
    return reinterpret_cast<const CheckpointState*>(
               &_CheckpointState_default_instance_);
  }

  void UnsafeArenaSwap(CheckpointState* other);
  void Swap(CheckpointState* other);

  // implements Message ----------------------------------------------

  inline CheckpointState* New() const PROTOBUF_FINAL { return New(NULL); }

  CheckpointState* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CheckpointState& from);
  void MergeFrom(const CheckpointState& from);
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
  void InternalSwap(CheckpointState* other);
  protected:
  explicit CheckpointState(::google::protobuf::Arena* arena);
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

  // string model_checkpoint_path = 1;
  void clear_model_checkpoint_path();
  static const int kModelCheckpointPathFieldNumber = 1;
  const ::std::string& model_checkpoint_path() const;
  void set_model_checkpoint_path(const ::std::string& value);
  void set_model_checkpoint_path(const char* value);
  void set_model_checkpoint_path(const char* value, size_t size);
  ::std::string* mutable_model_checkpoint_path();
  ::std::string* release_model_checkpoint_path();
  void set_allocated_model_checkpoint_path(::std::string* model_checkpoint_path);
  ::std::string* unsafe_arena_release_model_checkpoint_path();
  void unsafe_arena_set_allocated_model_checkpoint_path(
      ::std::string* model_checkpoint_path);

  // repeated string all_model_checkpoint_paths = 2;
  int all_model_checkpoint_paths_size() const;
  void clear_all_model_checkpoint_paths();
  static const int kAllModelCheckpointPathsFieldNumber = 2;
  const ::std::string& all_model_checkpoint_paths(int index) const;
  ::std::string* mutable_all_model_checkpoint_paths(int index);
  void set_all_model_checkpoint_paths(int index, const ::std::string& value);
  void set_all_model_checkpoint_paths(int index, const char* value);
  void set_all_model_checkpoint_paths(int index, const char* value, size_t size);
  ::std::string* add_all_model_checkpoint_paths();
  void add_all_model_checkpoint_paths(const ::std::string& value);
  void add_all_model_checkpoint_paths(const char* value);
  void add_all_model_checkpoint_paths(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& all_model_checkpoint_paths() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_all_model_checkpoint_paths();

  // @@protoc_insertion_point(class_scope:tensorflow.CheckpointState)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedPtrField< ::std::string> all_model_checkpoint_paths_;
  ::google::protobuf::internal::ArenaStringPtr model_checkpoint_path_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto_impl();
  friend void  protobuf_AddDesc_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto_impl();
  friend const ::google::protobuf::uint32* protobuf_Offsets_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto();

};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CheckpointState

// string model_checkpoint_path = 1;
inline void CheckpointState::clear_model_checkpoint_path() {
  model_checkpoint_path_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& CheckpointState::model_checkpoint_path() const {
  // @@protoc_insertion_point(field_get:tensorflow.CheckpointState.model_checkpoint_path)
  return model_checkpoint_path_.Get();
}
inline void CheckpointState::set_model_checkpoint_path(const ::std::string& value) {
  
  model_checkpoint_path_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.CheckpointState.model_checkpoint_path)
}
inline void CheckpointState::set_model_checkpoint_path(const char* value) {
  
  model_checkpoint_path_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.CheckpointState.model_checkpoint_path)
}
inline void CheckpointState::set_model_checkpoint_path(const char* value,
    size_t size) {
  
  model_checkpoint_path_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.CheckpointState.model_checkpoint_path)
}
inline ::std::string* CheckpointState::mutable_model_checkpoint_path() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.CheckpointState.model_checkpoint_path)
  return model_checkpoint_path_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* CheckpointState::release_model_checkpoint_path() {
  // @@protoc_insertion_point(field_release:tensorflow.CheckpointState.model_checkpoint_path)
  
  return model_checkpoint_path_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* CheckpointState::unsafe_arena_release_model_checkpoint_path() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.CheckpointState.model_checkpoint_path)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return model_checkpoint_path_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void CheckpointState::set_allocated_model_checkpoint_path(::std::string* model_checkpoint_path) {
  if (model_checkpoint_path != NULL) {
    
  } else {
    
  }
  model_checkpoint_path_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), model_checkpoint_path,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.CheckpointState.model_checkpoint_path)
}
inline void CheckpointState::unsafe_arena_set_allocated_model_checkpoint_path(
    ::std::string* model_checkpoint_path) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (model_checkpoint_path != NULL) {
    
  } else {
    
  }
  model_checkpoint_path_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      model_checkpoint_path, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.CheckpointState.model_checkpoint_path)
}

// repeated string all_model_checkpoint_paths = 2;
inline int CheckpointState::all_model_checkpoint_paths_size() const {
  return all_model_checkpoint_paths_.size();
}
inline void CheckpointState::clear_all_model_checkpoint_paths() {
  all_model_checkpoint_paths_.Clear();
}
inline const ::std::string& CheckpointState::all_model_checkpoint_paths(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.CheckpointState.all_model_checkpoint_paths)
  return all_model_checkpoint_paths_.Get(index);
}
inline ::std::string* CheckpointState::mutable_all_model_checkpoint_paths(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.CheckpointState.all_model_checkpoint_paths)
  return all_model_checkpoint_paths_.Mutable(index);
}
inline void CheckpointState::set_all_model_checkpoint_paths(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:tensorflow.CheckpointState.all_model_checkpoint_paths)
  all_model_checkpoint_paths_.Mutable(index)->assign(value);
}
inline void CheckpointState::set_all_model_checkpoint_paths(int index, const char* value) {
  all_model_checkpoint_paths_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:tensorflow.CheckpointState.all_model_checkpoint_paths)
}
inline void CheckpointState::set_all_model_checkpoint_paths(int index, const char* value, size_t size) {
  all_model_checkpoint_paths_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:tensorflow.CheckpointState.all_model_checkpoint_paths)
}
inline ::std::string* CheckpointState::add_all_model_checkpoint_paths() {
  // @@protoc_insertion_point(field_add_mutable:tensorflow.CheckpointState.all_model_checkpoint_paths)
  return all_model_checkpoint_paths_.Add();
}
inline void CheckpointState::add_all_model_checkpoint_paths(const ::std::string& value) {
  all_model_checkpoint_paths_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:tensorflow.CheckpointState.all_model_checkpoint_paths)
}
inline void CheckpointState::add_all_model_checkpoint_paths(const char* value) {
  all_model_checkpoint_paths_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:tensorflow.CheckpointState.all_model_checkpoint_paths)
}
inline void CheckpointState::add_all_model_checkpoint_paths(const char* value, size_t size) {
  all_model_checkpoint_paths_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:tensorflow.CheckpointState.all_model_checkpoint_paths)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
CheckpointState::all_model_checkpoint_paths() const {
  // @@protoc_insertion_point(field_list:tensorflow.CheckpointState.all_model_checkpoint_paths)
  return all_model_checkpoint_paths_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
CheckpointState::mutable_all_model_checkpoint_paths() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.CheckpointState.all_model_checkpoint_paths)
  return &all_model_checkpoint_paths_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto__INCLUDED
