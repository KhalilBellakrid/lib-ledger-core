/*
 *
 * PreferencesBackend
 * ledger-core
 *
 * Created by Pierre Pollastri on 10/01/2017.
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
#ifndef LEDGER_CORE_PREFERENCESBACKEND_HPP
#define LEDGER_CORE_PREFERENCESBACKEND_HPP

#include <api/core/cpp/Preferences.hpp>
#include <api/core/cpp/PreferencesEditor.hpp>
#include <leveldb/db.h>
#include <memory>
#include <api/core/cpp/ThreadDispatcher.hpp>
#include <api/core/cpp/ExecutionContext.hpp>
#include <api/core/cpp/PathResolver.hpp>
#include <api/core/cpp/Lock.hpp>
#include <string>
#include <functional>
#include "../utils/optional.hpp"
#include "Preferences.hpp"
#include <unordered_map>
#include <mutex>

namespace ledger {
    namespace core {
        class Preferences;
        enum PreferencesChangeType {
            PUT, DELETE
        };

        struct PreferencesChange {
            PreferencesChangeType type;
            std::vector<uint8_t> key;
            std::vector<uint8_t> value;
        };

        class PreferencesBackend {
        public:
            PreferencesBackend(
                    const std::string& path,
                    const std::shared_ptr<api::ExecutionContext>& writingContext,
                    const std::shared_ptr<api::PathResolver>& resolver
            );
            std::shared_ptr<Preferences> getPreferences(const std::string& name);
            void iterate(const std::vector<uint8_t>& keyPrefix, std::function<bool (leveldb::Slice&&, leveldb::Slice&&)>);
            optional<std::string> get(const std::vector<uint8_t>& key) const;
            void commit(const std::vector<PreferencesChange>& changes);
            ~PreferencesBackend();
        private:
            std::shared_ptr<api::ExecutionContext> _context;
            std::shared_ptr<leveldb::DB> _db;

            static std::shared_ptr<leveldb::DB> obtainInstance(const std::string& path);
            static std::unordered_map<std::string, std::weak_ptr<leveldb::DB>> LEVELDB_INSTANCE_POOL;
            static std::mutex LEVELDB_INSTANCE_POOL_MUTEX;
        };
    }
}


#endif //LEDGER_CORE_PREFERENCESBACKEND_HPP
