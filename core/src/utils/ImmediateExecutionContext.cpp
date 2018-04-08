/*
 *
 * ImmediateExecutionContext
 * ledger-core
 *
 * Created by Pierre Pollastri on 23/01/2017.
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
#include "ImmediateExecutionContext.hpp"
#include <api/core/cpp/Runnable.hpp>
#include "Exception.hpp"

std::shared_ptr<ledger::core::ImmediateExecutionContext> ledger::core::ImmediateExecutionContext::INSTANCE = std::make_shared<ledger::core::ImmediateExecutionContext>();

void ledger::core::ImmediateExecutionContext::execute(const std::shared_ptr<ledger::core::api::Runnable> &runnable) {
    runnable->run();
}

void ledger::core::ImmediateExecutionContext::delay(const std::shared_ptr<ledger::core::api::Runnable> &runnable,
                                                    int64_t millis) {
    throw Exception(api::ErrorCode::RUNTIME_ERROR, "ImmediateExecutionContext shall not be used for delayed calls.");
}
