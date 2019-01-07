// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ripple_like_wallet.djinni

#ifndef DJINNI_GENERATED_RIPPLELIKEACCOUNT_HPP
#define DJINNI_GENERATED_RIPPLELIKEACCOUNT_HPP

#include <cstdint>
#include <memory>
#include <vector>

namespace ledger { namespace core { namespace api {

class RippleLikeTransaction;
class RippleLikeTransactionBuilder;
class StringCallback;

/**Class representing a Ripple account */
class RippleLikeAccount {
public:
    virtual ~RippleLikeAccount() {}

    virtual void broadcastRawTransaction(const std::vector<uint8_t> & transaction, const std::shared_ptr<StringCallback> & callback) = 0;

    virtual void broadcastTransaction(const std::shared_ptr<RippleLikeTransaction> & transaction, const std::shared_ptr<StringCallback> & callback) = 0;

    virtual std::shared_ptr<RippleLikeTransactionBuilder> buildTransaction() = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_RIPPLELIKEACCOUNT_HPP
