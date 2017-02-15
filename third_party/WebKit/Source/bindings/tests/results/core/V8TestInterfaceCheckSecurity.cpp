// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8TestInterfaceCheckSecurity.h"

#include "bindings/core/v8/BindingSecurity.h"
#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

const WrapperTypeInfo V8TestInterfaceCheckSecurity::wrapperTypeInfo = { gin::kEmbedderBlink, V8TestInterfaceCheckSecurity::domTemplate, V8TestInterfaceCheckSecurity::refObject, V8TestInterfaceCheckSecurity::derefObject, V8TestInterfaceCheckSecurity::createPersistentHandle, 0, 0, 0, V8TestInterfaceCheckSecurity::installConditionallyEnabledMethods, V8TestInterfaceCheckSecurity::installConditionallyEnabledProperties, 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::Independent, WrapperTypeInfo::RefCountedObject };

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in TestInterfaceCheckSecurity.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& TestInterfaceCheckSecurity::s_wrapperTypeInfo = V8TestInterfaceCheckSecurity::wrapperTypeInfo;

namespace TestInterfaceCheckSecurityV8Internal {

template <typename T> void V8_USE(T) { }

static void longAttributeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toImpl(holder);
    v8SetReturnValueInt(info, impl->longAttribute());
}

static void longAttributeAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TestInterfaceCheckSecurityV8Internal::longAttributeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void doNotCheckSecurityLongAttributeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toImpl(holder);
    v8SetReturnValueInt(info, impl->doNotCheckSecurityLongAttribute());
}

static void doNotCheckSecurityLongAttributeAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityLongAttributeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void doNotCheckSecurityLongAttributeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "doNotCheckSecurityLongAttribute", "TestInterfaceCheckSecurity", holder, info.GetIsolate());
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toImpl(holder);
    TONATIVE_VOID_EXCEPTIONSTATE(int, cppValue, toInt32(v8Value, exceptionState), exceptionState);
    impl->setDoNotCheckSecurityLongAttribute(cppValue);
}

static void doNotCheckSecurityLongAttributeAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityLongAttributeAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void doNotCheckSecurityReadonlyLongAttributeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toImpl(holder);
    v8SetReturnValueInt(info, impl->doNotCheckSecurityReadonlyLongAttribute());
}

static void doNotCheckSecurityReadonlyLongAttributeAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityReadonlyLongAttributeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void doNotCheckSecurityOnSetterLongAttributeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toImpl(holder);
    v8SetReturnValueInt(info, impl->doNotCheckSecurityOnSetterLongAttribute());
}

static void doNotCheckSecurityOnSetterLongAttributeAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityOnSetterLongAttributeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void doNotCheckSecurityOnSetterLongAttributeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "doNotCheckSecurityOnSetterLongAttribute", "TestInterfaceCheckSecurity", holder, info.GetIsolate());
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toImpl(holder);
    TONATIVE_VOID_EXCEPTIONSTATE(int, cppValue, toInt32(v8Value, exceptionState), exceptionState);
    impl->setDoNotCheckSecurityOnSetterLongAttribute(cppValue);
}

static void doNotCheckSecurityOnSetterLongAttributeAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityOnSetterLongAttributeAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void doNotCheckSecurityReplaceableReadonlyLongAttributeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toImpl(holder);
    v8SetReturnValueInt(info, impl->doNotCheckSecurityReplaceableReadonlyLongAttribute());
}

static void doNotCheckSecurityReplaceableReadonlyLongAttributeAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityReplaceableReadonlyLongAttributeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void TestInterfaceCheckSecurityForceSetAttributeOnThis(v8::Local<v8::String> name, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toImpl(info.Holder());
    v8::String::Utf8Value attributeName(name);
    ExceptionState exceptionState(ExceptionState::SetterContext, *attributeName, "TestInterfaceCheckSecurity", info.Holder(), info.GetIsolate());
    if (!BindingSecurity::shouldAllowAccessToFrame(info.GetIsolate(), impl->frame(), exceptionState)) {
        exceptionState.throwIfNeeded();
        return;
    }
    if (info.This()->IsObject())
        v8::Handle<v8::Object>::Cast(info.This())->ForceSet(name, v8Value);
}

static void TestInterfaceCheckSecurityForceSetAttributeOnThisCallback(v8::Local<v8::String> name, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TestInterfaceCheckSecurityV8Internal::TestInterfaceCheckSecurityForceSetAttributeOnThis(name, v8Value, info);
}

bool indexedSecurityCheck(v8::Local<v8::Object> host, uint32_t index, v8::AccessType type, v8::Local<v8::Value>)
{
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toImpl(host);
    return BindingSecurity::shouldAllowAccessToFrame(v8::Isolate::GetCurrent(), impl->frame(), DoNotReportSecurityError);
}

bool namedSecurityCheck(v8::Local<v8::Object> host, v8::Local<v8::Value> key, v8::AccessType type, v8::Local<v8::Value>)
{
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toImpl(host);
    return BindingSecurity::shouldAllowAccessToFrame(v8::Isolate::GetCurrent(), impl->frame(), DoNotReportSecurityError);
}

static void voidMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "voidMethod", "TestInterfaceCheckSecurity", info.Holder(), info.GetIsolate());
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toImpl(info.Holder());
    if (!BindingSecurity::shouldAllowAccessToFrame(info.GetIsolate(), impl->frame(), exceptionState)) {
        exceptionState.throwIfNeeded();
        return;
    }
    impl->voidMethod();
}

static void voidMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    TestInterfaceCheckSecurityV8Internal::voidMethodMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void doNotCheckSecurityVoidMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toImpl(info.Holder());
    impl->doNotCheckSecurityVoidMethod();
}

static void doNotCheckSecurityVoidMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityVoidMethodMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void doNotCheckSecurityVoidMethodOriginSafeMethodGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    static int domTemplateKey; // This address is used for a key to look up the dom template.
    V8PerIsolateData* data = V8PerIsolateData::from(info.GetIsolate());
    v8::Handle<v8::FunctionTemplate> privateTemplate = data->domTemplate(&domTemplateKey, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityVoidMethodMethodCallback, v8Undefined(), v8::Signature::New(info.GetIsolate(), V8TestInterfaceCheckSecurity::domTemplate(info.GetIsolate())), 0);

    v8::Handle<v8::Object> holder = V8TestInterfaceCheckSecurity::findInstanceInPrototypeChain(info.This(), info.GetIsolate());
    if (holder.IsEmpty()) {
        // This is only reachable via |object.__proto__.func|, in which case it
        // has already passed the same origin security check
        v8SetReturnValue(info, privateTemplate->GetFunction());
        return;
    }
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toImpl(holder);
    if (!BindingSecurity::shouldAllowAccessToFrame(info.GetIsolate(), impl->frame(), DoNotReportSecurityError)) {
        static int sharedTemplateKey; // This address is used for a key to look up the dom template.
        v8::Handle<v8::FunctionTemplate> sharedTemplate = data->domTemplate(&sharedTemplateKey, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityVoidMethodMethodCallback, v8Undefined(), v8::Signature::New(info.GetIsolate(), V8TestInterfaceCheckSecurity::domTemplate(info.GetIsolate())), 0);
        v8SetReturnValue(info, sharedTemplate->GetFunction());
        return;
    }

    v8::Local<v8::Value> hiddenValue = v8::Handle<v8::Object>::Cast(info.This())->GetHiddenValue(v8AtomicString(info.GetIsolate(), "doNotCheckSecurityVoidMethod"));
    if (!hiddenValue.IsEmpty()) {
        v8SetReturnValue(info, hiddenValue);
        return;
    }

    v8SetReturnValue(info, privateTemplate->GetFunction());
}

static void doNotCheckSecurityVoidMethodOriginSafeMethodGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityVoidMethodOriginSafeMethodGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void doNotCheckSecurityDoNotCheckSignatureVoidMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toImpl(info.Holder());
    impl->doNotCheckSecurityDoNotCheckSignatureVoidMethod();
}

static void doNotCheckSecurityDoNotCheckSignatureVoidMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityDoNotCheckSignatureVoidMethodMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void doNotCheckSecurityDoNotCheckSignatureVoidMethodOriginSafeMethodGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    static int domTemplateKey; // This address is used for a key to look up the dom template.
    V8PerIsolateData* data = V8PerIsolateData::from(info.GetIsolate());
    v8::Handle<v8::FunctionTemplate> privateTemplate = data->domTemplate(&domTemplateKey, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityDoNotCheckSignatureVoidMethodMethodCallback, v8Undefined(), v8::Local<v8::Signature>(), 0);

    v8::Handle<v8::Object> holder = V8TestInterfaceCheckSecurity::findInstanceInPrototypeChain(info.This(), info.GetIsolate());
    if (holder.IsEmpty()) {
        // This is only reachable via |object.__proto__.func|, in which case it
        // has already passed the same origin security check
        v8SetReturnValue(info, privateTemplate->GetFunction());
        return;
    }
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toImpl(holder);
    if (!BindingSecurity::shouldAllowAccessToFrame(info.GetIsolate(), impl->frame(), DoNotReportSecurityError)) {
        static int sharedTemplateKey; // This address is used for a key to look up the dom template.
        v8::Handle<v8::FunctionTemplate> sharedTemplate = data->domTemplate(&sharedTemplateKey, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityDoNotCheckSignatureVoidMethodMethodCallback, v8Undefined(), v8::Local<v8::Signature>(), 0);
        v8SetReturnValue(info, sharedTemplate->GetFunction());
        return;
    }

    v8::Local<v8::Value> hiddenValue = v8::Handle<v8::Object>::Cast(info.This())->GetHiddenValue(v8AtomicString(info.GetIsolate(), "doNotCheckSecurityDoNotCheckSignatureVoidMethod"));
    if (!hiddenValue.IsEmpty()) {
        v8SetReturnValue(info, hiddenValue);
        return;
    }

    v8SetReturnValue(info, privateTemplate->GetFunction());
}

static void doNotCheckSecurityDoNotCheckSignatureVoidMethodOriginSafeMethodGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityDoNotCheckSignatureVoidMethodOriginSafeMethodGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void doNotCheckSecurityPerWorldBindingsVoidMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toImpl(info.Holder());
    impl->doNotCheckSecurityPerWorldBindingsVoidMethod();
}

static void doNotCheckSecurityPerWorldBindingsVoidMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityPerWorldBindingsVoidMethodMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void doNotCheckSecurityPerWorldBindingsVoidMethodOriginSafeMethodGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    static int domTemplateKey; // This address is used for a key to look up the dom template.
    V8PerIsolateData* data = V8PerIsolateData::from(info.GetIsolate());
    v8::Handle<v8::FunctionTemplate> privateTemplate = data->domTemplate(&domTemplateKey, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityPerWorldBindingsVoidMethodMethodCallback, v8Undefined(), v8::Signature::New(info.GetIsolate(), V8TestInterfaceCheckSecurity::domTemplate(info.GetIsolate())), 0);

    v8::Handle<v8::Object> holder = V8TestInterfaceCheckSecurity::findInstanceInPrototypeChain(info.This(), info.GetIsolate());
    if (holder.IsEmpty()) {
        // This is only reachable via |object.__proto__.func|, in which case it
        // has already passed the same origin security check
        v8SetReturnValue(info, privateTemplate->GetFunction());
        return;
    }
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toImpl(holder);
    if (!BindingSecurity::shouldAllowAccessToFrame(info.GetIsolate(), impl->frame(), DoNotReportSecurityError)) {
        static int sharedTemplateKey; // This address is used for a key to look up the dom template.
        v8::Handle<v8::FunctionTemplate> sharedTemplate = data->domTemplate(&sharedTemplateKey, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityPerWorldBindingsVoidMethodMethodCallback, v8Undefined(), v8::Signature::New(info.GetIsolate(), V8TestInterfaceCheckSecurity::domTemplate(info.GetIsolate())), 0);
        v8SetReturnValue(info, sharedTemplate->GetFunction());
        return;
    }

    v8::Local<v8::Value> hiddenValue = v8::Handle<v8::Object>::Cast(info.This())->GetHiddenValue(v8AtomicString(info.GetIsolate(), "doNotCheckSecurityPerWorldBindingsVoidMethod"));
    if (!hiddenValue.IsEmpty()) {
        v8SetReturnValue(info, hiddenValue);
        return;
    }

    v8SetReturnValue(info, privateTemplate->GetFunction());
}

static void doNotCheckSecurityPerWorldBindingsVoidMethodOriginSafeMethodGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityPerWorldBindingsVoidMethodOriginSafeMethodGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void doNotCheckSecurityPerWorldBindingsVoidMethodMethodForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toImpl(info.Holder());
    impl->doNotCheckSecurityPerWorldBindingsVoidMethod();
}

static void doNotCheckSecurityPerWorldBindingsVoidMethodMethodCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityPerWorldBindingsVoidMethodMethodForMainWorld(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void doNotCheckSecurityPerWorldBindingsVoidMethodOriginSafeMethodGetterForMainWorld(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    static int domTemplateKey; // This address is used for a key to look up the dom template.
    V8PerIsolateData* data = V8PerIsolateData::from(info.GetIsolate());
    v8::Handle<v8::FunctionTemplate> privateTemplate = data->domTemplate(&domTemplateKey, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityPerWorldBindingsVoidMethodMethodCallbackForMainWorld, v8Undefined(), v8::Signature::New(info.GetIsolate(), V8TestInterfaceCheckSecurity::domTemplate(info.GetIsolate())), 0);

    v8::Handle<v8::Object> holder = V8TestInterfaceCheckSecurity::findInstanceInPrototypeChain(info.This(), info.GetIsolate());
    if (holder.IsEmpty()) {
        // This is only reachable via |object.__proto__.func|, in which case it
        // has already passed the same origin security check
        v8SetReturnValue(info, privateTemplate->GetFunction());
        return;
    }
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toImpl(holder);
    if (!BindingSecurity::shouldAllowAccessToFrame(info.GetIsolate(), impl->frame(), DoNotReportSecurityError)) {
        static int sharedTemplateKey; // This address is used for a key to look up the dom template.
        v8::Handle<v8::FunctionTemplate> sharedTemplate = data->domTemplate(&sharedTemplateKey, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityPerWorldBindingsVoidMethodMethodCallbackForMainWorld, v8Undefined(), v8::Signature::New(info.GetIsolate(), V8TestInterfaceCheckSecurity::domTemplate(info.GetIsolate())), 0);
        v8SetReturnValue(info, sharedTemplate->GetFunction());
        return;
    }

    v8::Local<v8::Value> hiddenValue = v8::Handle<v8::Object>::Cast(info.This())->GetHiddenValue(v8AtomicString(info.GetIsolate(), "doNotCheckSecurityPerWorldBindingsVoidMethod"));
    if (!hiddenValue.IsEmpty()) {
        v8SetReturnValue(info, hiddenValue);
        return;
    }

    v8SetReturnValue(info, privateTemplate->GetFunction());
}

static void doNotCheckSecurityPerWorldBindingsVoidMethodOriginSafeMethodGetterCallbackForMainWorld(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityPerWorldBindingsVoidMethodOriginSafeMethodGetterForMainWorld(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void doNotCheckSecurityUnforgeableVoidMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toImpl(info.Holder());
    impl->doNotCheckSecurityUnforgeableVoidMethod();
}

static void doNotCheckSecurityUnforgeableVoidMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityUnforgeableVoidMethodMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void doNotCheckSecurityUnforgeableVoidMethodOriginSafeMethodGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    static int domTemplateKey; // This address is used for a key to look up the dom template.
    V8PerIsolateData* data = V8PerIsolateData::from(info.GetIsolate());
    v8::Handle<v8::FunctionTemplate> privateTemplate = data->domTemplate(&domTemplateKey, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityUnforgeableVoidMethodMethodCallback, v8Undefined(), v8::Signature::New(info.GetIsolate(), V8TestInterfaceCheckSecurity::domTemplate(info.GetIsolate())), 0);

    v8::Handle<v8::Object> holder = V8TestInterfaceCheckSecurity::findInstanceInPrototypeChain(info.This(), info.GetIsolate());
    if (holder.IsEmpty()) {
        // This is only reachable via |object.__proto__.func|, in which case it
        // has already passed the same origin security check
        v8SetReturnValue(info, privateTemplate->GetFunction());
        return;
    }
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toImpl(holder);
    if (!BindingSecurity::shouldAllowAccessToFrame(info.GetIsolate(), impl->frame(), DoNotReportSecurityError)) {
        static int sharedTemplateKey; // This address is used for a key to look up the dom template.
        v8::Handle<v8::FunctionTemplate> sharedTemplate = data->domTemplate(&sharedTemplateKey, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityUnforgeableVoidMethodMethodCallback, v8Undefined(), v8::Signature::New(info.GetIsolate(), V8TestInterfaceCheckSecurity::domTemplate(info.GetIsolate())), 0);
        v8SetReturnValue(info, sharedTemplate->GetFunction());
        return;
    }

    v8::Local<v8::Value> hiddenValue = v8::Handle<v8::Object>::Cast(info.This())->GetHiddenValue(v8AtomicString(info.GetIsolate(), "doNotCheckSecurityUnforgeableVoidMethod"));
    if (!hiddenValue.IsEmpty()) {
        v8SetReturnValue(info, hiddenValue);
        return;
    }

    v8SetReturnValue(info, privateTemplate->GetFunction());
}

static void doNotCheckSecurityUnforgeableVoidMethodOriginSafeMethodGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityUnforgeableVoidMethodOriginSafeMethodGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void TestInterfaceCheckSecurityOriginSafeMethodSetter(v8::Local<v8::String> name, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = V8TestInterfaceCheckSecurity::findInstanceInPrototypeChain(info.This(), info.GetIsolate());
    if (holder.IsEmpty())
        return;
    TestInterfaceCheckSecurity* impl = V8TestInterfaceCheckSecurity::toImpl(holder);
    v8::String::Utf8Value attributeName(name);
    ExceptionState exceptionState(ExceptionState::SetterContext, *attributeName, "TestInterfaceCheckSecurity", info.Holder(), info.GetIsolate());
    if (!BindingSecurity::shouldAllowAccessToFrame(info.GetIsolate(), impl->frame(), exceptionState)) {
        exceptionState.throwIfNeeded();
        return;
    }

    V8HiddenValue::setHiddenValue(info.GetIsolate(), v8::Handle<v8::Object>::Cast(info.This()), name, v8Value);
}

static void TestInterfaceCheckSecurityOriginSafeMethodSetterCallback(v8::Local<v8::String> name, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    TestInterfaceCheckSecurityV8Internal::TestInterfaceCheckSecurityOriginSafeMethodSetter(name, v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace TestInterfaceCheckSecurityV8Internal

static const V8DOMConfiguration::AttributeConfiguration V8TestInterfaceCheckSecurityAttributes[] = {
    {"longAttribute", TestInterfaceCheckSecurityV8Internal::longAttributeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance},
    {"doNotCheckSecurityLongAttribute", TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityLongAttributeAttributeGetterCallback, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityLongAttributeAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::ALL_CAN_READ | v8::ALL_CAN_WRITE), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance},
    {"doNotCheckSecurityReadonlyLongAttribute", TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityReadonlyLongAttributeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::ALL_CAN_READ), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance},
    {"doNotCheckSecurityOnSetterLongAttribute", TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityOnSetterLongAttributeAttributeGetterCallback, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityOnSetterLongAttributeAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::ALL_CAN_WRITE), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance},
    {"doNotCheckSecurityReplaceableReadonlyLongAttribute", TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityReplaceableReadonlyLongAttributeAttributeGetterCallback, TestInterfaceCheckSecurityV8Internal::TestInterfaceCheckSecurityForceSetAttributeOnThisCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::ALL_CAN_READ | v8::ALL_CAN_WRITE), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance},
};

static const V8DOMConfiguration::MethodConfiguration V8TestInterfaceCheckSecurityMethods[] = {
    {"voidMethod", TestInterfaceCheckSecurityV8Internal::voidMethodMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8TestInterfaceCheckSecurityTemplate(v8::Handle<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "TestInterfaceCheckSecurity", v8::Local<v8::FunctionTemplate>(), V8TestInterfaceCheckSecurity::internalFieldCount,
        V8TestInterfaceCheckSecurityAttributes, WTF_ARRAY_LENGTH(V8TestInterfaceCheckSecurityAttributes),
        0, 0,
        V8TestInterfaceCheckSecurityMethods, WTF_ARRAY_LENGTH(V8TestInterfaceCheckSecurityMethods),
        isolate);
    v8::Local<v8::ObjectTemplate> instanceTemplate ALLOW_UNUSED = functionTemplate->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> prototypeTemplate ALLOW_UNUSED = functionTemplate->PrototypeTemplate();
    instanceTemplate->SetAccessCheckCallbacks(TestInterfaceCheckSecurityV8Internal::namedSecurityCheck, TestInterfaceCheckSecurityV8Internal::indexedSecurityCheck, v8::External::New(isolate, const_cast<WrapperTypeInfo*>(&V8TestInterfaceCheckSecurity::wrapperTypeInfo)));
    static const V8DOMConfiguration::AttributeConfiguration doNotCheckSecurityVoidMethodOriginSafeAttributeConfiguration = {
        "doNotCheckSecurityVoidMethod", TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityVoidMethodOriginSafeMethodGetterCallback, TestInterfaceCheckSecurityV8Internal::TestInterfaceCheckSecurityOriginSafeMethodSetterCallback, 0, 0, &V8TestInterfaceCheckSecurity::wrapperTypeInfo, v8::ALL_CAN_READ, static_cast<v8::PropertyAttribute>(v8::DontDelete), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance,
    };
    V8DOMConfiguration::installAttribute(prototypeTemplate, v8::Handle<v8::ObjectTemplate>(), doNotCheckSecurityVoidMethodOriginSafeAttributeConfiguration, isolate);
    static const V8DOMConfiguration::AttributeConfiguration doNotCheckSecurityDoNotCheckSignatureVoidMethodOriginSafeAttributeConfiguration = {
        "doNotCheckSecurityDoNotCheckSignatureVoidMethod", TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityDoNotCheckSignatureVoidMethodOriginSafeMethodGetterCallback, TestInterfaceCheckSecurityV8Internal::TestInterfaceCheckSecurityOriginSafeMethodSetterCallback, 0, 0, &V8TestInterfaceCheckSecurity::wrapperTypeInfo, v8::ALL_CAN_READ, static_cast<v8::PropertyAttribute>(v8::DontDelete), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance,
    };
    V8DOMConfiguration::installAttribute(prototypeTemplate, v8::Handle<v8::ObjectTemplate>(), doNotCheckSecurityDoNotCheckSignatureVoidMethodOriginSafeAttributeConfiguration, isolate);
    static const V8DOMConfiguration::AttributeConfiguration doNotCheckSecurityPerWorldBindingsVoidMethodOriginSafeAttributeConfiguration = {
        "doNotCheckSecurityPerWorldBindingsVoidMethod", TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityPerWorldBindingsVoidMethodOriginSafeMethodGetterCallback, TestInterfaceCheckSecurityV8Internal::TestInterfaceCheckSecurityOriginSafeMethodSetterCallback, TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityPerWorldBindingsVoidMethodOriginSafeMethodGetterCallbackForMainWorld, TestInterfaceCheckSecurityV8Internal::TestInterfaceCheckSecurityOriginSafeMethodSetterCallbackForMainWorld, &V8TestInterfaceCheckSecurity::wrapperTypeInfo, v8::ALL_CAN_READ, static_cast<v8::PropertyAttribute>(v8::DontDelete), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance,
    };
    V8DOMConfiguration::installAttribute(prototypeTemplate, v8::Handle<v8::ObjectTemplate>(), doNotCheckSecurityPerWorldBindingsVoidMethodOriginSafeAttributeConfiguration, isolate);
    static const V8DOMConfiguration::AttributeConfiguration doNotCheckSecurityUnforgeableVoidMethodOriginSafeAttributeConfiguration = {
        "doNotCheckSecurityUnforgeableVoidMethod", TestInterfaceCheckSecurityV8Internal::doNotCheckSecurityUnforgeableVoidMethodOriginSafeMethodGetterCallback, 0, 0, 0, &V8TestInterfaceCheckSecurity::wrapperTypeInfo, v8::ALL_CAN_READ, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance,
    };
    V8DOMConfiguration::installAttribute(instanceTemplate, v8::Handle<v8::ObjectTemplate>(), doNotCheckSecurityUnforgeableVoidMethodOriginSafeAttributeConfiguration, isolate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Handle<v8::FunctionTemplate> V8TestInterfaceCheckSecurity::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8TestInterfaceCheckSecurityTemplate);
}

bool V8TestInterfaceCheckSecurity::hasInstance(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Handle<v8::Object> V8TestInterfaceCheckSecurity::findInstanceInPrototypeChain(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

TestInterfaceCheckSecurity* V8TestInterfaceCheckSecurity::toImplWithTypeCheck(v8::Isolate* isolate, v8::Handle<v8::Value> value)
{
    return hasInstance(value, isolate) ? blink::toScriptWrappableBase(v8::Handle<v8::Object>::Cast(value))->toImpl<TestInterfaceCheckSecurity>() : 0;
}


void V8TestInterfaceCheckSecurity::refObject(ScriptWrappableBase* internalPointer)
{
    internalPointer->toImpl<TestInterfaceCheckSecurity>()->ref();
}

void V8TestInterfaceCheckSecurity::derefObject(ScriptWrappableBase* internalPointer)
{
    internalPointer->toImpl<TestInterfaceCheckSecurity>()->deref();
}

WrapperPersistentNode* V8TestInterfaceCheckSecurity::createPersistentHandle(ScriptWrappableBase* internalPointer)
{
    ASSERT_NOT_REACHED();
    return 0;
}

template<>
v8::Handle<v8::Value> toV8NoInline(TestInterfaceCheckSecurity* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl, creationContext, isolate);
}

} // namespace blink
