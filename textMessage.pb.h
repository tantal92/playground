// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: textMessage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_textMessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_textMessage_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_textMessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_textMessage_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_textMessage_2eproto;
namespace textMessage {
class serverResponse;
class serverResponseDefaultTypeInternal;
extern serverResponseDefaultTypeInternal _serverResponse_default_instance_;
class textMessage;
class textMessageDefaultTypeInternal;
extern textMessageDefaultTypeInternal _textMessage_default_instance_;
}  // namespace textMessage
PROTOBUF_NAMESPACE_OPEN
template<> ::textMessage::serverResponse* Arena::CreateMaybeMessage<::textMessage::serverResponse>(Arena*);
template<> ::textMessage::textMessage* Arena::CreateMaybeMessage<::textMessage::textMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace textMessage {

// ===================================================================

class textMessage :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:textMessage.textMessage) */ {
 public:
  textMessage();
  virtual ~textMessage();

  textMessage(const textMessage& from);
  textMessage(textMessage&& from) noexcept
    : textMessage() {
    *this = ::std::move(from);
  }

  inline textMessage& operator=(const textMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline textMessage& operator=(textMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const textMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const textMessage* internal_default_instance() {
    return reinterpret_cast<const textMessage*>(
               &_textMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(textMessage& a, textMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(textMessage* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline textMessage* New() const final {
    return CreateMaybeMessage<textMessage>(nullptr);
  }

  textMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<textMessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const textMessage& from);
  void MergeFrom(const textMessage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(textMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "textMessage.textMessage";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_textMessage_2eproto);
    return ::descriptor_table_textMessage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMsgFieldNumber = 1,
    kIdFieldNumber = 2,
  };
  // string msg = 1;
  void clear_msg();
  const std::string& msg() const;
  void set_msg(const std::string& value);
  void set_msg(std::string&& value);
  void set_msg(const char* value);
  void set_msg(const char* value, size_t size);
  std::string* mutable_msg();
  std::string* release_msg();
  void set_allocated_msg(std::string* msg);
  private:
  const std::string& _internal_msg() const;
  void _internal_set_msg(const std::string& value);
  std::string* _internal_mutable_msg();
  public:

  // int32 id = 2;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::int32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:textMessage.textMessage)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr msg_;
  ::PROTOBUF_NAMESPACE_ID::int32 id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_textMessage_2eproto;
};
// -------------------------------------------------------------------

class serverResponse :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:textMessage.serverResponse) */ {
 public:
  serverResponse();
  virtual ~serverResponse();

  serverResponse(const serverResponse& from);
  serverResponse(serverResponse&& from) noexcept
    : serverResponse() {
    *this = ::std::move(from);
  }

  inline serverResponse& operator=(const serverResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline serverResponse& operator=(serverResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const serverResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const serverResponse* internal_default_instance() {
    return reinterpret_cast<const serverResponse*>(
               &_serverResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(serverResponse& a, serverResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(serverResponse* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline serverResponse* New() const final {
    return CreateMaybeMessage<serverResponse>(nullptr);
  }

  serverResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<serverResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const serverResponse& from);
  void MergeFrom(const serverResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(serverResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "textMessage.serverResponse";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_textMessage_2eproto);
    return ::descriptor_table_textMessage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMsgFieldNumber = 1,
  };
  // string msg = 1;
  void clear_msg();
  const std::string& msg() const;
  void set_msg(const std::string& value);
  void set_msg(std::string&& value);
  void set_msg(const char* value);
  void set_msg(const char* value, size_t size);
  std::string* mutable_msg();
  std::string* release_msg();
  void set_allocated_msg(std::string* msg);
  private:
  const std::string& _internal_msg() const;
  void _internal_set_msg(const std::string& value);
  std::string* _internal_mutable_msg();
  public:

  // @@protoc_insertion_point(class_scope:textMessage.serverResponse)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr msg_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_textMessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// textMessage

// string msg = 1;
inline void textMessage::clear_msg() {
  msg_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& textMessage::msg() const {
  // @@protoc_insertion_point(field_get:textMessage.textMessage.msg)
  return _internal_msg();
}
inline void textMessage::set_msg(const std::string& value) {
  _internal_set_msg(value);
  // @@protoc_insertion_point(field_set:textMessage.textMessage.msg)
}
inline std::string* textMessage::mutable_msg() {
  // @@protoc_insertion_point(field_mutable:textMessage.textMessage.msg)
  return _internal_mutable_msg();
}
inline const std::string& textMessage::_internal_msg() const {
  return msg_.GetNoArena();
}
inline void textMessage::_internal_set_msg(const std::string& value) {
  
  msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void textMessage::set_msg(std::string&& value) {
  
  msg_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:textMessage.textMessage.msg)
}
inline void textMessage::set_msg(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:textMessage.textMessage.msg)
}
inline void textMessage::set_msg(const char* value, size_t size) {
  
  msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:textMessage.textMessage.msg)
}
inline std::string* textMessage::_internal_mutable_msg() {
  
  return msg_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* textMessage::release_msg() {
  // @@protoc_insertion_point(field_release:textMessage.textMessage.msg)
  
  return msg_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void textMessage::set_allocated_msg(std::string* msg) {
  if (msg != nullptr) {
    
  } else {
    
  }
  msg_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:textMessage.textMessage.msg)
}

// int32 id = 2;
inline void textMessage::clear_id() {
  id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 textMessage::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 textMessage::id() const {
  // @@protoc_insertion_point(field_get:textMessage.textMessage.id)
  return _internal_id();
}
inline void textMessage::_internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  id_ = value;
}
inline void textMessage::set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:textMessage.textMessage.id)
}

// -------------------------------------------------------------------

// serverResponse

// string msg = 1;
inline void serverResponse::clear_msg() {
  msg_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& serverResponse::msg() const {
  // @@protoc_insertion_point(field_get:textMessage.serverResponse.msg)
  return _internal_msg();
}
inline void serverResponse::set_msg(const std::string& value) {
  _internal_set_msg(value);
  // @@protoc_insertion_point(field_set:textMessage.serverResponse.msg)
}
inline std::string* serverResponse::mutable_msg() {
  // @@protoc_insertion_point(field_mutable:textMessage.serverResponse.msg)
  return _internal_mutable_msg();
}
inline const std::string& serverResponse::_internal_msg() const {
  return msg_.GetNoArena();
}
inline void serverResponse::_internal_set_msg(const std::string& value) {
  
  msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void serverResponse::set_msg(std::string&& value) {
  
  msg_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:textMessage.serverResponse.msg)
}
inline void serverResponse::set_msg(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:textMessage.serverResponse.msg)
}
inline void serverResponse::set_msg(const char* value, size_t size) {
  
  msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:textMessage.serverResponse.msg)
}
inline std::string* serverResponse::_internal_mutable_msg() {
  
  return msg_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* serverResponse::release_msg() {
  // @@protoc_insertion_point(field_release:textMessage.serverResponse.msg)
  
  return msg_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void serverResponse::set_allocated_msg(std::string* msg) {
  if (msg != nullptr) {
    
  } else {
    
  }
  msg_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:textMessage.serverResponse.msg)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace textMessage

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_textMessage_2eproto
