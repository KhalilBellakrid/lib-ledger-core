/*
 *
 * cosmos_transaction_tests
 *
 * Created by El Khalil Bellakrid on 15/06/2019.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2019 Ledger
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

#include <gtest/gtest.h>
#include <string>
#include <api/CosmosLikeTransactionBuilder.hpp>
#include <api/CosmosLikeTransaction.hpp>
#include <api/CosmosLikeAddress.hpp>
#include <api/Amount.hpp>
#include <wallet/currencies.hpp>
#include <utils/hex.h>

using namespace ledger::core::api;
using namespace ledger::core;

TEST(CosmosMakeTransaction, ParseSignedRawTransaction) {
    // round-trip
    auto strTx = "{\"account_number\":\"6571\",\"chain_id\":\"cosmoshub-2\",\"fee\":{\"amount\":[{\"amount\":\"5000\",\"denom\":\"uatom\"}],\"gas\":\"200000\"},\"memo\":\"Sent from Ledger\",\"msgs\":[{\"type\":\"cosmos-sdk/MsgSend\",\"value\":{\"amount\":{\"amount\":\"1000000\",\"denom\":\"uatom\"},\"from\":\"cosmos102hty0jv2s29lyc4u0tv97z9v298e24t3vwtpl\",\"to\":\"cosmosvaloper1grgelyng2v6v3t8z87wu3sxgt9m5s03xfytvz7\"}}],\"sequence\":\"0\"}";
    auto tx = api::CosmosLikeTransactionBuilder::parseRawSignedTransaction(ledger::core::currencies::COSMOS, strTx);


    // ensure the values are correct
    EXPECT_EQ(tx->getSender()->toBech32(), "cosmos102hty0jv2s29lyc4u0tv97z9v298e24t3vwtpl");
    EXPECT_EQ(tx->getReceiver()->toBech32(), "cosmosvaloper1grgelyng2v6v3t8z87wu3sxgt9m5s03xfytvz7");
    EXPECT_EQ(tx->getValue()->toLong(), 1000000000L);
    EXPECT_EQ(tx->getFees()->toLong(), 5000000L);
    EXPECT_EQ(tx->getGasLimit()->toLong(), 200000L);
}