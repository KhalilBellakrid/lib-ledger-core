// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ethereum_like_wallet.djinni

#include "NJSEthereumLikeAccountCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSEthereumLikeAccount::broadcastRawTransaction) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSEthereumLikeAccount::broadcastRawTransaction needs 1 arguments");
    }

    //Check if parameters have correct types
    vector<uint8_t> arg_0;
    Local<Array> arg_0_container = Local<Array>::Cast(info[0]);
    for(uint32_t arg_0_id = 0; arg_0_id < arg_0_container->Length(); arg_0_id++)
    {
        if(arg_0_container->Get(arg_0_id)->IsUint32())
        {
            auto arg_0_elem = Nan::To<uint32_t>(arg_0_container->Get(arg_0_id)).FromJust();
            arg_0.emplace_back(arg_0_elem);
        }
    }


    //Create promise and set it into Callcack
    auto arg_1_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSStringCallback *njs_ptr_arg_1 = new NJSStringCallback(arg_1_resolver);
    std::shared_ptr<NJSStringCallback> arg_1(njs_ptr_arg_1);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSEthereumLikeAccount* obj = Nan::ObjectWrap::Unwrap<NJSEthereumLikeAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeAccount::broadcastRawTransaction : implementation of EthereumLikeAccount is not valid");
    }
    cpp_impl->broadcastRawTransaction(arg_0,arg_1);
    info.GetReturnValue().Set(arg_1_resolver->GetPromise());
}
NAN_METHOD(NJSEthereumLikeAccount::broadcastTransaction) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSEthereumLikeAccount::broadcastTransaction needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSEthereumLikeTransaction *njs_ptr_arg_0 = static_cast<NJSEthereumLikeTransaction *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSEthereumLikeTransaction failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    //Create promise and set it into Callcack
    auto arg_1_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSStringCallback *njs_ptr_arg_1 = new NJSStringCallback(arg_1_resolver);
    std::shared_ptr<NJSStringCallback> arg_1(njs_ptr_arg_1);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSEthereumLikeAccount* obj = Nan::ObjectWrap::Unwrap<NJSEthereumLikeAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeAccount::broadcastTransaction : implementation of EthereumLikeAccount is not valid");
    }
    cpp_impl->broadcastTransaction(arg_0,arg_1);
    info.GetReturnValue().Set(arg_1_resolver->GetPromise());
}
NAN_METHOD(NJSEthereumLikeAccount::buildTransaction) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeAccount::buildTransaction needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSEthereumLikeAccount* obj = Nan::ObjectWrap::Unwrap<NJSEthereumLikeAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeAccount::buildTransaction : implementation of EthereumLikeAccount is not valid");
    }

    auto result = cpp_impl->buildTransaction();

    //Wrap result in node object
    auto arg_0_wrap = NJSEthereumLikeTransactionBuilder::wrap(result);
    auto arg_0 = Nan::ObjectWrap::Unwrap<NJSEthereumLikeTransactionBuilder>(arg_0_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSEthereumLikeAccount::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSEthereumLikeAccount function can only be called as constructor (use New)");
    }
    NJSEthereumLikeAccount *node_instance = new NJSEthereumLikeAccount(nullptr);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSEthereumLikeAccount::EthereumLikeAccount_prototype;

Handle<Object> NJSEthereumLikeAccount::wrap(const std::shared_ptr<ledger::core::api::EthereumLikeAccount> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(EthereumLikeAccount_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSEthereumLikeAccount *new_obj = new NJSEthereumLikeAccount(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSEthereumLikeAccount::wrap: object template not valid");
    }
    return obj;
}

NAN_METHOD(NJSEthereumLikeAccount::isNull) {
    NJSEthereumLikeAccount* obj = Nan::ObjectWrap::Unwrap<NJSEthereumLikeAccount>(info.This());
    auto cpp_implementation = obj->getCppImpl();
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSEthereumLikeAccount::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSEthereumLikeAccount::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSEthereumLikeAccount").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"broadcastRawTransaction", broadcastRawTransaction);
    Nan::SetPrototypeMethod(func_template,"broadcastTransaction", broadcastTransaction);
    Nan::SetPrototypeMethod(func_template,"buildTransaction", buildTransaction);
    //Set object prototype
    EthereumLikeAccount_prototype.Reset(objectTemplate);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);

    //Add template to target
    target->Set(Nan::New<String>("NJSEthereumLikeAccount").ToLocalChecked(), func_template->GetFunction());
}
