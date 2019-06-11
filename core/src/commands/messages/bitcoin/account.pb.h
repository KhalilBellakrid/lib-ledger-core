// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bitcoin/account.proto

#ifndef PROTOBUF_INCLUDED_bitcoin_2faccount_2eproto
#define PROTOBUF_INCLUDED_bitcoin_2faccount_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_bitcoin_2faccount_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_bitcoin_2faccount_2eproto {
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
void AddDescriptors_bitcoin_2faccount_2eproto();
namespace ledger {
namespace core {
namespace bitcoin {
class Account;
class AccountDefaultTypeInternal;
extern AccountDefaultTypeInternal _Account_default_instance_;
}  // namespace bitcoin
}  // namespace core
}  // namespace ledger
namespace google {
namespace protobuf {
template<> ::ledger::core::bitcoin::Account* Arena::CreateMaybeMessage<::ledger::core::bitcoin::Account>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ledger {
namespace core {
namespace bitcoin {

// ===================================================================

class Account :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ledger.core.bitcoin.Account) */ {
 public:
  Account();
  virtual ~Account();

  Account(const Account& from);

  inline Account& operator=(const Account& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Account(Account&& from) noexcept
    : Account() {
    *this = ::std::move(from);
  }

  inline Account& operator=(Account&& from) noexcept {
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
  static const Account& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Account* internal_default_instance() {
    return reinterpret_cast<const Account*>(
               &_Account_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Account* other);
  friend void swap(Account& a, Account& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Account* New() const final {
    return CreateMaybeMessage<Account>(nullptr);
  }

  Account* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Account>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Account& from);
  void MergeFrom(const Account& from);
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
  void InternalSwap(Account* other);
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

  // string xpub = 4;
  void clear_xpub();
  static const int kXpubFieldNumber = 4;
  const ::std::string& xpub() const;
  void set_xpub(const ::std::string& value);
  #if LANG_CXX11
  void set_xpub(::std::string&& value);
  #endif
  void set_xpub(const char* value);
  void set_xpub(const char* value, size_t size);
  ::std::string* mutable_xpub();
  ::std::string* release_xpub();
  void set_allocated_xpub(::std::string* xpub);

  // uint32 index = 3;
  void clear_index();
  static const int kIndexFieldNumber = 3;
  ::google::protobuf::uint32 index() const;
  void set_index(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:ledger.core.bitcoin.Account)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr uid_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr xpub_;
  ::google::protobuf::uint32 index_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_bitcoin_2faccount_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Account

// string uid = 1;
inline void Account::clear_uid() {
  uid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Account::uid() const {
  // @@protoc_insertion_point(field_get:ledger.core.bitcoin.Account.uid)
  return uid_.GetNoArena();
}
inline void Account::set_uid(const ::std::string& value) {
  
  uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ledger.core.bitcoin.Account.uid)
}
#if LANG_CXX11
inline void Account::set_uid(::std::string&& value) {
  
  uid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ledger.core.bitcoin.Account.uid)
}
#endif
inline void Account::set_uid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ledger.core.bitcoin.Account.uid)
}
inline void Account::set_uid(const char* value, size_t size) {
  
  uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ledger.core.bitcoin.Account.uid)
}
inline ::std::string* Account::mutable_uid() {
  
  // @@protoc_insertion_point(field_mutable:ledger.core.bitcoin.Account.uid)
  return uid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Account::release_uid() {
  // @@protoc_insertion_point(field_release:ledger.core.bitcoin.Account.uid)
  
  return uid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Account::set_allocated_uid(::std::string* uid) {
  if (uid != nullptr) {
    
  } else {
    
  }
  uid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uid);
  // @@protoc_insertion_point(field_set_allocated:ledger.core.bitcoin.Account.uid)
}

// string name = 2;
inline void Account::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Account::name() const {
  // @@protoc_insertion_point(field_get:ledger.core.bitcoin.Account.name)
  return name_.GetNoArena();
}
inline void Account::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ledger.core.bitcoin.Account.name)
}
#if LANG_CXX11
inline void Account::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ledger.core.bitcoin.Account.name)
}
#endif
inline void Account::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ledger.core.bitcoin.Account.name)
}
inline void Account::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ledger.core.bitcoin.Account.name)
}
inline ::std::string* Account::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:ledger.core.bitcoin.Account.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Account::release_name() {
  // @@protoc_insertion_point(field_release:ledger.core.bitcoin.Account.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Account::set_allocated_name(::std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:ledger.core.bitcoin.Account.name)
}

// uint32 index = 3;
inline void Account::clear_index() {
  index_ = 0u;
}
inline ::google::protobuf::uint32 Account::index() const {
  // @@protoc_insertion_point(field_get:ledger.core.bitcoin.Account.index)
  return index_;
}
inline void Account::set_index(::google::protobuf::uint32 value) {
  
  index_ = value;
  // @@protoc_insertion_point(field_set:ledger.core.bitcoin.Account.index)
}

// string xpub = 4;
inline void Account::clear_xpub() {
  xpub_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Account::xpub() const {
  // @@protoc_insertion_point(field_get:ledger.core.bitcoin.Account.xpub)
  return xpub_.GetNoArena();
}
inline void Account::set_xpub(const ::std::string& value) {
  
  xpub_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ledger.core.bitcoin.Account.xpub)
}
#if LANG_CXX11
inline void Account::set_xpub(::std::string&& value) {
  
  xpub_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ledger.core.bitcoin.Account.xpub)
}
#endif
inline void Account::set_xpub(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  xpub_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ledger.core.bitcoin.Account.xpub)
}
inline void Account::set_xpub(const char* value, size_t size) {
  
  xpub_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ledger.core.bitcoin.Account.xpub)
}
inline ::std::string* Account::mutable_xpub() {
  
  // @@protoc_insertion_point(field_mutable:ledger.core.bitcoin.Account.xpub)
  return xpub_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Account::release_xpub() {
  // @@protoc_insertion_point(field_release:ledger.core.bitcoin.Account.xpub)
  
  return xpub_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Account::set_allocated_xpub(::std::string* xpub) {
  if (xpub != nullptr) {
    
  } else {
    
  }
  xpub_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), xpub);
  // @@protoc_insertion_point(field_set_allocated:ledger.core.bitcoin.Account.xpub)
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
#endif  // PROTOBUF_INCLUDED_bitcoin_2faccount_2eproto
