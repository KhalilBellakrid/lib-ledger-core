// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ethereum_like_wallet.djinni

#ifndef DJINNI_GENERATED_NJSETHEREUMLIKETRANSACTIONBUILDER_HPP
#define DJINNI_GENERATED_NJSETHEREUMLIKETRANSACTIONBUILDER_HPP


#include "../../../core/src/api/BitcoinLikeNetworkParameters.hpp"
#include "../../../core/src/api/Currency.hpp"
#include "../../../core/src/api/CurrencyUnit.hpp"
#include "../../../core/src/api/EthereumLikeNetworkParameters.hpp"
#include "NJSAmountCpp.hpp"
#include "NJSEthereumLikeTransactionCallback.hpp"
#include "NJSEthereumLikeTransactionCpp.hpp"
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/EthereumLikeTransactionBuilder.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSEthereumLikeTransactionBuilder: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSEthereumLikeTransactionBuilder() {};
    NJSEthereumLikeTransactionBuilder(const std::shared_ptr<ledger::core::api::EthereumLikeTransactionBuilder> &iEthereumLikeTransactionBuilder):_EthereumLikeTransactionBuilder(iEthereumLikeTransactionBuilder){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::EthereumLikeTransactionBuilder> &object);
    static Nan::Persistent<ObjectTemplate> EthereumLikeTransactionBuilder_prototype;
    std::shared_ptr<ledger::core::api::EthereumLikeTransactionBuilder> getCppImpl(){return _EthereumLikeTransactionBuilder;};

private:
    /**
     * Send funds to the given address. This method can be called multiple times to send to multiple addresses.
     * @param amount The value to send
     * @param address Address of the recipient
     * @return A reference on the same builder in order to chain calls.
     */
    static NAN_METHOD(sendToAddress);

    /**
     * Send all available funds to the given address.
     * @param address Address of the recipient
     * @return A reference on the same builder in order to chain calls.
     */
    static NAN_METHOD(wipeToAddress);

    /**
     * Set gas price (in wei) the originator is willing to pay
     * @return A reference on the same builder in order to chain calls.
     */
    static NAN_METHOD(setGasPrice);

    /**
     * Set gas limit (in wei) the originator is not willing to exceed
     * @return A reference on the same builder in order to chain calls.
     */
    static NAN_METHOD(setGasLimit);

    /** Set input data the originator wants to embed in transaction */
    static NAN_METHOD(setInputData);

    /** Build a transaction from the given builder parameters. */
    static NAN_METHOD(build);

    /**
     * Creates a clone of this builder.
     * @return A copy of the current builder instance.
     */
    static NAN_METHOD(clone);

    /** Reset the current instance to its initial state */
    static NAN_METHOD(reset);

    static NAN_METHOD(parseRawUnsignedTransaction);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
    std::shared_ptr<ledger::core::api::EthereumLikeTransactionBuilder> _EthereumLikeTransactionBuilder;
};
#endif //DJINNI_GENERATED_NJSETHEREUMLIKETRANSACTIONBUILDER_HPP
