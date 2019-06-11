// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bitcoin/operation.proto

#include "bitcoin/operation.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

extern PROTOBUF_INTERNAL_EXPORT_common_2famount_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Amount_common_2famount_2eproto;
namespace ledger {
namespace core {
namespace bitcoin {
class OperationDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Operation> _instance;
} _Operation_default_instance_;
}  // namespace bitcoin
}  // namespace core
}  // namespace ledger
static void InitDefaultsOperation_bitcoin_2foperation_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ledger::core::bitcoin::_Operation_default_instance_;
    new (ptr) ::ledger::core::bitcoin::Operation();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ledger::core::bitcoin::Operation::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_Operation_bitcoin_2foperation_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsOperation_bitcoin_2foperation_2eproto}, {
      &scc_info_Amount_common_2famount_2eproto.base,}};

void InitDefaults_bitcoin_2foperation_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_Operation_bitcoin_2foperation_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_bitcoin_2foperation_2eproto[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors_bitcoin_2foperation_2eproto[1];
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_bitcoin_2foperation_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_bitcoin_2foperation_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ledger::core::bitcoin::Operation, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ledger::core::bitcoin::Operation, amount_),
  PROTOBUF_FIELD_OFFSET(::ledger::core::bitcoin::Operation, fee_),
  PROTOBUF_FIELD_OFFSET(::ledger::core::bitcoin::Operation, receivers_),
  PROTOBUF_FIELD_OFFSET(::ledger::core::bitcoin::Operation, senders_),
  PROTOBUF_FIELD_OFFSET(::ledger::core::bitcoin::Operation, operation_type_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ledger::core::bitcoin::Operation)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::ledger::core::bitcoin::_Operation_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_bitcoin_2foperation_2eproto = {
  {}, AddDescriptors_bitcoin_2foperation_2eproto, "bitcoin/operation.proto", schemas,
  file_default_instances, TableStruct_bitcoin_2foperation_2eproto::offsets,
  file_level_metadata_bitcoin_2foperation_2eproto, 1, file_level_enum_descriptors_bitcoin_2foperation_2eproto, file_level_service_descriptors_bitcoin_2foperation_2eproto,
};

const char descriptor_table_protodef_bitcoin_2foperation_2eproto[] =
  "\n\027bitcoin/operation.proto\022\023ledger.core.b"
  "itcoin\032\023common/amount.proto\"\344\001\n\tOperatio"
  "n\022#\n\006amount\030\001 \001(\0132\023.ledger.core.Amount\022 "
  "\n\003fee\030\002 \001(\0132\023.ledger.core.Amount\022\021\n\trece"
  "ivers\030\003 \003(\t\022\017\n\007senders\030\004 \003(\t\022D\n\016operatio"
  "n_type\030\005 \001(\0162,.ledger.core.bitcoin.Opera"
  "tion.OperationType\"&\n\rOperationType\022\010\n\004S"
  "END\020\000\022\013\n\007RECEIVE\020\001b\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_bitcoin_2foperation_2eproto = {
  false, InitDefaults_bitcoin_2foperation_2eproto, 
  descriptor_table_protodef_bitcoin_2foperation_2eproto,
  "bitcoin/operation.proto", &assign_descriptors_table_bitcoin_2foperation_2eproto, 306,
};

void AddDescriptors_bitcoin_2foperation_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
    ::AddDescriptors_common_2famount_2eproto,
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_bitcoin_2foperation_2eproto, deps, 1);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_bitcoin_2foperation_2eproto = []() { AddDescriptors_bitcoin_2foperation_2eproto(); return true; }();
namespace ledger {
namespace core {
namespace bitcoin {
const ::google::protobuf::EnumDescriptor* Operation_OperationType_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&assign_descriptors_table_bitcoin_2foperation_2eproto);
  return file_level_enum_descriptors_bitcoin_2foperation_2eproto[0];
}
bool Operation_OperationType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Operation_OperationType Operation::SEND;
const Operation_OperationType Operation::RECEIVE;
const Operation_OperationType Operation::OperationType_MIN;
const Operation_OperationType Operation::OperationType_MAX;
const int Operation::OperationType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void Operation::InitAsDefaultInstance() {
  ::ledger::core::bitcoin::_Operation_default_instance_._instance.get_mutable()->amount_ = const_cast< ::ledger::core::Amount*>(
      ::ledger::core::Amount::internal_default_instance());
  ::ledger::core::bitcoin::_Operation_default_instance_._instance.get_mutable()->fee_ = const_cast< ::ledger::core::Amount*>(
      ::ledger::core::Amount::internal_default_instance());
}
class Operation::HasBitSetters {
 public:
  static const ::ledger::core::Amount& amount(const Operation* msg);
  static const ::ledger::core::Amount& fee(const Operation* msg);
};

const ::ledger::core::Amount&
Operation::HasBitSetters::amount(const Operation* msg) {
  return *msg->amount_;
}
const ::ledger::core::Amount&
Operation::HasBitSetters::fee(const Operation* msg) {
  return *msg->fee_;
}
void Operation::clear_amount() {
  if (GetArenaNoVirtual() == nullptr && amount_ != nullptr) {
    delete amount_;
  }
  amount_ = nullptr;
}
void Operation::clear_fee() {
  if (GetArenaNoVirtual() == nullptr && fee_ != nullptr) {
    delete fee_;
  }
  fee_ = nullptr;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Operation::kAmountFieldNumber;
const int Operation::kFeeFieldNumber;
const int Operation::kReceiversFieldNumber;
const int Operation::kSendersFieldNumber;
const int Operation::kOperationTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Operation::Operation()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ledger.core.bitcoin.Operation)
}
Operation::Operation(const Operation& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      receivers_(from.receivers_),
      senders_(from.senders_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_amount()) {
    amount_ = new ::ledger::core::Amount(*from.amount_);
  } else {
    amount_ = nullptr;
  }
  if (from.has_fee()) {
    fee_ = new ::ledger::core::Amount(*from.fee_);
  } else {
    fee_ = nullptr;
  }
  operation_type_ = from.operation_type_;
  // @@protoc_insertion_point(copy_constructor:ledger.core.bitcoin.Operation)
}

void Operation::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_Operation_bitcoin_2foperation_2eproto.base);
  ::memset(&amount_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&operation_type_) -
      reinterpret_cast<char*>(&amount_)) + sizeof(operation_type_));
}

Operation::~Operation() {
  // @@protoc_insertion_point(destructor:ledger.core.bitcoin.Operation)
  SharedDtor();
}

void Operation::SharedDtor() {
  if (this != internal_default_instance()) delete amount_;
  if (this != internal_default_instance()) delete fee_;
}

void Operation::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Operation& Operation::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_Operation_bitcoin_2foperation_2eproto.base);
  return *internal_default_instance();
}


void Operation::Clear() {
// @@protoc_insertion_point(message_clear_start:ledger.core.bitcoin.Operation)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  receivers_.Clear();
  senders_.Clear();
  if (GetArenaNoVirtual() == nullptr && amount_ != nullptr) {
    delete amount_;
  }
  amount_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && fee_ != nullptr) {
    delete fee_;
  }
  fee_ = nullptr;
  operation_type_ = 0;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Operation::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<Operation*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // .ledger.core.Amount amount = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::ledger::core::Amount::_InternalParse;
        object = msg->mutable_amount();
        if (size > end - ptr) goto len_delim_till_end;
        ptr += size;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
            {parser_till_end, object}, ptr - size, ptr));
        break;
      }
      // .ledger.core.Amount fee = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 18) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::ledger::core::Amount::_InternalParse;
        object = msg->mutable_fee();
        if (size > end - ptr) goto len_delim_till_end;
        ptr += size;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
            {parser_till_end, object}, ptr - size, ptr));
        break;
      }
      // repeated string receivers = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 26) goto handle_unusual;
        do {
          ptr = ::google::protobuf::io::ReadSize(ptr, &size);
          GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
          ctx->extra_parse_data().SetFieldName("ledger.core.bitcoin.Operation.receivers");
          object = msg->add_receivers();
          if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
            parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
            goto string_till_end;
          }
          GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
          ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
          ptr += size;
          if (ptr >= end) break;
        } while ((::google::protobuf::io::UnalignedLoad<::google::protobuf::uint64>(ptr) & 255) == 26 && (ptr += 1));
        break;
      }
      // repeated string senders = 4;
      case 4: {
        if (static_cast<::google::protobuf::uint8>(tag) != 34) goto handle_unusual;
        do {
          ptr = ::google::protobuf::io::ReadSize(ptr, &size);
          GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
          ctx->extra_parse_data().SetFieldName("ledger.core.bitcoin.Operation.senders");
          object = msg->add_senders();
          if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
            parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
            goto string_till_end;
          }
          GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
          ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
          ptr += size;
          if (ptr >= end) break;
        } while ((::google::protobuf::io::UnalignedLoad<::google::protobuf::uint64>(ptr) & 255) == 34 && (ptr += 1));
        break;
      }
      // .ledger.core.bitcoin.Operation.OperationType operation_type = 5;
      case 5: {
        if (static_cast<::google::protobuf::uint8>(tag) != 40) goto handle_unusual;
        ::google::protobuf::uint64 val = ::google::protobuf::internal::ReadVarint(&ptr);
        msg->set_operation_type(static_cast<::ledger::core::bitcoin::Operation_OperationType>(val));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Operation::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ledger.core.bitcoin.Operation)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .ledger.core.Amount amount = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_amount()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .ledger.core.Amount fee = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (18 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_fee()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string receivers = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (26 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_receivers()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->receivers(this->receivers_size() - 1).data(),
            static_cast<int>(this->receivers(this->receivers_size() - 1).length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ledger.core.bitcoin.Operation.receivers"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string senders = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (34 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_senders()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->senders(this->senders_size() - 1).data(),
            static_cast<int>(this->senders(this->senders_size() - 1).length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ledger.core.bitcoin.Operation.senders"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .ledger.core.bitcoin.Operation.OperationType operation_type = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (40 & 0xFF)) {
          int value = 0;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_operation_type(static_cast< ::ledger::core::bitcoin::Operation_OperationType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ledger.core.bitcoin.Operation)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ledger.core.bitcoin.Operation)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Operation::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ledger.core.bitcoin.Operation)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .ledger.core.Amount amount = 1;
  if (this->has_amount()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, HasBitSetters::amount(this), output);
  }

  // .ledger.core.Amount fee = 2;
  if (this->has_fee()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, HasBitSetters::fee(this), output);
  }

  // repeated string receivers = 3;
  for (int i = 0, n = this->receivers_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->receivers(i).data(), static_cast<int>(this->receivers(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ledger.core.bitcoin.Operation.receivers");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->receivers(i), output);
  }

  // repeated string senders = 4;
  for (int i = 0, n = this->senders_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->senders(i).data(), static_cast<int>(this->senders(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ledger.core.bitcoin.Operation.senders");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->senders(i), output);
  }

  // .ledger.core.bitcoin.Operation.OperationType operation_type = 5;
  if (this->operation_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->operation_type(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:ledger.core.bitcoin.Operation)
}

::google::protobuf::uint8* Operation::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:ledger.core.bitcoin.Operation)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .ledger.core.Amount amount = 1;
  if (this->has_amount()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, HasBitSetters::amount(this), target);
  }

  // .ledger.core.Amount fee = 2;
  if (this->has_fee()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, HasBitSetters::fee(this), target);
  }

  // repeated string receivers = 3;
  for (int i = 0, n = this->receivers_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->receivers(i).data(), static_cast<int>(this->receivers(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ledger.core.bitcoin.Operation.receivers");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(3, this->receivers(i), target);
  }

  // repeated string senders = 4;
  for (int i = 0, n = this->senders_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->senders(i).data(), static_cast<int>(this->senders(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ledger.core.bitcoin.Operation.senders");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(4, this->senders(i), target);
  }

  // .ledger.core.bitcoin.Operation.OperationType operation_type = 5;
  if (this->operation_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      5, this->operation_type(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ledger.core.bitcoin.Operation)
  return target;
}

size_t Operation::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ledger.core.bitcoin.Operation)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string receivers = 3;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->receivers_size());
  for (int i = 0, n = this->receivers_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->receivers(i));
  }

  // repeated string senders = 4;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->senders_size());
  for (int i = 0, n = this->senders_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->senders(i));
  }

  // .ledger.core.Amount amount = 1;
  if (this->has_amount()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *amount_);
  }

  // .ledger.core.Amount fee = 2;
  if (this->has_fee()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *fee_);
  }

  // .ledger.core.bitcoin.Operation.OperationType operation_type = 5;
  if (this->operation_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->operation_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Operation::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ledger.core.bitcoin.Operation)
  GOOGLE_DCHECK_NE(&from, this);
  const Operation* source =
      ::google::protobuf::DynamicCastToGenerated<Operation>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ledger.core.bitcoin.Operation)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ledger.core.bitcoin.Operation)
    MergeFrom(*source);
  }
}

void Operation::MergeFrom(const Operation& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ledger.core.bitcoin.Operation)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  receivers_.MergeFrom(from.receivers_);
  senders_.MergeFrom(from.senders_);
  if (from.has_amount()) {
    mutable_amount()->::ledger::core::Amount::MergeFrom(from.amount());
  }
  if (from.has_fee()) {
    mutable_fee()->::ledger::core::Amount::MergeFrom(from.fee());
  }
  if (from.operation_type() != 0) {
    set_operation_type(from.operation_type());
  }
}

void Operation::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ledger.core.bitcoin.Operation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Operation::CopyFrom(const Operation& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ledger.core.bitcoin.Operation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Operation::IsInitialized() const {
  return true;
}

void Operation::Swap(Operation* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Operation::InternalSwap(Operation* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  receivers_.InternalSwap(CastToBase(&other->receivers_));
  senders_.InternalSwap(CastToBase(&other->senders_));
  swap(amount_, other->amount_);
  swap(fee_, other->fee_);
  swap(operation_type_, other->operation_type_);
}

::google::protobuf::Metadata Operation::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_bitcoin_2foperation_2eproto);
  return ::file_level_metadata_bitcoin_2foperation_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace bitcoin
}  // namespace core
}  // namespace ledger
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::ledger::core::bitcoin::Operation* Arena::CreateMaybeMessage< ::ledger::core::bitcoin::Operation >(Arena* arena) {
  return Arena::CreateInternal< ::ledger::core::bitcoin::Operation >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
