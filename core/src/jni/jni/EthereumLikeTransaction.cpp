// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ethereum_like_wallet.djinni

#include "EthereumLikeTransaction.hpp"  // my header
#include "Amount.hpp"
#include "EthereumLikeAddress.hpp"
#include "EthereumLikeBlock.hpp"
#include "Marshal.hpp"

namespace djinni_generated {

EthereumLikeTransaction::EthereumLikeTransaction() : ::djinni::JniInterface<::ledger::core::api::EthereumLikeTransaction, EthereumLikeTransaction>("co/ledger/core/EthereumLikeTransaction$CppProxy") {}

EthereumLikeTransaction::~EthereumLikeTransaction() = default;


CJNIEXPORT void JNICALL Java_co_ledger_core_EthereumLikeTransaction_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ledger::core::api::EthereumLikeTransaction>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jstring JNICALL Java_co_ledger_core_EthereumLikeTransaction_00024CppProxy_native_1getHash(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::EthereumLikeTransaction>(nativeRef);
        auto r = ref->getHash();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_co_ledger_core_EthereumLikeTransaction_00024CppProxy_native_1getNonce(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::EthereumLikeTransaction>(nativeRef);
        auto r = ref->getNonce();
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_EthereumLikeTransaction_00024CppProxy_native_1getGasPrice(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::EthereumLikeTransaction>(nativeRef);
        auto r = ref->getGasPrice();
        return ::djinni::release(::djinni_generated::Amount::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_EthereumLikeTransaction_00024CppProxy_native_1getGasLimit(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::EthereumLikeTransaction>(nativeRef);
        auto r = ref->getGasLimit();
        return ::djinni::release(::djinni_generated::Amount::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_EthereumLikeTransaction_00024CppProxy_native_1getGasUsed(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::EthereumLikeTransaction>(nativeRef);
        auto r = ref->getGasUsed();
        return ::djinni::release(::djinni_generated::Amount::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_EthereumLikeTransaction_00024CppProxy_native_1getReceiver(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::EthereumLikeTransaction>(nativeRef);
        auto r = ref->getReceiver();
        return ::djinni::release(::djinni_generated::EthereumLikeAddress::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_EthereumLikeTransaction_00024CppProxy_native_1getSender(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::EthereumLikeTransaction>(nativeRef);
        auto r = ref->getSender();
        return ::djinni::release(::djinni_generated::EthereumLikeAddress::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_EthereumLikeTransaction_00024CppProxy_native_1getValue(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::EthereumLikeTransaction>(nativeRef);
        auto r = ref->getValue();
        return ::djinni::release(::djinni_generated::Amount::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jbyteArray JNICALL Java_co_ledger_core_EthereumLikeTransaction_00024CppProxy_native_1getData(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::EthereumLikeTransaction>(nativeRef);
        auto r = ref->getData();
        return ::djinni::release(::djinni::Optional<std::experimental::optional, ::djinni::Binary>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jbyteArray JNICALL Java_co_ledger_core_EthereumLikeTransaction_00024CppProxy_native_1serialize(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::EthereumLikeTransaction>(nativeRef);
        auto r = ref->serialize();
        return ::djinni::release(::djinni::Binary::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_co_ledger_core_EthereumLikeTransaction_00024CppProxy_native_1setSignature(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jbyteArray j_rSignature, jbyteArray j_sSignature)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::EthereumLikeTransaction>(nativeRef);
        ref->setSignature(::djinni::Binary::toCpp(jniEnv, j_rSignature),
                          ::djinni::Binary::toCpp(jniEnv, j_sSignature));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_ledger_core_EthereumLikeTransaction_00024CppProxy_native_1setDERSignature(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jbyteArray j_signature)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::EthereumLikeTransaction>(nativeRef);
        ref->setDERSignature(::djinni::Binary::toCpp(jniEnv, j_signature));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_EthereumLikeTransaction_00024CppProxy_native_1getDate(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::EthereumLikeTransaction>(nativeRef);
        auto r = ref->getDate();
        return ::djinni::release(::djinni::Date::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_EthereumLikeTransaction_00024CppProxy_native_1getBlock(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::EthereumLikeTransaction>(nativeRef);
        auto r = ref->getBlock();
        return ::djinni::release(::djinni::Optional<std::experimental::optional, ::djinni_generated::EthereumLikeBlock>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
