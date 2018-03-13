// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from configuration.djinni

#include "NJSPoolConfigurationCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;


NAN_METHOD(NJSPoolConfiguration::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSPoolConfiguration function can only be called as constructor (use New)");
    }
    NJSPoolConfiguration *node_instance = new NJSPoolConfiguration(nullptr);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSPoolConfiguration::PoolConfiguration_prototype;

Handle<Object> NJSPoolConfiguration::wrap(const std::shared_ptr<ledger::core::api::PoolConfiguration> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(PoolConfiguration_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSPoolConfiguration *new_obj = new NJSPoolConfiguration(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSPoolConfiguration::wrap: object template not valid");
    }
    return obj;
}

void NJSPoolConfiguration::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSPoolConfiguration::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSPoolConfiguration").ToLocalChecked());

    //SetPrototypeMethod all methods
    //Set object prototype
    PoolConfiguration_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSPoolConfiguration").ToLocalChecked(), func_template->GetFunction());
}