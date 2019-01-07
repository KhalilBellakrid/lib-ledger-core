// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ripple_like_wallet.djinni

#ifndef DJINNI_GENERATED_RIPPLELIKETRANSACTION_HPP
#define DJINNI_GENERATED_RIPPLELIKETRANSACTION_HPP

#include "../utils/optional.hpp"
#include <chrono>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

namespace ledger { namespace core { namespace api {

class Amount;
class RippleLikeAddress;
class RippleLikeBlock;

/**Class representing a Ripple transaction */
class RippleLikeTransaction {
public:
    virtual ~RippleLikeTransaction() {}

    /** Get the hash of the transaction. */
    virtual std::string getHash() = 0;

    /** Get Fees (in drop) */
    virtual std::shared_ptr<Amount> getFees() = 0;

    /** Get destination XRP address */
    virtual std::shared_ptr<RippleLikeAddress> getReceiver() = 0;

    /** Get XRP sender address */
    virtual std::shared_ptr<RippleLikeAddress> getSender() = 0;

    /** Get amount of XRP to send */
    virtual std::shared_ptr<Amount> getValue() = 0;

    /** Serialize the transaction to its raw format. */
    virtual std::vector<uint8_t> serialize() = 0;

    /** Set signature of transaction, when a signature is set serialize method gives back serialized Tx */
    virtual void setSignature(const std::vector<uint8_t> & vSignature, const std::vector<uint8_t> & rSignature, const std::vector<uint8_t> & sSignature) = 0;

    virtual void setDERSignature(const std::vector<uint8_t> & signature) = 0;

    /**
     * Get the time when the transaction was issued or the time of the block including
     * this transaction
     */
    virtual std::chrono::system_clock::time_point getDate() = 0;

    /** Get block to which transaction belongs (was mined in) */
    virtual std::shared_ptr<RippleLikeBlock> getBlock() = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_RIPPLELIKETRANSACTION_HPP
