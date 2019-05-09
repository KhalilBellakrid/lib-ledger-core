// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tezos_like_wallet.djinni

#ifndef DJINNI_GENERATED_TEZOSLIKETRANSACTION_HPP
#define DJINNI_GENERATED_TEZOSLIKETRANSACTION_HPP

#include "../utils/optional.hpp"
#include <chrono>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>
#ifndef LIBCORE_EXPORT
    #if defined(_MSC_VER)
       #include <libcore_export.h>
    #else
       #define LIBCORE_EXPORT
    #endif
#endif

namespace ledger { namespace core { namespace api {

class Amount;
class BigInt;
class TezosLikeAddress;

/**Class representing a Tezos transaction */
class LIBCORE_EXPORT TezosLikeTransaction {
public:
    virtual ~TezosLikeTransaction() {}

    /** Get the hash of the transaction. */
    virtual std::string getHash() = 0;

    /** Get Fees (in drop) */
    virtual std::shared_ptr<Amount> getFees() = 0;

    /** Get destination XRP address */
    virtual std::shared_ptr<TezosLikeAddress> getReceiver() = 0;

    /** Get XRP sender address */
    virtual std::shared_ptr<TezosLikeAddress> getSender() = 0;

    /** Get amount of XRP to send */
    virtual std::shared_ptr<Amount> getValue() = 0;

    /** Serialize the transaction to its raw format. */
    virtual std::vector<uint8_t> serialize() = 0;

    /** Set signature of transaction, when a signature is set serialize method gives back serialized Tx */
    virtual void setSignature(const std::vector<uint8_t> & rSignature, const std::vector<uint8_t> & sSignature) = 0;

    virtual void setDERSignature(const std::vector<uint8_t> & signature) = 0;

    /**
     * Get the time when the transaction was issued or the time of the block including
     * this transaction
     */
    virtual std::chrono::system_clock::time_point getDate() = 0;

    /** Get Signing public Key */
    virtual std::vector<uint8_t> getSigningPubKey() = 0;

    virtual std::shared_ptr<BigInt> getCounter() = 0;

    virtual std::shared_ptr<Amount> getGasLimit() = 0;

    virtual std::shared_ptr<Amount> getStorageLimit() = 0;

    /** Get hash of block in which tx is included */
    virtual std::experimental::optional<std::string> getBlockHash() = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_TEZOSLIKETRANSACTION_HPP