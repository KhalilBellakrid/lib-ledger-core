// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bitcoin/account_config.proto

#ifndef PROTOBUF_INCLUDED_bitcoin_2faccount_5fconfig_2eproto
#define PROTOBUF_INCLUDED_bitcoin_2faccount_5fconfig_2eproto

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
#include "common/amount.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_bitcoin_2faccount_5fconfig_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_bitcoin_2faccount_5fconfig_2eproto {
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
void AddDescriptors_bitcoin_2faccount_5fconfig_2eproto();
namespace ledger {
namespace core {
namespace bitcoin {
class AccountConfiguration;
class AccountConfigurationDefaultTypeInternal;
extern AccountConfigurationDefaultTypeInternal _AccountConfiguration_default_instance_;
class AccountSettings;
class AccountSettingsDefaultTypeInternal;
extern AccountSettingsDefaultTypeInternal _AccountSettings_default_instance_;
class LedgerExplorerConfig;
class LedgerExplorerConfigDefaultTypeInternal;
extern LedgerExplorerConfigDefaultTypeInternal _LedgerExplorerConfig_default_instance_;
}  // namespace bitcoin
}  // namespace core
}  // namespace ledger
namespace google {
namespace protobuf {
template<> ::ledger::core::bitcoin::AccountConfiguration* Arena::CreateMaybeMessage<::ledger::core::bitcoin::AccountConfiguration>(Arena*);
template<> ::ledger::core::bitcoin::AccountSettings* Arena::CreateMaybeMessage<::ledger::core::bitcoin::AccountSettings>(Arena*);
template<> ::ledger::core::bitcoin::LedgerExplorerConfig* Arena::CreateMaybeMessage<::ledger::core::bitcoin::LedgerExplorerConfig>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ledger {
namespace core {
namespace bitcoin {

enum KeychainEngine {
  BIP32_P2PKH = 0,
  BIP49_P2SH = 1,
  BIP173_P2WPKH = 2,
  BIP173_P2WSH = 3,
  KeychainEngine_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::min(),
  KeychainEngine_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::max()
};
bool KeychainEngine_IsValid(int value);
const KeychainEngine KeychainEngine_MIN = BIP32_P2PKH;
const KeychainEngine KeychainEngine_MAX = BIP173_P2WSH;
const int KeychainEngine_ARRAYSIZE = KeychainEngine_MAX + 1;

const ::google::protobuf::EnumDescriptor* KeychainEngine_descriptor();
inline const ::std::string& KeychainEngine_Name(KeychainEngine value) {
  return ::google::protobuf::internal::NameOfEnum(
    KeychainEngine_descriptor(), value);
}
inline bool KeychainEngine_Parse(
    const ::std::string& name, KeychainEngine* value) {
  return ::google::protobuf::internal::ParseNamedEnum<KeychainEngine>(
    KeychainEngine_descriptor(), name, value);
}
// ===================================================================

class LedgerExplorerConfig :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ledger.core.bitcoin.LedgerExplorerConfig) */ {
 public:
  LedgerExplorerConfig();
  virtual ~LedgerExplorerConfig();

  LedgerExplorerConfig(const LedgerExplorerConfig& from);

  inline LedgerExplorerConfig& operator=(const LedgerExplorerConfig& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LedgerExplorerConfig(LedgerExplorerConfig&& from) noexcept
    : LedgerExplorerConfig() {
    *this = ::std::move(from);
  }

  inline LedgerExplorerConfig& operator=(LedgerExplorerConfig&& from) noexcept {
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
  static const LedgerExplorerConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LedgerExplorerConfig* internal_default_instance() {
    return reinterpret_cast<const LedgerExplorerConfig*>(
               &_LedgerExplorerConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(LedgerExplorerConfig* other);
  friend void swap(LedgerExplorerConfig& a, LedgerExplorerConfig& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LedgerExplorerConfig* New() const final {
    return CreateMaybeMessage<LedgerExplorerConfig>(nullptr);
  }

  LedgerExplorerConfig* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<LedgerExplorerConfig>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const LedgerExplorerConfig& from);
  void MergeFrom(const LedgerExplorerConfig& from);
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
  void InternalSwap(LedgerExplorerConfig* other);
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

  // string endpoint = 2;
  void clear_endpoint();
  static const int kEndpointFieldNumber = 2;
  const ::std::string& endpoint() const;
  void set_endpoint(const ::std::string& value);
  #if LANG_CXX11
  void set_endpoint(::std::string&& value);
  #endif
  void set_endpoint(const char* value);
  void set_endpoint(const char* value, size_t size);
  ::std::string* mutable_endpoint();
  ::std::string* release_endpoint();
  void set_allocated_endpoint(::std::string* endpoint);

  // uint32 version = 1;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // uint32 port = 3;
  void clear_port();
  static const int kPortFieldNumber = 3;
  ::google::protobuf::uint32 port() const;
  void set_port(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:ledger.core.bitcoin.LedgerExplorerConfig)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr endpoint_;
  ::google::protobuf::uint32 version_;
  ::google::protobuf::uint32 port_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_bitcoin_2faccount_5fconfig_2eproto;
};
// -------------------------------------------------------------------

class AccountSettings :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ledger.core.bitcoin.AccountSettings) */ {
 public:
  AccountSettings();
  virtual ~AccountSettings();

  AccountSettings(const AccountSettings& from);

  inline AccountSettings& operator=(const AccountSettings& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AccountSettings(AccountSettings&& from) noexcept
    : AccountSettings() {
    *this = ::std::move(from);
  }

  inline AccountSettings& operator=(AccountSettings&& from) noexcept {
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
  static const AccountSettings& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AccountSettings* internal_default_instance() {
    return reinterpret_cast<const AccountSettings*>(
               &_AccountSettings_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(AccountSettings* other);
  friend void swap(AccountSettings& a, AccountSettings& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AccountSettings* New() const final {
    return CreateMaybeMessage<AccountSettings>(nullptr);
  }

  AccountSettings* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AccountSettings>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AccountSettings& from);
  void MergeFrom(const AccountSettings& from);
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
  void InternalSwap(AccountSettings* other);
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

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
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

  // .ledger.core.bitcoin.LedgerExplorerConfig explorer = 2;
  bool has_explorer() const;
  void clear_explorer();
  static const int kExplorerFieldNumber = 2;
  const ::ledger::core::bitcoin::LedgerExplorerConfig& explorer() const;
  ::ledger::core::bitcoin::LedgerExplorerConfig* release_explorer();
  ::ledger::core::bitcoin::LedgerExplorerConfig* mutable_explorer();
  void set_allocated_explorer(::ledger::core::bitcoin::LedgerExplorerConfig* explorer);

  // .ledger.core.Amount dust_threshold = 4;
  bool has_dust_threshold() const;
  void clear_dust_threshold();
  static const int kDustThresholdFieldNumber = 4;
  const ::ledger::core::Amount& dust_threshold() const;
  ::ledger::core::Amount* release_dust_threshold();
  ::ledger::core::Amount* mutable_dust_threshold();
  void set_allocated_dust_threshold(::ledger::core::Amount* dust_threshold);

  // uint32 trust_level = 3;
  void clear_trust_level();
  static const int kTrustLevelFieldNumber = 3;
  ::google::protobuf::uint32 trust_level() const;
  void set_trust_level(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:ledger.core.bitcoin.AccountSettings)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::ledger::core::bitcoin::LedgerExplorerConfig* explorer_;
  ::ledger::core::Amount* dust_threshold_;
  ::google::protobuf::uint32 trust_level_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_bitcoin_2faccount_5fconfig_2eproto;
};
// -------------------------------------------------------------------

class AccountConfiguration :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ledger.core.bitcoin.AccountConfiguration) */ {
 public:
  AccountConfiguration();
  virtual ~AccountConfiguration();

  AccountConfiguration(const AccountConfiguration& from);

  inline AccountConfiguration& operator=(const AccountConfiguration& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AccountConfiguration(AccountConfiguration&& from) noexcept
    : AccountConfiguration() {
    *this = ::std::move(from);
  }

  inline AccountConfiguration& operator=(AccountConfiguration&& from) noexcept {
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
  static const AccountConfiguration& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AccountConfiguration* internal_default_instance() {
    return reinterpret_cast<const AccountConfiguration*>(
               &_AccountConfiguration_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(AccountConfiguration* other);
  friend void swap(AccountConfiguration& a, AccountConfiguration& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AccountConfiguration* New() const final {
    return CreateMaybeMessage<AccountConfiguration>(nullptr);
  }

  AccountConfiguration* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AccountConfiguration>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AccountConfiguration& from);
  void MergeFrom(const AccountConfiguration& from);
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
  void InternalSwap(AccountConfiguration* other);
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

  // string xpub_path = 2;
  void clear_xpub_path();
  static const int kXpubPathFieldNumber = 2;
  const ::std::string& xpub_path() const;
  void set_xpub_path(const ::std::string& value);
  #if LANG_CXX11
  void set_xpub_path(::std::string&& value);
  #endif
  void set_xpub_path(const char* value);
  void set_xpub_path(const char* value, size_t size);
  ::std::string* mutable_xpub_path();
  ::std::string* release_xpub_path();
  void set_allocated_xpub_path(::std::string* xpub_path);

  // .ledger.core.bitcoin.AccountSettings setting = 3;
  bool has_setting() const;
  void clear_setting();
  static const int kSettingFieldNumber = 3;
  const ::ledger::core::bitcoin::AccountSettings& setting() const;
  ::ledger::core::bitcoin::AccountSettings* release_setting();
  ::ledger::core::bitcoin::AccountSettings* mutable_setting();
  void set_allocated_setting(::ledger::core::bitcoin::AccountSettings* setting);

  // .ledger.core.bitcoin.KeychainEngine keychain_engine = 1;
  void clear_keychain_engine();
  static const int kKeychainEngineFieldNumber = 1;
  ::ledger::core::bitcoin::KeychainEngine keychain_engine() const;
  void set_keychain_engine(::ledger::core::bitcoin::KeychainEngine value);

  // @@protoc_insertion_point(class_scope:ledger.core.bitcoin.AccountConfiguration)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr xpub_path_;
  ::ledger::core::bitcoin::AccountSettings* setting_;
  int keychain_engine_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_bitcoin_2faccount_5fconfig_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LedgerExplorerConfig

// uint32 version = 1;
inline void LedgerExplorerConfig::clear_version() {
  version_ = 0u;
}
inline ::google::protobuf::uint32 LedgerExplorerConfig::version() const {
  // @@protoc_insertion_point(field_get:ledger.core.bitcoin.LedgerExplorerConfig.version)
  return version_;
}
inline void LedgerExplorerConfig::set_version(::google::protobuf::uint32 value) {
  
  version_ = value;
  // @@protoc_insertion_point(field_set:ledger.core.bitcoin.LedgerExplorerConfig.version)
}

// string endpoint = 2;
inline void LedgerExplorerConfig::clear_endpoint() {
  endpoint_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LedgerExplorerConfig::endpoint() const {
  // @@protoc_insertion_point(field_get:ledger.core.bitcoin.LedgerExplorerConfig.endpoint)
  return endpoint_.GetNoArena();
}
inline void LedgerExplorerConfig::set_endpoint(const ::std::string& value) {
  
  endpoint_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ledger.core.bitcoin.LedgerExplorerConfig.endpoint)
}
#if LANG_CXX11
inline void LedgerExplorerConfig::set_endpoint(::std::string&& value) {
  
  endpoint_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ledger.core.bitcoin.LedgerExplorerConfig.endpoint)
}
#endif
inline void LedgerExplorerConfig::set_endpoint(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  endpoint_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ledger.core.bitcoin.LedgerExplorerConfig.endpoint)
}
inline void LedgerExplorerConfig::set_endpoint(const char* value, size_t size) {
  
  endpoint_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ledger.core.bitcoin.LedgerExplorerConfig.endpoint)
}
inline ::std::string* LedgerExplorerConfig::mutable_endpoint() {
  
  // @@protoc_insertion_point(field_mutable:ledger.core.bitcoin.LedgerExplorerConfig.endpoint)
  return endpoint_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LedgerExplorerConfig::release_endpoint() {
  // @@protoc_insertion_point(field_release:ledger.core.bitcoin.LedgerExplorerConfig.endpoint)
  
  return endpoint_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LedgerExplorerConfig::set_allocated_endpoint(::std::string* endpoint) {
  if (endpoint != nullptr) {
    
  } else {
    
  }
  endpoint_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), endpoint);
  // @@protoc_insertion_point(field_set_allocated:ledger.core.bitcoin.LedgerExplorerConfig.endpoint)
}

// uint32 port = 3;
inline void LedgerExplorerConfig::clear_port() {
  port_ = 0u;
}
inline ::google::protobuf::uint32 LedgerExplorerConfig::port() const {
  // @@protoc_insertion_point(field_get:ledger.core.bitcoin.LedgerExplorerConfig.port)
  return port_;
}
inline void LedgerExplorerConfig::set_port(::google::protobuf::uint32 value) {
  
  port_ = value;
  // @@protoc_insertion_point(field_set:ledger.core.bitcoin.LedgerExplorerConfig.port)
}

// -------------------------------------------------------------------

// AccountSettings

// string name = 1;
inline void AccountSettings::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AccountSettings::name() const {
  // @@protoc_insertion_point(field_get:ledger.core.bitcoin.AccountSettings.name)
  return name_.GetNoArena();
}
inline void AccountSettings::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ledger.core.bitcoin.AccountSettings.name)
}
#if LANG_CXX11
inline void AccountSettings::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ledger.core.bitcoin.AccountSettings.name)
}
#endif
inline void AccountSettings::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ledger.core.bitcoin.AccountSettings.name)
}
inline void AccountSettings::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ledger.core.bitcoin.AccountSettings.name)
}
inline ::std::string* AccountSettings::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:ledger.core.bitcoin.AccountSettings.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AccountSettings::release_name() {
  // @@protoc_insertion_point(field_release:ledger.core.bitcoin.AccountSettings.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AccountSettings::set_allocated_name(::std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:ledger.core.bitcoin.AccountSettings.name)
}

// .ledger.core.bitcoin.LedgerExplorerConfig explorer = 2;
inline bool AccountSettings::has_explorer() const {
  return this != internal_default_instance() && explorer_ != nullptr;
}
inline void AccountSettings::clear_explorer() {
  if (GetArenaNoVirtual() == nullptr && explorer_ != nullptr) {
    delete explorer_;
  }
  explorer_ = nullptr;
}
inline const ::ledger::core::bitcoin::LedgerExplorerConfig& AccountSettings::explorer() const {
  const ::ledger::core::bitcoin::LedgerExplorerConfig* p = explorer_;
  // @@protoc_insertion_point(field_get:ledger.core.bitcoin.AccountSettings.explorer)
  return p != nullptr ? *p : *reinterpret_cast<const ::ledger::core::bitcoin::LedgerExplorerConfig*>(
      &::ledger::core::bitcoin::_LedgerExplorerConfig_default_instance_);
}
inline ::ledger::core::bitcoin::LedgerExplorerConfig* AccountSettings::release_explorer() {
  // @@protoc_insertion_point(field_release:ledger.core.bitcoin.AccountSettings.explorer)
  
  ::ledger::core::bitcoin::LedgerExplorerConfig* temp = explorer_;
  explorer_ = nullptr;
  return temp;
}
inline ::ledger::core::bitcoin::LedgerExplorerConfig* AccountSettings::mutable_explorer() {
  
  if (explorer_ == nullptr) {
    auto* p = CreateMaybeMessage<::ledger::core::bitcoin::LedgerExplorerConfig>(GetArenaNoVirtual());
    explorer_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ledger.core.bitcoin.AccountSettings.explorer)
  return explorer_;
}
inline void AccountSettings::set_allocated_explorer(::ledger::core::bitcoin::LedgerExplorerConfig* explorer) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete explorer_;
  }
  if (explorer) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      explorer = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, explorer, submessage_arena);
    }
    
  } else {
    
  }
  explorer_ = explorer;
  // @@protoc_insertion_point(field_set_allocated:ledger.core.bitcoin.AccountSettings.explorer)
}

// uint32 trust_level = 3;
inline void AccountSettings::clear_trust_level() {
  trust_level_ = 0u;
}
inline ::google::protobuf::uint32 AccountSettings::trust_level() const {
  // @@protoc_insertion_point(field_get:ledger.core.bitcoin.AccountSettings.trust_level)
  return trust_level_;
}
inline void AccountSettings::set_trust_level(::google::protobuf::uint32 value) {
  
  trust_level_ = value;
  // @@protoc_insertion_point(field_set:ledger.core.bitcoin.AccountSettings.trust_level)
}

// .ledger.core.Amount dust_threshold = 4;
inline bool AccountSettings::has_dust_threshold() const {
  return this != internal_default_instance() && dust_threshold_ != nullptr;
}
inline const ::ledger::core::Amount& AccountSettings::dust_threshold() const {
  const ::ledger::core::Amount* p = dust_threshold_;
  // @@protoc_insertion_point(field_get:ledger.core.bitcoin.AccountSettings.dust_threshold)
  return p != nullptr ? *p : *reinterpret_cast<const ::ledger::core::Amount*>(
      &::ledger::core::_Amount_default_instance_);
}
inline ::ledger::core::Amount* AccountSettings::release_dust_threshold() {
  // @@protoc_insertion_point(field_release:ledger.core.bitcoin.AccountSettings.dust_threshold)
  
  ::ledger::core::Amount* temp = dust_threshold_;
  dust_threshold_ = nullptr;
  return temp;
}
inline ::ledger::core::Amount* AccountSettings::mutable_dust_threshold() {
  
  if (dust_threshold_ == nullptr) {
    auto* p = CreateMaybeMessage<::ledger::core::Amount>(GetArenaNoVirtual());
    dust_threshold_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ledger.core.bitcoin.AccountSettings.dust_threshold)
  return dust_threshold_;
}
inline void AccountSettings::set_allocated_dust_threshold(::ledger::core::Amount* dust_threshold) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(dust_threshold_);
  }
  if (dust_threshold) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      dust_threshold = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, dust_threshold, submessage_arena);
    }
    
  } else {
    
  }
  dust_threshold_ = dust_threshold;
  // @@protoc_insertion_point(field_set_allocated:ledger.core.bitcoin.AccountSettings.dust_threshold)
}

// -------------------------------------------------------------------

// AccountConfiguration

// .ledger.core.bitcoin.KeychainEngine keychain_engine = 1;
inline void AccountConfiguration::clear_keychain_engine() {
  keychain_engine_ = 0;
}
inline ::ledger::core::bitcoin::KeychainEngine AccountConfiguration::keychain_engine() const {
  // @@protoc_insertion_point(field_get:ledger.core.bitcoin.AccountConfiguration.keychain_engine)
  return static_cast< ::ledger::core::bitcoin::KeychainEngine >(keychain_engine_);
}
inline void AccountConfiguration::set_keychain_engine(::ledger::core::bitcoin::KeychainEngine value) {
  
  keychain_engine_ = value;
  // @@protoc_insertion_point(field_set:ledger.core.bitcoin.AccountConfiguration.keychain_engine)
}

// string xpub_path = 2;
inline void AccountConfiguration::clear_xpub_path() {
  xpub_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AccountConfiguration::xpub_path() const {
  // @@protoc_insertion_point(field_get:ledger.core.bitcoin.AccountConfiguration.xpub_path)
  return xpub_path_.GetNoArena();
}
inline void AccountConfiguration::set_xpub_path(const ::std::string& value) {
  
  xpub_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ledger.core.bitcoin.AccountConfiguration.xpub_path)
}
#if LANG_CXX11
inline void AccountConfiguration::set_xpub_path(::std::string&& value) {
  
  xpub_path_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ledger.core.bitcoin.AccountConfiguration.xpub_path)
}
#endif
inline void AccountConfiguration::set_xpub_path(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  xpub_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ledger.core.bitcoin.AccountConfiguration.xpub_path)
}
inline void AccountConfiguration::set_xpub_path(const char* value, size_t size) {
  
  xpub_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ledger.core.bitcoin.AccountConfiguration.xpub_path)
}
inline ::std::string* AccountConfiguration::mutable_xpub_path() {
  
  // @@protoc_insertion_point(field_mutable:ledger.core.bitcoin.AccountConfiguration.xpub_path)
  return xpub_path_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AccountConfiguration::release_xpub_path() {
  // @@protoc_insertion_point(field_release:ledger.core.bitcoin.AccountConfiguration.xpub_path)
  
  return xpub_path_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AccountConfiguration::set_allocated_xpub_path(::std::string* xpub_path) {
  if (xpub_path != nullptr) {
    
  } else {
    
  }
  xpub_path_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), xpub_path);
  // @@protoc_insertion_point(field_set_allocated:ledger.core.bitcoin.AccountConfiguration.xpub_path)
}

// .ledger.core.bitcoin.AccountSettings setting = 3;
inline bool AccountConfiguration::has_setting() const {
  return this != internal_default_instance() && setting_ != nullptr;
}
inline void AccountConfiguration::clear_setting() {
  if (GetArenaNoVirtual() == nullptr && setting_ != nullptr) {
    delete setting_;
  }
  setting_ = nullptr;
}
inline const ::ledger::core::bitcoin::AccountSettings& AccountConfiguration::setting() const {
  const ::ledger::core::bitcoin::AccountSettings* p = setting_;
  // @@protoc_insertion_point(field_get:ledger.core.bitcoin.AccountConfiguration.setting)
  return p != nullptr ? *p : *reinterpret_cast<const ::ledger::core::bitcoin::AccountSettings*>(
      &::ledger::core::bitcoin::_AccountSettings_default_instance_);
}
inline ::ledger::core::bitcoin::AccountSettings* AccountConfiguration::release_setting() {
  // @@protoc_insertion_point(field_release:ledger.core.bitcoin.AccountConfiguration.setting)
  
  ::ledger::core::bitcoin::AccountSettings* temp = setting_;
  setting_ = nullptr;
  return temp;
}
inline ::ledger::core::bitcoin::AccountSettings* AccountConfiguration::mutable_setting() {
  
  if (setting_ == nullptr) {
    auto* p = CreateMaybeMessage<::ledger::core::bitcoin::AccountSettings>(GetArenaNoVirtual());
    setting_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ledger.core.bitcoin.AccountConfiguration.setting)
  return setting_;
}
inline void AccountConfiguration::set_allocated_setting(::ledger::core::bitcoin::AccountSettings* setting) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete setting_;
  }
  if (setting) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      setting = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, setting, submessage_arena);
    }
    
  } else {
    
  }
  setting_ = setting;
  // @@protoc_insertion_point(field_set_allocated:ledger.core.bitcoin.AccountConfiguration.setting)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace bitcoin
}  // namespace core
}  // namespace ledger

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::ledger::core::bitcoin::KeychainEngine> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ledger::core::bitcoin::KeychainEngine>() {
  return ::ledger::core::bitcoin::KeychainEngine_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_bitcoin_2faccount_5fconfig_2eproto
