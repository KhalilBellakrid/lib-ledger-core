// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#import "LGAddress+Private.h"
#import "LGAddress.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "LGBitcoinLikeAddress+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface LGAddress ()

- (id)initWithCpp:(const std::shared_ptr<::ledger::core::api::Address>&)cppRef;

@end

@implementation LGAddress {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::ledger::core::api::Address>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::ledger::core::api::Address>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (nullable NSString *)getDerivationPath {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getDerivationPath();
        return ::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable NSString *)toString {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->toString();
        return ::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable LGBitcoinLikeAddress *)asBitcoinLikeAddress {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->asBitcoinLikeAddress();
        return ::djinni::Optional<std::experimental::optional, ::djinni_generated::BitcoinLikeAddress>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable LGAddress *)parse:(nonnull NSString *)address {
    try {
        auto objcpp_result_ = ::ledger::core::api::Address::parse(::djinni::String::toCpp(address));
        return ::djinni::Optional<std::experimental::optional, ::djinni_generated::Address>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto Address::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto Address::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<LGAddress>(cpp);
}

}  // namespace djinni_generated

@end
