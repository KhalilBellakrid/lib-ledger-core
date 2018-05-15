// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#include "NJSAddressCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSAddress::getDerivationPath) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAddress::getDerivationPath needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAddress* obj = Nan::ObjectWrap::Unwrap<NJSAddress>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAddress::getDerivationPath : implementation of Address is not valid");
    }

    auto result = cpp_impl->getDerivationPath();

    //Wrap result in node object
    Local<Value> arg_0;
    if(result)
    {
        auto arg_0_optional = (result).value();
        auto arg_0_tmp = Nan::New<String>(arg_0_optional).ToLocalChecked();
        arg_0 = arg_0_tmp;
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSAddress::toString) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAddress::toString needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAddress* obj = Nan::ObjectWrap::Unwrap<NJSAddress>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAddress::toString : implementation of Address is not valid");
    }

    auto result = cpp_impl->toString();

    //Wrap result in node object
    Local<Value> arg_0;
    if(result)
    {
        auto arg_0_optional = (result).value();
        auto arg_0_tmp = Nan::New<String>(arg_0_optional).ToLocalChecked();
        arg_0 = arg_0_tmp;
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSAddress::asBitcoinLikeAddress) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAddress::asBitcoinLikeAddress needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAddress* obj = Nan::ObjectWrap::Unwrap<NJSAddress>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAddress::asBitcoinLikeAddress : implementation of Address is not valid");
    }

    auto result = cpp_impl->asBitcoinLikeAddress();

    //Wrap result in node object
    auto arg_0_wrap = NJSBitcoinLikeAddress::wrap(result);
    auto arg_0 = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeAddress>(arg_0_wrap)->handle();



    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSAddress::parse) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSAddress::parse needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    auto result = Address::parse(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSAddress::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSAddress>(arg_1_wrap)->handle();



    //Return result
    info.GetReturnValue().Set(arg_1);
}

NAN_METHOD(NJSAddress::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSAddress function can only be called as constructor (use New)");
    }

    //Check if NJSAddress::New called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSAddress::New needs same number of arguments as ledger::core::api::Address::parse method");
    }

    //Unwrap objects to get C++ classes
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Call factory
    auto cpp_instance = ledger::core::api::Address::parse(arg_0);
    NJSAddress *node_instance = new NJSAddress(cpp_instance);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSAddress::Address_prototype;

Handle<Object> NJSAddress::wrap(const std::shared_ptr<ledger::core::api::Address> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(Address_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSAddress *new_obj = new NJSAddress(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSAddress::wrap: object template not valid");
    }
    return obj;
}

NAN_METHOD(NJSAddress::isNull) {
    NJSAddress* obj = Nan::ObjectWrap::Unwrap<NJSAddress>(info.This());
    auto cpp_implementation = obj->getCppImpl();
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSAddress::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSAddress::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSAddress").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getDerivationPath", getDerivationPath);
    Nan::SetPrototypeMethod(func_template,"toString", toString);
    Nan::SetPrototypeMethod(func_template,"asBitcoinLikeAddress", asBitcoinLikeAddress);
    Nan::SetPrototypeMethod(func_template,"parse", parse);
    //Set object prototype
    Address_prototype.Reset(objectTemplate);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);

    //Add template to target
    target->Set(Nan::New<String>("NJSAddress").ToLocalChecked(), func_template->GetFunction());
}
