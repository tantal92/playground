// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

#include "message.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2fany_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Any_google_2fprotobuf_2fany_2eproto;
namespace pb {
class MessageBaseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<MessageBase> _instance;
} _MessageBase_default_instance_;
class type_oneDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<type_one> _instance;
} _type_one_default_instance_;
class type_twoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<type_two> _instance;
} _type_two_default_instance_;
}  // namespace pb
static void InitDefaultsscc_info_MessageBase_message_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::pb::_MessageBase_default_instance_;
    new (ptr) ::pb::MessageBase();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::pb::MessageBase::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_MessageBase_message_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_MessageBase_message_2eproto}, {
      &scc_info_Any_google_2fprotobuf_2fany_2eproto.base,}};

static void InitDefaultsscc_info_type_one_message_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::pb::_type_one_default_instance_;
    new (ptr) ::pb::type_one();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::pb::type_one::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_type_one_message_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_type_one_message_2eproto}, {}};

static void InitDefaultsscc_info_type_two_message_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::pb::_type_two_default_instance_;
    new (ptr) ::pb::type_two();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::pb::type_two::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_type_two_message_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_type_two_message_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_message_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_message_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_message_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_message_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::pb::MessageBase, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::pb::MessageBase, messageid_),
  PROTOBUF_FIELD_OFFSET(::pb::MessageBase, actualmessage_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::pb::type_one, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::pb::type_one, msg_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::pb::type_two, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::pb::type_two, msg_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::pb::MessageBase)},
  { 7, -1, sizeof(::pb::type_one)},
  { 13, -1, sizeof(::pb::type_two)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::pb::_MessageBase_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::pb::_type_one_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::pb::_type_two_default_instance_),
};

const char descriptor_table_protodef_message_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rmessage.proto\022\002pb\032\031google/protobuf/any"
  ".proto\"M\n\013MessageBase\022\021\n\tmessageId\030\001 \001(\r"
  "\022+\n\ractualMessage\030\002 \001(\0132\024.google.protobu"
  "f.Any\"\027\n\010type_one\022\013\n\003msg\030\001 \001(\t\"\027\n\010type_t"
  "wo\022\013\n\003msg\030\001 \001(\tb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_message_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fany_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_message_2eproto_sccs[3] = {
  &scc_info_MessageBase_message_2eproto.base,
  &scc_info_type_one_message_2eproto.base,
  &scc_info_type_two_message_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_message_2eproto_once;
static bool descriptor_table_message_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_message_2eproto = {
  &descriptor_table_message_2eproto_initialized, descriptor_table_protodef_message_2eproto, "message.proto", 183,
  &descriptor_table_message_2eproto_once, descriptor_table_message_2eproto_sccs, descriptor_table_message_2eproto_deps, 3, 1,
  schemas, file_default_instances, TableStruct_message_2eproto::offsets,
  file_level_metadata_message_2eproto, 3, file_level_enum_descriptors_message_2eproto, file_level_service_descriptors_message_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_message_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_message_2eproto), true);
namespace pb {

// ===================================================================

void MessageBase::InitAsDefaultInstance() {
  ::pb::_MessageBase_default_instance_._instance.get_mutable()->actualmessage_ = const_cast< PROTOBUF_NAMESPACE_ID::Any*>(
      PROTOBUF_NAMESPACE_ID::Any::internal_default_instance());
}
class MessageBase::_Internal {
 public:
  static const PROTOBUF_NAMESPACE_ID::Any& actualmessage(const MessageBase* msg);
};

const PROTOBUF_NAMESPACE_ID::Any&
MessageBase::_Internal::actualmessage(const MessageBase* msg) {
  return *msg->actualmessage_;
}
void MessageBase::clear_actualmessage() {
  if (GetArenaNoVirtual() == nullptr && actualmessage_ != nullptr) {
    delete actualmessage_;
  }
  actualmessage_ = nullptr;
}
MessageBase::MessageBase()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:pb.MessageBase)
}
MessageBase::MessageBase(const MessageBase& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_actualmessage()) {
    actualmessage_ = new PROTOBUF_NAMESPACE_ID::Any(*from.actualmessage_);
  } else {
    actualmessage_ = nullptr;
  }
  messageid_ = from.messageid_;
  // @@protoc_insertion_point(copy_constructor:pb.MessageBase)
}

void MessageBase::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_MessageBase_message_2eproto.base);
  ::memset(&actualmessage_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&messageid_) -
      reinterpret_cast<char*>(&actualmessage_)) + sizeof(messageid_));
}

MessageBase::~MessageBase() {
  // @@protoc_insertion_point(destructor:pb.MessageBase)
  SharedDtor();
}

void MessageBase::SharedDtor() {
  if (this != internal_default_instance()) delete actualmessage_;
}

void MessageBase::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MessageBase& MessageBase::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_MessageBase_message_2eproto.base);
  return *internal_default_instance();
}


void MessageBase::Clear() {
// @@protoc_insertion_point(message_clear_start:pb.MessageBase)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == nullptr && actualmessage_ != nullptr) {
    delete actualmessage_;
  }
  actualmessage_ = nullptr;
  messageid_ = 0u;
  _internal_metadata_.Clear();
}

const char* MessageBase::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint32 messageId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          messageid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .google.protobuf.Any actualMessage = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_actualmessage(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* MessageBase::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:pb.MessageBase)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 messageId = 1;
  if (this->messageid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_messageid(), target);
  }

  // .google.protobuf.Any actualMessage = 2;
  if (this->has_actualmessage()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::actualmessage(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pb.MessageBase)
  return target;
}

size_t MessageBase::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pb.MessageBase)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .google.protobuf.Any actualMessage = 2;
  if (this->has_actualmessage()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *actualmessage_);
  }

  // uint32 messageId = 1;
  if (this->messageid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_messageid());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MessageBase::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:pb.MessageBase)
  GOOGLE_DCHECK_NE(&from, this);
  const MessageBase* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<MessageBase>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:pb.MessageBase)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:pb.MessageBase)
    MergeFrom(*source);
  }
}

void MessageBase::MergeFrom(const MessageBase& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pb.MessageBase)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_actualmessage()) {
    _internal_mutable_actualmessage()->PROTOBUF_NAMESPACE_ID::Any::MergeFrom(from._internal_actualmessage());
  }
  if (from.messageid() != 0) {
    _internal_set_messageid(from._internal_messageid());
  }
}

void MessageBase::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:pb.MessageBase)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MessageBase::CopyFrom(const MessageBase& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pb.MessageBase)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageBase::IsInitialized() const {
  return true;
}

void MessageBase::InternalSwap(MessageBase* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(actualmessage_, other->actualmessage_);
  swap(messageid_, other->messageid_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MessageBase::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void type_one::InitAsDefaultInstance() {
}
class type_one::_Internal {
 public:
};

type_one::type_one()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:pb.type_one)
}
type_one::type_one(const type_one& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  msg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_msg().empty()) {
    msg_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.msg_);
  }
  // @@protoc_insertion_point(copy_constructor:pb.type_one)
}

void type_one::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_type_one_message_2eproto.base);
  msg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

type_one::~type_one() {
  // @@protoc_insertion_point(destructor:pb.type_one)
  SharedDtor();
}

void type_one::SharedDtor() {
  msg_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void type_one::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const type_one& type_one::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_type_one_message_2eproto.base);
  return *internal_default_instance();
}


void type_one::Clear() {
// @@protoc_insertion_point(message_clear_start:pb.type_one)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  msg_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

const char* type_one::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string msg = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_msg();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "pb.type_one.msg"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* type_one::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:pb.type_one)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string msg = 1;
  if (this->msg().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_msg().data(), static_cast<int>(this->_internal_msg().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "pb.type_one.msg");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_msg(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pb.type_one)
  return target;
}

size_t type_one::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pb.type_one)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string msg = 1;
  if (this->msg().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_msg());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void type_one::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:pb.type_one)
  GOOGLE_DCHECK_NE(&from, this);
  const type_one* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<type_one>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:pb.type_one)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:pb.type_one)
    MergeFrom(*source);
  }
}

void type_one::MergeFrom(const type_one& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pb.type_one)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.msg().size() > 0) {

    msg_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.msg_);
  }
}

void type_one::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:pb.type_one)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void type_one::CopyFrom(const type_one& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pb.type_one)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool type_one::IsInitialized() const {
  return true;
}

void type_one::InternalSwap(type_one* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  msg_.Swap(&other->msg_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata type_one::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void type_two::InitAsDefaultInstance() {
}
class type_two::_Internal {
 public:
};

type_two::type_two()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:pb.type_two)
}
type_two::type_two(const type_two& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  msg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_msg().empty()) {
    msg_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.msg_);
  }
  // @@protoc_insertion_point(copy_constructor:pb.type_two)
}

void type_two::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_type_two_message_2eproto.base);
  msg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

type_two::~type_two() {
  // @@protoc_insertion_point(destructor:pb.type_two)
  SharedDtor();
}

void type_two::SharedDtor() {
  msg_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void type_two::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const type_two& type_two::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_type_two_message_2eproto.base);
  return *internal_default_instance();
}


void type_two::Clear() {
// @@protoc_insertion_point(message_clear_start:pb.type_two)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  msg_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

const char* type_two::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string msg = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_msg();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "pb.type_two.msg"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* type_two::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:pb.type_two)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string msg = 1;
  if (this->msg().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_msg().data(), static_cast<int>(this->_internal_msg().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "pb.type_two.msg");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_msg(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pb.type_two)
  return target;
}

size_t type_two::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pb.type_two)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string msg = 1;
  if (this->msg().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_msg());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void type_two::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:pb.type_two)
  GOOGLE_DCHECK_NE(&from, this);
  const type_two* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<type_two>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:pb.type_two)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:pb.type_two)
    MergeFrom(*source);
  }
}

void type_two::MergeFrom(const type_two& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pb.type_two)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.msg().size() > 0) {

    msg_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.msg_);
  }
}

void type_two::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:pb.type_two)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void type_two::CopyFrom(const type_two& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pb.type_two)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool type_two::IsInitialized() const {
  return true;
}

void type_two::InternalSwap(type_two* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  msg_.Swap(&other->msg_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata type_two::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace pb
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::pb::MessageBase* Arena::CreateMaybeMessage< ::pb::MessageBase >(Arena* arena) {
  return Arena::CreateInternal< ::pb::MessageBase >(arena);
}
template<> PROTOBUF_NOINLINE ::pb::type_one* Arena::CreateMaybeMessage< ::pb::type_one >(Arena* arena) {
  return Arena::CreateInternal< ::pb::type_one >(arena);
}
template<> PROTOBUF_NOINLINE ::pb::type_two* Arena::CreateMaybeMessage< ::pb::type_two >(Arena* arena) {
  return Arena::CreateInternal< ::pb::type_two >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
