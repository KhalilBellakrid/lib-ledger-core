// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bitcoin/wallet.proto

#ifndef PROTOBUF_INCLUDED_bitcoin_2fwallet_2eproto
#define PROTOBUF_INCLUDED_bitcoin_2fwallet_2eproto

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_bitcoin_2fwallet_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_bitcoin_2fwallet_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_bitcoin_2fwallet_2eproto();
namespace ledger {
namespace core {
namespace bitcoin {
class Wallet;
class WalletDefaultTypeInternal;
extern WalletDefaultTypeInternal _Wallet_default_instance_;
}  // namespace bitcoin
}  // namespace core
}  // namespace ledger
namespace google {
namespace protobuf {
template<> ::ledger::core::bitcoin::Wallet* Arena::CreateMaybeMessage<::ledger::core::bitcoin::Wallet>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ledger {
namespace core {
namespace bitcoin {

// ===================================================================

class Wallet :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ledger.core.bitcoin.Wallet) */ {
 public:
  Wallet();
  virtual ~Wallet();

  Wallet(const Wallet& from);

  inline Wallet& operator=(const Wallet& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Wallet(Wallet&& from) noexcept
    : Wallet() {
    *this = ::std::move(from);
  }

  inline Wallet& operator=(Wallet&& from) noexcept {
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
  static const Wallet& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Wallet* internal_default_instance() {
    return reinterpret_cast<const Wallet*>(
               &_Wallet_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Wallet* other);
  friend void swap(Wallet& a, Wallet& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Wallet* New() const final {
    return CreateMaybeMessage<Wallet>(nullptr);
  }

  Wallet* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Wallet>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Wallet& from);
  void MergeFrom(const Wallet& from);
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
  void InternalSwap(Wallet* other);
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

  // string uid = 1;
  void clear_uid();
  static const int kUidFieldNumber = 1;
  const ::std::string& uid() const;
  void set_uid(const ::std::string& value);
  #if LANG_CXX11
  void set_uid(::std::string&& value);
  #endif
  void set_uid(const char* value);
  void set_uid(const char* value, size_t size);
  ::std::string* mutable_uid();
  ::std::string* release_uid();
  void set_allocated_uid(::std::string* uid);

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:ledger.core.bitcoin.Wallet)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr uid_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_bitcoin_2fwallet_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Wallet

// string uid = 1;
inline void Wallet::clear_uid() {
  uid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Wallet::uid() const {
  // @@protoc_insertion_point(field_get:ledger.core.bitcoin.Wallet.uid)
  return uid_.GetNoArena();
}
inline void Wallet::set_uid(const ::std::string& value) {
  
  uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ledger.core.bitcoin.Wallet.uid)
}
#if LANG_CXX11
inline void Wallet::set_uid(::std::string&& value) {
  
  uid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ledger.core.bitcoin.Wallet.uid)
}
#endif
inline void Wallet::set_uid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ledger.core.bitcoin.Wallet.uid)
}
inline void Wallet::set_uid(const char* value, size_t size) {
  
  uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ledger.core.bitcoin.Wallet.uid)
}
inline ::std::string* Wallet::mutable_uid() {
  
  // @@protoc_insertion_point(field_mutable:ledger.core.bitcoin.Wallet.uid)
  return uid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Wallet::release_uid() {
  // @@protoc_insertion_point(field_release:ledger.core.bitcoin.Wallet.uid)
  
  return uid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Wallet::set_allocated_uid(::std::string* uid) {
  if (uid != nullptr) {
    
  } else {
    
  }
  uid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uid);
  // @@protoc_insertion_point(field_set_allocated:ledger.core.bitcoin.Wallet.uid)
}

// string name = 2;
inline void Wallet::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Wallet::name() const {
  // @@protoc_insertion_point(field_get:ledger.core.bitcoin.Wallet.name)
  return name_.GetNoArena();
}
inline void Wallet::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ledger.core.bitcoin.Wallet.name)
}
#if LANG_CXX11
inline void Wallet::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ledger.core.bitcoin.Wallet.name)
}
#endif
inline void Wallet::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ledger.core.bitcoin.Wallet.name)
}
inline void Wallet::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ledger.core.bitcoin.Wallet.name)
}
inline ::std::string* Wallet::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:ledger.core.bitcoin.Wallet.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Wallet::release_name() {
  // @@protoc_insertion_point(field_release:ledger.core.bitcoin.Wallet.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Wallet::set_allocated_name(::std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:ledger.core.bitcoin.Wallet.name)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace bitcoin
}  // namespace core
}  // namespace ledger

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_bitcoin_2fwallet_2eproto
