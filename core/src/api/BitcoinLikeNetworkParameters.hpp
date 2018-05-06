// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

#ifndef DJINNI_GENERATED_BITCOINLIKENETWORKPARAMETERS_HPP
#define DJINNI_GENERATED_BITCOINLIKENETWORKPARAMETERS_HPP

#include "BitcoinLikeFeePolicy.hpp"
#include <cstdint>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

namespace ledger { namespace core { namespace api {

struct BitcoinLikeNetworkParameters final {
    std::string Identifier;
    std::vector<uint8_t> P2PKHVersion;
    std::vector<uint8_t> P2SHVersion;
    std::vector<uint8_t> XPUBVersion;
    BitcoinLikeFeePolicy FeePolicy;
    int64_t DustAmount;
    std::string MessagePrefix;
    bool UsesTimestampedTransaction;
    std::vector<uint8_t> SigHash;

    BitcoinLikeNetworkParameters(std::string Identifier_,
                                 std::vector<uint8_t> P2PKHVersion_,
                                 std::vector<uint8_t> P2SHVersion_,
                                 std::vector<uint8_t> XPUBVersion_,
                                 BitcoinLikeFeePolicy FeePolicy_,
                                 int64_t DustAmount_,
                                 std::string MessagePrefix_,
                                 bool UsesTimestampedTransaction_,
                                 std::vector<uint8_t> SigHash_)
    : Identifier(std::move(Identifier_))
    , P2PKHVersion(std::move(P2PKHVersion_))
    , P2SHVersion(std::move(P2SHVersion_))
    , XPUBVersion(std::move(XPUBVersion_))
    , FeePolicy(std::move(FeePolicy_))
    , DustAmount(std::move(DustAmount_))
    , MessagePrefix(std::move(MessagePrefix_))
    , UsesTimestampedTransaction(std::move(UsesTimestampedTransaction_))
    , SigHash(std::move(SigHash_))
    {}

    BitcoinLikeNetworkParameters(const BitcoinLikeNetworkParameters& cpy) {
       this->Identifier = cpy.Identifier;
       this->P2PKHVersion = cpy.P2PKHVersion;
       this->P2SHVersion = cpy.P2SHVersion;
       this->XPUBVersion = cpy.XPUBVersion;
       this->FeePolicy = cpy.FeePolicy;
       this->DustAmount = cpy.DustAmount;
       this->MessagePrefix = cpy.MessagePrefix;
       this->UsesTimestampedTransaction = cpy.UsesTimestampedTransaction;
       this->SigHash = cpy.SigHash;
    }

    BitcoinLikeNetworkParameters() = default;


    BitcoinLikeNetworkParameters& operator=(const BitcoinLikeNetworkParameters& cpy) {
       this->Identifier = cpy.Identifier;
       this->P2PKHVersion = cpy.P2PKHVersion;
       this->P2SHVersion = cpy.P2SHVersion;
       this->XPUBVersion = cpy.XPUBVersion;
       this->FeePolicy = cpy.FeePolicy;
       this->DustAmount = cpy.DustAmount;
       this->MessagePrefix = cpy.MessagePrefix;
       this->UsesTimestampedTransaction = cpy.UsesTimestampedTransaction;
       this->SigHash = cpy.SigHash;
       return *this;
    }

    template <class Archive>
    void load(Archive& archive) {
        archive(Identifier, P2PKHVersion, P2SHVersion, XPUBVersion, FeePolicy, DustAmount, MessagePrefix, UsesTimestampedTransaction, SigHash);
    }

    template <class Archive>
    void save(Archive& archive) const {
        archive(Identifier, P2PKHVersion, P2SHVersion, XPUBVersion, FeePolicy, DustAmount, MessagePrefix, UsesTimestampedTransaction, SigHash);
    }
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_BITCOINLIKENETWORKPARAMETERS_HPP
