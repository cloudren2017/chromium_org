// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8TestException.h"

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

const WrapperTypeInfo V8TestException::wrapperTypeInfo = { gin::kEmbedderBlink, V8TestException::domTemplate, V8TestException::refObject, V8TestException::derefObject, V8TestException::createPersistentHandle, 0, 0, 0, V8TestException::installConditionallyEnabledMethods, V8TestException::installConditionallyEnabledProperties, 0, WrapperTypeInfo::WrapperTypeExceptionPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::Independent, WrapperTypeInfo::RefCountedObject };

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in TestException.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& TestException::s_wrapperTypeInfo = V8TestException::wrapperTypeInfo;

namespace TestExceptionV8Internal {

template <typename T> void V8_USE(T) { }

static void readonlyUnsignedShortAttributeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    TestException* impl = V8TestException::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->readonlyUnsignedShortAttribute());
}

static void readonlyUnsignedShortAttributeAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TestExceptionV8Internal::readonlyUnsignedShortAttributeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void readonlyStringAttributeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    TestException* impl = V8TestException::toImpl(holder);
    v8SetReturnValueString(info, impl->readonlyStringAttribute(), info.GetIsolate());
}

static void readonlyStringAttributeAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    TestExceptionV8Internal::readonlyStringAttributeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void toStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TestException* impl = V8TestException::toImpl(info.Holder());
    v8SetReturnValueString(info, impl->toString(), info.GetIsolate());
}

static void toStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    TestExceptionV8Internal::toStringMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace TestExceptionV8Internal

static const V8DOMConfiguration::AttributeConfiguration V8TestExceptionAttributes[] = {
    {"readonlyUnsignedShortAttribute", TestExceptionV8Internal::readonlyUnsignedShortAttributeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance},
    {"readonlyStringAttribute", TestExceptionV8Internal::readonlyStringAttributeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance},
};

static void installV8TestExceptionTemplate(v8::Handle<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "TestException", v8::Local<v8::FunctionTemplate>(), V8TestException::internalFieldCount,
        V8TestExceptionAttributes, WTF_ARRAY_LENGTH(V8TestExceptionAttributes),
        0, 0,
        0, 0,
        isolate);
    v8::Local<v8::ObjectTemplate> instanceTemplate ALLOW_UNUSED = functionTemplate->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> prototypeTemplate ALLOW_UNUSED = functionTemplate->PrototypeTemplate();
    static const V8DOMConfiguration::ConstantConfiguration V8TestExceptionConstants[] = {
        {"UNSIGNED_SHORT_CONSTANT", 1, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
    };
    V8DOMConfiguration::installConstants(functionTemplate, prototypeTemplate, V8TestExceptionConstants, WTF_ARRAY_LENGTH(V8TestExceptionConstants), isolate);
    static const V8DOMConfiguration::MethodConfiguration toStringMethodConfiguration = {
        "toString", TestExceptionV8Internal::toStringMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts,
    };
    V8DOMConfiguration::installMethod(prototypeTemplate, defaultSignature, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum), toStringMethodConfiguration, isolate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Handle<v8::FunctionTemplate> V8TestException::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8TestExceptionTemplate);
}

bool V8TestException::hasInstance(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Handle<v8::Object> V8TestException::findInstanceInPrototypeChain(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

TestException* V8TestException::toImplWithTypeCheck(v8::Isolate* isolate, v8::Handle<v8::Value> value)
{
    return hasInstance(value, isolate) ? blink::toScriptWrappableBase(v8::Handle<v8::Object>::Cast(value))->toImpl<TestException>() : 0;
}


void V8TestException::refObject(ScriptWrappableBase* internalPointer)
{
    internalPointer->toImpl<TestException>()->ref();
}

void V8TestException::derefObject(ScriptWrappableBase* internalPointer)
{
    internalPointer->toImpl<TestException>()->deref();
}

WrapperPersistentNode* V8TestException::createPersistentHandle(ScriptWrappableBase* internalPointer)
{
    ASSERT_NOT_REACHED();
    return 0;
}

template<>
v8::Handle<v8::Value> toV8NoInline(TestException* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl, creationContext, isolate);
}

} // namespace blink
