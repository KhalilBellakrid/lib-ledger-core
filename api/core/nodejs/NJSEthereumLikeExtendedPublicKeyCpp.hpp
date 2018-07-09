// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

#ifndef DJINNI_GENERATED_NJSETHEREUMLIKEEXTENDEDPUBLICKEY_HPP
#define DJINNI_GENERATED_NJSETHEREUMLIKEEXTENDEDPUBLICKEY_HPP


#include "NJSEthereumLikeAddressCpp.hpp"
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/EthereumLikeExtendedPublicKey.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSEthereumLikeExtendedPublicKey: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSEthereumLikeExtendedPublicKey() {};
    NJSEthereumLikeExtendedPublicKey(const std::shared_ptr<ledger::core::api::EthereumLikeExtendedPublicKey> &iEthereumLikeExtendedPublicKey):_EthereumLikeExtendedPublicKey(iEthereumLikeExtendedPublicKey){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::EthereumLikeExtendedPublicKey> &object);
    static Nan::Persistent<ObjectTemplate> EthereumLikeExtendedPublicKey_prototype;
    std::shared_ptr<ledger::core::api::EthereumLikeExtendedPublicKey> getCppImpl(){return _EthereumLikeExtendedPublicKey;};

private:
    static NAN_METHOD(derive);

    static NAN_METHOD(derivePublicKey);

    static NAN_METHOD(deriveHash160);

    static NAN_METHOD(toBase58);

    static NAN_METHOD(getRootPath);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
    std::shared_ptr<ledger::core::api::EthereumLikeExtendedPublicKey> _EthereumLikeExtendedPublicKey;
};
#endif //DJINNI_GENERATED_NJSETHEREUMLIKEEXTENDEDPUBLICKEY_HPP
