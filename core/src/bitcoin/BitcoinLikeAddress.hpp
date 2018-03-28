/*
 *
 * BitcoinLikeAddress
 * ledger-core
 *
 * Created by Pierre Pollastri on 12/12/2016.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2016 Ledger
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
#ifndef LEDGER_CORE_BITCOINLIKEADDRESS_HPP
#define LEDGER_CORE_BITCOINLIKEADDRESS_HPP

#include "../ledger-core-source-api/api/BitcoinLikeAddress.hpp"
#include "../ledger-core-source-api/api/BitcoinLikeNetworkParameters.hpp"
#include "../utils/optional.hpp"

namespace ledger {
    namespace core {
        class BitcoinLikeAddress : public api::BitcoinLikeAddress {
        public:
            BitcoinLikeAddress(const api::BitcoinLikeNetworkParameters& params,
                               const std::vector<uint8_t>& hash160,
                               const std::vector<uint8_t>& version,
                               optional<std::string> derivationPath = optional<std::string>());
            virtual std::vector<uint8_t> getVersion() override;
            virtual std::vector<uint8_t> getHash160() override;
            virtual api::BitcoinLikeNetworkParameters getNetworkParameters() override;
            virtual std::string toBase58() override;
            virtual bool isP2SH() override;
            virtual bool isP2PKH() override;
            virtual optional<std::string> getDerivationPath() override;

        private:
            const std::vector<uint8_t> _version;
            const std::vector<uint8_t> _hash160;
            const api::BitcoinLikeNetworkParameters _params;
            const optional<std::string> _derivationPath;
        };
    }
}


#endif //LEDGER_CORE_BITCOINLIKEADDRESS_HPP
