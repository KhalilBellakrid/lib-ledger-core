// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

#include "NJSEthereumLikeAddressCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSEthereumLikeAddress::getVersion) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeAddress::getVersion needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSEthereumLikeAddress* obj = Nan::ObjectWrap::Unwrap<NJSEthereumLikeAddress>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeAddress::getVersion : implementation of EthereumLikeAddress is not valid");
    }

    auto result = cpp_impl->getVersion();

    //Wrap result in node object
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t arg_0_id = 0; arg_0_id < result.size(); arg_0_id++)
    {
        auto arg_0_elem = Nan::New<Uint32>(result[arg_0_id]);
        arg_0->Set((int)arg_0_id,arg_0_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEthereumLikeAddress::getKeccakHash) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeAddress::getKeccakHash needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSEthereumLikeAddress* obj = Nan::ObjectWrap::Unwrap<NJSEthereumLikeAddress>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeAddress::getKeccakHash : implementation of EthereumLikeAddress is not valid");
    }

    auto result = cpp_impl->getKeccakHash();

    //Wrap result in node object
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t arg_0_id = 0; arg_0_id < result.size(); arg_0_id++)
    {
        auto arg_0_elem = Nan::New<Uint32>(result[arg_0_id]);
        arg_0->Set((int)arg_0_id,arg_0_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEthereumLikeAddress::getNetworkParameters) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeAddress::getNetworkParameters needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSEthereumLikeAddress* obj = Nan::ObjectWrap::Unwrap<NJSEthereumLikeAddress>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeAddress::getNetworkParameters : implementation of EthereumLikeAddress is not valid");
    }

    auto result = cpp_impl->getNetworkParameters();

    //Wrap result in node object
    auto arg_0 = Nan::New<Object>();
    auto arg_0_1 = Nan::New<String>(result.Identifier).ToLocalChecked();
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("Identifier").ToLocalChecked(), arg_0_1);
    auto arg_0_2 = Nan::New<String>(result.MessagePrefix).ToLocalChecked();
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("MessagePrefix").ToLocalChecked(), arg_0_2);
    Local<Array> arg_0_3 = Nan::New<Array>();
    for(size_t arg_0_3_id = 0; arg_0_3_id < result.XPUBVersion.size(); arg_0_3_id++)
    {
        auto arg_0_3_elem = Nan::New<Uint32>(result.XPUBVersion[arg_0_3_id]);
        arg_0_3->Set((int)arg_0_3_id,arg_0_3_elem);
    }

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("XPUBVersion").ToLocalChecked(), arg_0_3);
    Local<Array> arg_0_4 = Nan::New<Array>();
    for(size_t arg_0_4_id = 0; arg_0_4_id < result.AdditionalEIPs.size(); arg_0_4_id++)
    {
        auto arg_0_4_elem = Nan::New<String>(result.AdditionalEIPs[arg_0_4_id]).ToLocalChecked();
        arg_0_4->Set((int)arg_0_4_id,arg_0_4_elem);
    }

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("AdditionalEIPs").ToLocalChecked(), arg_0_4);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEthereumLikeAddress::toEIP55) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeAddress::toEIP55 needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSEthereumLikeAddress* obj = Nan::ObjectWrap::Unwrap<NJSEthereumLikeAddress>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeAddress::toEIP55 : implementation of EthereumLikeAddress is not valid");
    }

    auto result = cpp_impl->toEIP55();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSEthereumLikeAddress::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSEthereumLikeAddress function can only be called as constructor (use New)");
    }
    NJSEthereumLikeAddress *node_instance = new NJSEthereumLikeAddress(nullptr);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSEthereumLikeAddress::EthereumLikeAddress_prototype;

Handle<Object> NJSEthereumLikeAddress::wrap(const std::shared_ptr<ledger::core::api::EthereumLikeAddress> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(EthereumLikeAddress_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSEthereumLikeAddress *new_obj = new NJSEthereumLikeAddress(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSEthereumLikeAddress::wrap: object template not valid");
    }
    return obj;
}

NAN_METHOD(NJSEthereumLikeAddress::isNull) {
    NJSEthereumLikeAddress* obj = Nan::ObjectWrap::Unwrap<NJSEthereumLikeAddress>(info.This());
    auto cpp_implementation = obj->getCppImpl();
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSEthereumLikeAddress::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSEthereumLikeAddress::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSEthereumLikeAddress").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getVersion", getVersion);
    Nan::SetPrototypeMethod(func_template,"getKeccakHash", getKeccakHash);
    Nan::SetPrototypeMethod(func_template,"getNetworkParameters", getNetworkParameters);
    Nan::SetPrototypeMethod(func_template,"toEIP55", toEIP55);
    //Set object prototype
    EthereumLikeAddress_prototype.Reset(objectTemplate);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);

    //Add template to target
    target->Set(Nan::New<String>("NJSEthereumLikeAddress").ToLocalChecked(), func_template->GetFunction());
}
