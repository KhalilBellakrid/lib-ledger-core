// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#include "StellarLikeAccountSignerListCallback.hpp"  // my header
#include "Error.hpp"
#include "Marshal.hpp"
#include "StellarLikeAccountSigner.hpp"

namespace djinni_generated {

StellarLikeAccountSignerListCallback::StellarLikeAccountSignerListCallback() : ::djinni::JniInterface<::ledger::core::api::StellarLikeAccountSignerListCallback, StellarLikeAccountSignerListCallback>() {}

StellarLikeAccountSignerListCallback::~StellarLikeAccountSignerListCallback() = default;

StellarLikeAccountSignerListCallback::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

StellarLikeAccountSignerListCallback::JavaProxy::~JavaProxy() = default;

void StellarLikeAccountSignerListCallback::JavaProxy::onCallback(const std::experimental::optional<std::vector<::ledger::core::api::StellarLikeAccountSigner>> & c_result, const std::experimental::optional<::ledger::core::api::Error> & c_error) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::StellarLikeAccountSignerListCallback>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onCallback,
                           ::djinni::get(::djinni::Optional<std::experimental::optional, ::djinni::List<::djinni_generated::StellarLikeAccountSigner>>::fromCpp(jniEnv, c_result)),
                           ::djinni::get(::djinni::Optional<std::experimental::optional, ::djinni_generated::Error>::fromCpp(jniEnv, c_error)));
    ::djinni::jniExceptionCheck(jniEnv);
}

}  // namespace djinni_generated