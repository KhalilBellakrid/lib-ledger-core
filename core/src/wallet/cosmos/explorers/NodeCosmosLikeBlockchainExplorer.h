/*
 *
 * NodeCosmosLikeBlockchainExplorer
 *
 * Created by El Khalil Bellakrid on 14/06/2019.
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


#ifndef LEDGER_CORE_NODECOSMOSLIKEBLOCKCHAINEXPLORER_H
#define LEDGER_CORE_NODECOSMOSLIKEBLOCKCHAINEXPLORER_H


#include <wallet/common/explorers/AbstractLedgerApiBlockchainExplorer.h>
#include <wallet/cosmos/explorers/CosmosLikeBlockchainExplorer.h>
#include <wallet/cosmos/explorers/api/CosmosLikeTransactionsParser.h>
#include <wallet/cosmos/explorers/api/CosmosLikeTransactionsBulkParser.h>
#include <wallet/cosmos/explorers/api/CosmosLikeBlockParser.h>
#include <api/CosmosLikeNetworkParameters.hpp>

namespace ledger {
    namespace core {
        using LedgerApiBlockchainExplorer = AbstractLedgerApiBlockchainExplorer<CosmosLikeBlockchainExplorerTransaction, CosmosLikeBlockchainExplorer::TransactionsBulk, CosmosLikeTransactionsParser, CosmosLikeTransactionsBulkParser, CosmosLikeBlockParser, api::CosmosLikeNetworkParameters>;


        class NodeCosmosLikeBodyRequest {

        public:
            NodeCosmosLikeBodyRequest() {
                //Document should be defined as object
                _document.SetObject();
                _params = rapidjson::Value(rapidjson::kObjectType);
            };

            NodeCosmosLikeBodyRequest &setMethod(const std::string &method) {
                return *this;
            };

            NodeCosmosLikeBodyRequest &pushParameter(const std::string &key, const std::string &value) {
                rapidjson::Document::AllocatorType &allocator = _document.GetAllocator();
                rapidjson::Value vKeyParam(rapidjson::kStringType);
                vKeyParam.SetString(key.c_str(), static_cast<rapidjson::SizeType>(key.length()), allocator);
                rapidjson::Value vParam(rapidjson::kStringType);
                vParam.SetString(value.c_str(), static_cast<rapidjson::SizeType>(value.length()), allocator);
                _params.AddMember(vKeyParam, vParam, allocator);
                return *this;
            };

            NodeCosmosLikeBodyRequest &pushParameter(const std::string &key, int64_t value) {
                rapidjson::Document::AllocatorType &allocator = _document.GetAllocator();
                rapidjson::Value vKeyParam(rapidjson::kStringType);
                vKeyParam.SetString(key.c_str(), static_cast<rapidjson::SizeType>(key.length()), allocator);
                rapidjson::Value vParam(rapidjson::kNumberType);
                vParam.SetInt64(value);
                _params.AddMember(vKeyParam, vParam, allocator);
                return *this;
            };

            std::string getString() {
                rapidjson::Document::AllocatorType &allocator = _document.GetAllocator();
                rapidjson::Value container(rapidjson::kArrayType);
                container.PushBack(_params, allocator);
                _document.AddMember("params", container, allocator);
                //Stream to string buffer
                rapidjson::StringBuffer buffer;
                rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
                _document.Accept(writer);
                return buffer.GetString();
            };

        private:
            rapidjson::Document _document;
            rapidjson::Value _params;
        };

        class NodeCosmosLikeBlockchainExplorer : public CosmosLikeBlockchainExplorer,
                                                 public LedgerApiBlockchainExplorer,
                                                 public DedicatedContext,
                                                 public std::enable_shared_from_this<NodeCosmosLikeBlockchainExplorer> {
        public:
            NodeCosmosLikeBlockchainExplorer(const std::shared_ptr<api::ExecutionContext> &context,
                                             const std::shared_ptr<HttpClient> &http,
                                             const api::CosmosLikeNetworkParameters &parameters,
                                             const std::shared_ptr<api::DynamicObject> &configuration);

            Future<std::shared_ptr<BigInt>>
            getBalance(const std::vector<CosmosLikeKeychain::Address> &addresses) override;

            Future<std::shared_ptr<BigInt>>
            getEstimatedGasLimit(const std::shared_ptr<api::CosmosLikeTransaction> &transaction) override;

            Future<String> pushLedgerApiTransaction(const std::vector<uint8_t> &transaction) override;

            Future<void *> startSession() override;

            Future<Unit> killSession(void *session) override;

            Future<Bytes> getRawTransaction(const String &transactionHash) override;

            Future<String> pushTransaction(const std::vector<uint8_t> &transaction) override;

            FuturePtr<CosmosLikeBlockchainExplorer::TransactionsBulk>
            getTransactions(const std::vector<std::string> &addresses,
                            Option<std::string> fromBlockHash = Option<std::string>(),
                            Option<void *> session = Option<void *>()) override;

            FuturePtr<Block> getCurrentBlock() const override;

            FuturePtr<CosmosLikeBlockchainExplorerTransaction>
            getTransactionByHash(const String &transactionHash) const override;

            Future<int64_t> getTimestamp() const override;

            std::shared_ptr<api::ExecutionContext> getExplorerContext() const override;

            api::CosmosLikeNetworkParameters getNetworkParameters() const override;

            std::string getExplorerVersion() const override;

            virtual Future<CosmosLikeBlockchainExplorerAccount> getAccount(const std::string& address) override;
            virtual Future<std::list<CosmosLikeBlockchainExplorerTransaction>> getTransactions(const std::string &address, const std::string& filter) override;

        private:
            api::CosmosLikeNetworkParameters _parameters;
        };
    }
}


#endif //LEDGER_CORE_NODECOSMOSLIKEBLOCKCHAINEXPLORER_H