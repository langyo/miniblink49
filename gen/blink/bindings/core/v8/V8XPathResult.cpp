// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8XPathResult.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Node.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8XPathResult::wrapperTypeInfo = { gin::kEmbedderBlink, V8XPathResult::domTemplate, V8XPathResult::refObject, V8XPathResult::derefObject, V8XPathResult::trace, 0, 0, V8XPathResult::preparePrototypeObject, V8XPathResult::installConditionallyEnabledProperties, "XPathResult", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in XPathResult.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& XPathResult::s_wrapperTypeInfo = V8XPathResult::wrapperTypeInfo;

namespace XPathResultV8Internal {

static void resultTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XPathResult* impl = V8XPathResult::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->resultType());
}

static void resultTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    XPathResultV8Internal::resultTypeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void numberValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XPathResult* impl = V8XPathResult::toImpl(holder);
    ExceptionState exceptionState(ExceptionState::GetterContext, "numberValue", "XPathResult", holder, info.GetIsolate());
    double cppValue(impl->numberValue(exceptionState));
    if (UNLIKELY(exceptionState.throwIfNeeded()))
        return;
    v8SetReturnValue(info, cppValue);
}

static void numberValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    XPathResultV8Internal::numberValueAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void stringValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XPathResult* impl = V8XPathResult::toImpl(holder);
    ExceptionState exceptionState(ExceptionState::GetterContext, "stringValue", "XPathResult", holder, info.GetIsolate());
    String cppValue(impl->stringValue(exceptionState));
    if (UNLIKELY(exceptionState.throwIfNeeded()))
        return;
    v8SetReturnValueString(info, cppValue, info.GetIsolate());
}

static void stringValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    XPathResultV8Internal::stringValueAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void booleanValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XPathResult* impl = V8XPathResult::toImpl(holder);
    ExceptionState exceptionState(ExceptionState::GetterContext, "booleanValue", "XPathResult", holder, info.GetIsolate());
    bool cppValue(impl->booleanValue(exceptionState));
    if (UNLIKELY(exceptionState.throwIfNeeded()))
        return;
    v8SetReturnValueBool(info, cppValue);
}

static void booleanValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    XPathResultV8Internal::booleanValueAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void singleNodeValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XPathResult* impl = V8XPathResult::toImpl(holder);
    ExceptionState exceptionState(ExceptionState::GetterContext, "singleNodeValue", "XPathResult", holder, info.GetIsolate());
    RefPtrWillBeRawPtr<Node> cppValue(impl->singleNodeValue(exceptionState));
    if (UNLIKELY(exceptionState.throwIfNeeded()))
        return;
    v8SetReturnValueFast(info, WTF::getPtr(cppValue.release()), impl);
}

static void singleNodeValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    XPathResultV8Internal::singleNodeValueAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void invalidIteratorStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XPathResult* impl = V8XPathResult::toImpl(holder);
    v8SetReturnValueBool(info, impl->invalidIteratorState());
}

static void invalidIteratorStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    XPathResultV8Internal::invalidIteratorStateAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void snapshotLengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XPathResult* impl = V8XPathResult::toImpl(holder);
    ExceptionState exceptionState(ExceptionState::GetterContext, "snapshotLength", "XPathResult", holder, info.GetIsolate());
    unsigned cppValue(impl->snapshotLength(exceptionState));
    if (UNLIKELY(exceptionState.throwIfNeeded()))
        return;
    v8SetReturnValueUnsigned(info, cppValue);
}

static void snapshotLengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    XPathResultV8Internal::snapshotLengthAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void iterateNextMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "iterateNext", "XPathResult", info.Holder(), info.GetIsolate());
    XPathResult* impl = V8XPathResult::toImpl(info.Holder());
    RefPtrWillBeRawPtr<Node> result = impl->iterateNext(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void iterateNextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    XPathResultV8Internal::iterateNextMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void snapshotItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "snapshotItem", "XPathResult", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    XPathResult* impl = V8XPathResult::toImpl(info.Holder());
    unsigned index;
    {
        index = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    RefPtrWillBeRawPtr<Node> result = impl->snapshotItem(index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void snapshotItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    XPathResultV8Internal::snapshotItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace XPathResultV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8XPathResultAccessors[] = {
    {"resultType", XPathResultV8Internal::resultTypeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"numberValue", XPathResultV8Internal::numberValueAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"stringValue", XPathResultV8Internal::stringValueAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"booleanValue", XPathResultV8Internal::booleanValueAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"singleNodeValue", XPathResultV8Internal::singleNodeValueAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"invalidIteratorState", XPathResultV8Internal::invalidIteratorStateAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"snapshotLength", XPathResultV8Internal::snapshotLengthAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8XPathResultMethods[] = {
    {"iterateNext", XPathResultV8Internal::iterateNextMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"snapshotItem", XPathResultV8Internal::snapshotItemMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8XPathResultTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "XPathResult", v8::Local<v8::FunctionTemplate>(), V8XPathResult::internalFieldCount,
        0, 0,
        V8XPathResultAccessors, WTF_ARRAY_LENGTH(V8XPathResultAccessors),
        V8XPathResultMethods, WTF_ARRAY_LENGTH(V8XPathResultMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    static const V8DOMConfiguration::ConstantConfiguration V8XPathResultConstants[] = {
        {"ANY_TYPE", 0, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"NUMBER_TYPE", 1, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"STRING_TYPE", 2, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"BOOLEAN_TYPE", 3, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"UNORDERED_NODE_ITERATOR_TYPE", 4, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"ORDERED_NODE_ITERATOR_TYPE", 5, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"UNORDERED_NODE_SNAPSHOT_TYPE", 6, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"ORDERED_NODE_SNAPSHOT_TYPE", 7, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"ANY_UNORDERED_NODE_TYPE", 8, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"FIRST_ORDERED_NODE_TYPE", 9, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
    };
    V8DOMConfiguration::installConstants(isolate, functionTemplate, prototypeTemplate, V8XPathResultConstants, WTF_ARRAY_LENGTH(V8XPathResultConstants));
    static_assert(0 == XPathResult::ANY_TYPE, "the value of XPathResult_ANY_TYPE does not match with implementation");
    static_assert(1 == XPathResult::NUMBER_TYPE, "the value of XPathResult_NUMBER_TYPE does not match with implementation");
    static_assert(2 == XPathResult::STRING_TYPE, "the value of XPathResult_STRING_TYPE does not match with implementation");
    static_assert(3 == XPathResult::BOOLEAN_TYPE, "the value of XPathResult_BOOLEAN_TYPE does not match with implementation");
    static_assert(4 == XPathResult::UNORDERED_NODE_ITERATOR_TYPE, "the value of XPathResult_UNORDERED_NODE_ITERATOR_TYPE does not match with implementation");
    static_assert(5 == XPathResult::ORDERED_NODE_ITERATOR_TYPE, "the value of XPathResult_ORDERED_NODE_ITERATOR_TYPE does not match with implementation");
    static_assert(6 == XPathResult::UNORDERED_NODE_SNAPSHOT_TYPE, "the value of XPathResult_UNORDERED_NODE_SNAPSHOT_TYPE does not match with implementation");
    static_assert(7 == XPathResult::ORDERED_NODE_SNAPSHOT_TYPE, "the value of XPathResult_ORDERED_NODE_SNAPSHOT_TYPE does not match with implementation");
    static_assert(8 == XPathResult::ANY_UNORDERED_NODE_TYPE, "the value of XPathResult_ANY_UNORDERED_NODE_TYPE does not match with implementation");
    static_assert(9 == XPathResult::FIRST_ORDERED_NODE_TYPE, "the value of XPathResult_FIRST_ORDERED_NODE_TYPE does not match with implementation");

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8XPathResult::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8XPathResultTemplate);
}

bool V8XPathResult::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8XPathResult::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

XPathResult* V8XPathResult::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8XPathResult::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8XPathResult::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
