// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet_pool.djinni

#include "WalletPool.hpp"  // my header
#include "BlockCallback.hpp"
#include "Currency.hpp"
#include "CurrencyCallback.hpp"
#include "CurrencyListCallback.hpp"
#include "DatabaseBackend.hpp"
#include "DynamicObject.hpp"
#include "ErrorCodeCallback.hpp"
#include "EventBus.hpp"
#include "HttpClient.hpp"
#include "I32Callback.hpp"
#include "LogPrinter.hpp"
#include "Logger.hpp"
#include "Marshal.hpp"
#include "PathResolver.hpp"
#include "Preferences.hpp"
#include "RandomNumberGenerator.hpp"
#include "ThreadDispatcher.hpp"
#include "WalletCallback.hpp"
#include "WalletListCallback.hpp"
#include "WebSocketClient.hpp"

namespace djinni_generated {

WalletPool::WalletPool() : ::djinni::JniInterface<::ledger::core::api::WalletPool, WalletPool>("co/ledger/core/WalletPool$CppProxy") {}

WalletPool::~WalletPool() = default;


CJNIEXPORT void JNICALL Java_co_ledger_core_WalletPool_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ledger::core::api::WalletPool>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_WalletPool_newInstance(JNIEnv* jniEnv, jobject /*this*/, jstring j_name, jstring j_password, jobject j_httpClient, jobject j_webSocketClient, jobject j_pathResolver, jobject j_logPrinter, jobject j_dispatcher, jobject j_rng, jobject j_backend, jobject j_configuration)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::ledger::core::api::WalletPool::newInstance(::djinni::String::toCpp(jniEnv, j_name),
                                                              ::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(jniEnv, j_password),
                                                              ::djinni_generated::HttpClient::toCpp(jniEnv, j_httpClient),
                                                              ::djinni_generated::WebSocketClient::toCpp(jniEnv, j_webSocketClient),
                                                              ::djinni_generated::PathResolver::toCpp(jniEnv, j_pathResolver),
                                                              ::djinni_generated::LogPrinter::toCpp(jniEnv, j_logPrinter),
                                                              ::djinni_generated::ThreadDispatcher::toCpp(jniEnv, j_dispatcher),
                                                              ::djinni_generated::RandomNumberGenerator::toCpp(jniEnv, j_rng),
                                                              ::djinni_generated::DatabaseBackend::toCpp(jniEnv, j_backend),
                                                              ::djinni_generated::DynamicObject::toCpp(jniEnv, j_configuration));
        return ::djinni::release(::djinni_generated::WalletPool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_WalletPool_00024CppProxy_native_1getLogger(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletPool>(nativeRef);
        auto r = ref->getLogger();
        return ::djinni::release(::djinni_generated::Logger::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_co_ledger_core_WalletPool_00024CppProxy_native_1getName(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletPool>(nativeRef);
        auto r = ref->getName();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_WalletPool_00024CppProxy_native_1getPreferences(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletPool>(nativeRef);
        auto r = ref->getPreferences();
        return ::djinni::release(::djinni_generated::Preferences::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_co_ledger_core_WalletPool_00024CppProxy_native_1getWalletCount(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletPool>(nativeRef);
        ref->getWalletCount(::djinni_generated::I32Callback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_ledger_core_WalletPool_00024CppProxy_native_1getWallets(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_from, jint j_size, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletPool>(nativeRef);
        ref->getWallets(::djinni::I32::toCpp(jniEnv, j_from),
                        ::djinni::I32::toCpp(jniEnv, j_size),
                        ::djinni_generated::WalletListCallback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_ledger_core_WalletPool_00024CppProxy_native_1getWallet(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_name, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletPool>(nativeRef);
        ref->getWallet(::djinni::String::toCpp(jniEnv, j_name),
                       ::djinni_generated::WalletCallback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_ledger_core_WalletPool_00024CppProxy_native_1updateWalletConfig(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_name, jobject j_configuration, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletPool>(nativeRef);
        ref->updateWalletConfig(::djinni::String::toCpp(jniEnv, j_name),
                                ::djinni_generated::DynamicObject::toCpp(jniEnv, j_configuration),
                                ::djinni_generated::ErrorCodeCallback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_ledger_core_WalletPool_00024CppProxy_native_1createWallet(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_name, jobject j_currency, jobject j_configuration, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletPool>(nativeRef);
        ref->createWallet(::djinni::String::toCpp(jniEnv, j_name),
                          ::djinni_generated::Currency::toCpp(jniEnv, j_currency),
                          ::djinni_generated::DynamicObject::toCpp(jniEnv, j_configuration),
                          ::djinni_generated::WalletCallback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_ledger_core_WalletPool_00024CppProxy_native_1getCurrencies(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletPool>(nativeRef);
        ref->getCurrencies(::djinni_generated::CurrencyListCallback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_ledger_core_WalletPool_00024CppProxy_native_1getCurrency(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_name, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletPool>(nativeRef);
        ref->getCurrency(::djinni::String::toCpp(jniEnv, j_name),
                         ::djinni_generated::CurrencyCallback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_ledger_core_WalletPool_00024CppProxy_native_1getLastBlock(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_currencyName, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletPool>(nativeRef);
        ref->getLastBlock(::djinni::String::toCpp(jniEnv, j_currencyName),
                          ::djinni_generated::BlockCallback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_WalletPool_00024CppProxy_native_1getEventBus(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletPool>(nativeRef);
        auto r = ref->getEventBus();
        return ::djinni::release(::djinni_generated::EventBus::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_co_ledger_core_WalletPool_00024CppProxy_native_1eraseDataSince(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_date, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletPool>(nativeRef);
        ref->eraseDataSince(::djinni::Date::toCpp(jniEnv, j_date),
                            ::djinni_generated::ErrorCodeCallback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_ledger_core_WalletPool_00024CppProxy_native_1freshResetAll(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletPool>(nativeRef);
        ref->freshResetAll(::djinni_generated::ErrorCodeCallback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_ledger_core_WalletPool_00024CppProxy_native_1changePassword(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_oldPassword, jstring j_newPassword, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::WalletPool>(nativeRef);
        ref->changePassword(::djinni::String::toCpp(jniEnv, j_oldPassword),
                            ::djinni::String::toCpp(jniEnv, j_newPassword),
                            ::djinni_generated::ErrorCodeCallback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
