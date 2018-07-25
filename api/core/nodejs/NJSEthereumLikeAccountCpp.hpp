// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ethereum_like_wallet.djinni

#ifndef DJINNI_GENERATED_NJSETHEREUMLIKEACCOUNT_HPP
#define DJINNI_GENERATED_NJSETHEREUMLIKEACCOUNT_HPP


#include "NJSEthereumLikeTransactionBuilderCpp.hpp"
#include "NJSEthereumLikeTransactionCpp.hpp"
#include "NJSStringCallback.hpp"
#include <cstdint>
#include <memory>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/EthereumLikeAccount.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSEthereumLikeAccount: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSEthereumLikeAccount() {};
    NJSEthereumLikeAccount(const std::shared_ptr<ledger::core::api::EthereumLikeAccount> &iEthereumLikeAccount):_EthereumLikeAccount(iEthereumLikeAccount){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::EthereumLikeAccount> &object);
    static Nan::Persistent<ObjectTemplate> EthereumLikeAccount_prototype;
    std::shared_ptr<ledger::core::api::EthereumLikeAccount> getCppImpl(){return _EthereumLikeAccount;};

private:
    static NAN_METHOD(broadcastRawTransaction);

    static NAN_METHOD(broadcastTransaction);

    static NAN_METHOD(buildTransaction);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
    std::shared_ptr<ledger::core::api::EthereumLikeAccount> _EthereumLikeAccount;
};
#endif //DJINNI_GENERATED_NJSETHEREUMLIKEACCOUNT_HPP
