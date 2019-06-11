// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: commands.proto

#ifndef PROTOBUF_INCLUDED_commands_2eproto
#define PROTOBUF_INCLUDED_commands_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_commands_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_commands_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_commands_2eproto();
namespace ledger {
namespace core {
class CoreRequest;
class CoreRequestDefaultTypeInternal;
extern CoreRequestDefaultTypeInternal _CoreRequest_default_instance_;
class CoreResponse;
class CoreResponseDefaultTypeInternal;
extern CoreResponseDefaultTypeInternal _CoreResponse_default_instance_;
class GetVersionResponse;
class GetVersionResponseDefaultTypeInternal;
extern GetVersionResponseDefaultTypeInternal _GetVersionResponse_default_instance_;
}  // namespace core
}  // namespace ledger
namespace google {
namespace protobuf {
template<> ::ledger::core::CoreRequest* Arena::CreateMaybeMessage<::ledger::core::CoreRequest>(Arena*);
template<> ::ledger::core::CoreResponse* Arena::CreateMaybeMessage<::ledger::core::CoreResponse>(Arena*);
template<> ::ledger::core::GetVersionResponse* Arena::CreateMaybeMessage<::ledger::core::GetVersionResponse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ledger {
namespace core {

enum CoreRequestType {
  GET_VERSION = 0,
  SET_CONFIGURATION = 1,
  BITCOIN_REQUEST = 2,
  ETHEREUM_REQUEST = 3,
  XRP_REQUEST = 4,
  CoreRequestType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::min(),
  CoreRequestType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::max()
};
bool CoreRequestType_IsValid(int value);
const CoreRequestType CoreRequestType_MIN = GET_VERSION;
const CoreRequestType CoreRequestType_MAX = XRP_REQUEST;
const int CoreRequestType_ARRAYSIZE = CoreRequestType_MAX + 1;

const ::google::protobuf::EnumDescriptor* CoreRequestType_descriptor();
inline const ::std::string& CoreRequestType_Name(CoreRequestType value) {
  return ::google::protobuf::internal::NameOfEnum(
    CoreRequestType_descriptor(), value);
}
inline bool CoreRequestType_Parse(
    const ::std::string& name, CoreRequestType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CoreRequestType>(
    CoreRequestType_descriptor(), name, value);
}
// ===================================================================

class CoreRequest :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ledger.core.CoreRequest) */ {
 public:
  CoreRequest();
  virtual ~CoreRequest();

  CoreRequest(const CoreRequest& from);

  inline CoreRequest& operator=(const CoreRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CoreRequest(CoreRequest&& from) noexcept
    : CoreRequest() {
    *this = ::std::move(from);
  }

  inline CoreRequest& operator=(CoreRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const CoreRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CoreRequest* internal_default_instance() {
    return reinterpret_cast<const CoreRequest*>(
               &_CoreRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(CoreRequest* other);
  friend void swap(CoreRequest& a, CoreRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CoreRequest* New() const final {
    return CreateMaybeMessage<CoreRequest>(nullptr);
  }

  CoreRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CoreRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CoreRequest& from);
  void MergeFrom(const CoreRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CoreRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes request_body = 2;
  void clear_request_body();
  static const int kRequestBodyFieldNumber = 2;
  const ::std::string& request_body() const;
  void set_request_body(const ::std::string& value);
  #if LANG_CXX11
  void set_request_body(::std::string&& value);
  #endif
  void set_request_body(const char* value);
  void set_request_body(const void* value, size_t size);
  ::std::string* mutable_request_body();
  ::std::string* release_request_body();
  void set_allocated_request_body(::std::string* request_body);

  // .ledger.core.CoreRequestType request_type = 1;
  void clear_request_type();
  static const int kRequestTypeFieldNumber = 1;
  ::ledger::core::CoreRequestType request_type() const;
  void set_request_type(::ledger::core::CoreRequestType value);

  // @@protoc_insertion_point(class_scope:ledger.core.CoreRequest)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr request_body_;
  int request_type_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_commands_2eproto;
};
// -------------------------------------------------------------------

class CoreResponse :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ledger.core.CoreResponse) */ {
 public:
  CoreResponse();
  virtual ~CoreResponse();

  CoreResponse(const CoreResponse& from);

  inline CoreResponse& operator=(const CoreResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CoreResponse(CoreResponse&& from) noexcept
    : CoreResponse() {
    *this = ::std::move(from);
  }

  inline CoreResponse& operator=(CoreResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const CoreResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CoreResponse* internal_default_instance() {
    return reinterpret_cast<const CoreResponse*>(
               &_CoreResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(CoreResponse* other);
  friend void swap(CoreResponse& a, CoreResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CoreResponse* New() const final {
    return CreateMaybeMessage<CoreResponse>(nullptr);
  }

  CoreResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CoreResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CoreResponse& from);
  void MergeFrom(const CoreResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CoreResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes response_body = 1;
  void clear_response_body();
  static const int kResponseBodyFieldNumber = 1;
  const ::std::string& response_body() const;
  void set_response_body(const ::std::string& value);
  #if LANG_CXX11
  void set_response_body(::std::string&& value);
  #endif
  void set_response_body(const char* value);
  void set_response_body(const void* value, size_t size);
  ::std::string* mutable_response_body();
  ::std::string* release_response_body();
  void set_allocated_response_body(::std::string* response_body);

  // string error = 2;
  void clear_error();
  static const int kErrorFieldNumber = 2;
  const ::std::string& error() const;
  void set_error(const ::std::string& value);
  #if LANG_CXX11
  void set_error(::std::string&& value);
  #endif
  void set_error(const char* value);
  void set_error(const char* value, size_t size);
  ::std::string* mutable_error();
  ::std::string* release_error();
  void set_allocated_error(::std::string* error);

  // @@protoc_insertion_point(class_scope:ledger.core.CoreResponse)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr response_body_;
  ::google::protobuf::internal::ArenaStringPtr error_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_commands_2eproto;
};
// -------------------------------------------------------------------

class GetVersionResponse :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ledger.core.GetVersionResponse) */ {
 public:
  GetVersionResponse();
  virtual ~GetVersionResponse();

  GetVersionResponse(const GetVersionResponse& from);

  inline GetVersionResponse& operator=(const GetVersionResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GetVersionResponse(GetVersionResponse&& from) noexcept
    : GetVersionResponse() {
    *this = ::std::move(from);
  }

  inline GetVersionResponse& operator=(GetVersionResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const GetVersionResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetVersionResponse* internal_default_instance() {
    return reinterpret_cast<const GetVersionResponse*>(
               &_GetVersionResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(GetVersionResponse* other);
  friend void swap(GetVersionResponse& a, GetVersionResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GetVersionResponse* New() const final {
    return CreateMaybeMessage<GetVersionResponse>(nullptr);
  }

  GetVersionResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GetVersionResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GetVersionResponse& from);
  void MergeFrom(const GetVersionResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetVersionResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 major = 1;
  void clear_major();
  static const int kMajorFieldNumber = 1;
  ::google::protobuf::int32 major() const;
  void set_major(::google::protobuf::int32 value);

  // int32 minor = 2;
  void clear_minor();
  static const int kMinorFieldNumber = 2;
  ::google::protobuf::int32 minor() const;
  void set_minor(::google::protobuf::int32 value);

  // int32 patch = 3;
  void clear_patch();
  static const int kPatchFieldNumber = 3;
  ::google::protobuf::int32 patch() const;
  void set_patch(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ledger.core.GetVersionResponse)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 major_;
  ::google::protobuf::int32 minor_;
  ::google::protobuf::int32 patch_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_commands_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CoreRequest

// .ledger.core.CoreRequestType request_type = 1;
inline void CoreRequest::clear_request_type() {
  request_type_ = 0;
}
inline ::ledger::core::CoreRequestType CoreRequest::request_type() const {
  // @@protoc_insertion_point(field_get:ledger.core.CoreRequest.request_type)
  return static_cast< ::ledger::core::CoreRequestType >(request_type_);
}
inline void CoreRequest::set_request_type(::ledger::core::CoreRequestType value) {
  
  request_type_ = value;
  // @@protoc_insertion_point(field_set:ledger.core.CoreRequest.request_type)
}

// bytes request_body = 2;
inline void CoreRequest::clear_request_body() {
  request_body_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CoreRequest::request_body() const {
  // @@protoc_insertion_point(field_get:ledger.core.CoreRequest.request_body)
  return request_body_.GetNoArena();
}
inline void CoreRequest::set_request_body(const ::std::string& value) {
  
  request_body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ledger.core.CoreRequest.request_body)
}
#if LANG_CXX11
inline void CoreRequest::set_request_body(::std::string&& value) {
  
  request_body_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ledger.core.CoreRequest.request_body)
}
#endif
inline void CoreRequest::set_request_body(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  request_body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ledger.core.CoreRequest.request_body)
}
inline void CoreRequest::set_request_body(const void* value, size_t size) {
  
  request_body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ledger.core.CoreRequest.request_body)
}
inline ::std::string* CoreRequest::mutable_request_body() {
  
  // @@protoc_insertion_point(field_mutable:ledger.core.CoreRequest.request_body)
  return request_body_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CoreRequest::release_request_body() {
  // @@protoc_insertion_point(field_release:ledger.core.CoreRequest.request_body)
  
  return request_body_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CoreRequest::set_allocated_request_body(::std::string* request_body) {
  if (request_body != nullptr) {
    
  } else {
    
  }
  request_body_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), request_body);
  // @@protoc_insertion_point(field_set_allocated:ledger.core.CoreRequest.request_body)
}

// -------------------------------------------------------------------

// CoreResponse

// bytes response_body = 1;
inline void CoreResponse::clear_response_body() {
  response_body_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CoreResponse::response_body() const {
  // @@protoc_insertion_point(field_get:ledger.core.CoreResponse.response_body)
  return response_body_.GetNoArena();
}
inline void CoreResponse::set_response_body(const ::std::string& value) {
  
  response_body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ledger.core.CoreResponse.response_body)
}
#if LANG_CXX11
inline void CoreResponse::set_response_body(::std::string&& value) {
  
  response_body_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ledger.core.CoreResponse.response_body)
}
#endif
inline void CoreResponse::set_response_body(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  response_body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ledger.core.CoreResponse.response_body)
}
inline void CoreResponse::set_response_body(const void* value, size_t size) {
  
  response_body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ledger.core.CoreResponse.response_body)
}
inline ::std::string* CoreResponse::mutable_response_body() {
  
  // @@protoc_insertion_point(field_mutable:ledger.core.CoreResponse.response_body)
  return response_body_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CoreResponse::release_response_body() {
  // @@protoc_insertion_point(field_release:ledger.core.CoreResponse.response_body)
  
  return response_body_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CoreResponse::set_allocated_response_body(::std::string* response_body) {
  if (response_body != nullptr) {
    
  } else {
    
  }
  response_body_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), response_body);
  // @@protoc_insertion_point(field_set_allocated:ledger.core.CoreResponse.response_body)
}

// string error = 2;
inline void CoreResponse::clear_error() {
  error_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CoreResponse::error() const {
  // @@protoc_insertion_point(field_get:ledger.core.CoreResponse.error)
  return error_.GetNoArena();
}
inline void CoreResponse::set_error(const ::std::string& value) {
  
  error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ledger.core.CoreResponse.error)
}
#if LANG_CXX11
inline void CoreResponse::set_error(::std::string&& value) {
  
  error_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ledger.core.CoreResponse.error)
}
#endif
inline void CoreResponse::set_error(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ledger.core.CoreResponse.error)
}
inline void CoreResponse::set_error(const char* value, size_t size) {
  
  error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ledger.core.CoreResponse.error)
}
inline ::std::string* CoreResponse::mutable_error() {
  
  // @@protoc_insertion_point(field_mutable:ledger.core.CoreResponse.error)
  return error_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CoreResponse::release_error() {
  // @@protoc_insertion_point(field_release:ledger.core.CoreResponse.error)
  
  return error_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CoreResponse::set_allocated_error(::std::string* error) {
  if (error != nullptr) {
    
  } else {
    
  }
  error_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), error);
  // @@protoc_insertion_point(field_set_allocated:ledger.core.CoreResponse.error)
}

// -------------------------------------------------------------------

// GetVersionResponse

// int32 major = 1;
inline void GetVersionResponse::clear_major() {
  major_ = 0;
}
inline ::google::protobuf::int32 GetVersionResponse::major() const {
  // @@protoc_insertion_point(field_get:ledger.core.GetVersionResponse.major)
  return major_;
}
inline void GetVersionResponse::set_major(::google::protobuf::int32 value) {
  
  major_ = value;
  // @@protoc_insertion_point(field_set:ledger.core.GetVersionResponse.major)
}

// int32 minor = 2;
inline void GetVersionResponse::clear_minor() {
  minor_ = 0;
}
inline ::google::protobuf::int32 GetVersionResponse::minor() const {
  // @@protoc_insertion_point(field_get:ledger.core.GetVersionResponse.minor)
  return minor_;
}
inline void GetVersionResponse::set_minor(::google::protobuf::int32 value) {
  
  minor_ = value;
  // @@protoc_insertion_point(field_set:ledger.core.GetVersionResponse.minor)
}

// int32 patch = 3;
inline void GetVersionResponse::clear_patch() {
  patch_ = 0;
}
inline ::google::protobuf::int32 GetVersionResponse::patch() const {
  // @@protoc_insertion_point(field_get:ledger.core.GetVersionResponse.patch)
  return patch_;
}
inline void GetVersionResponse::set_patch(::google::protobuf::int32 value) {
  
  patch_ = value;
  // @@protoc_insertion_point(field_set:ledger.core.GetVersionResponse.patch)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace core
}  // namespace ledger

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::ledger::core::CoreRequestType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ledger::core::CoreRequestType>() {
  return ::ledger::core::CoreRequestType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_commands_2eproto
