// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SVGPathSegList.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8SVGElement.h"
#include "bindings/core/v8/V8SVGPathSeg.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/UseCounter.h"
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
const WrapperTypeInfo V8SVGPathSegList::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGPathSegList::domTemplate, V8SVGPathSegList::refObject, V8SVGPathSegList::derefObject, V8SVGPathSegList::trace, 0, V8SVGPathSegList::visitDOMWrapper, V8SVGPathSegList::preparePrototypeObject, V8SVGPathSegList::installConditionallyEnabledProperties, "SVGPathSegList", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGPathSegListTearOff.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGPathSegListTearOff::s_wrapperTypeInfo = V8SVGPathSegList::wrapperTypeInfo;

namespace SVGPathSegListTearOffV8Internal {

static void lengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGPathSegListTearOff* impl = V8SVGPathSegList::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->length());
}

static void lengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGPathSegListTearOffV8Internal::lengthAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void numberOfItemsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGPathSegListTearOff* impl = V8SVGPathSegList::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->length());
}

static void numberOfItemsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    SVGPathSegListTearOffV8Internal::numberOfItemsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void clearMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "clear", "SVGPathSegList", info.Holder(), info.GetIsolate());
    SVGPathSegListTearOff* impl = V8SVGPathSegList::toImpl(info.Holder());
    impl->clear(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void clearMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGPathSegListTearOffV8Internal::clearMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void initializeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "initialize", "SVGPathSegList", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    SVGPathSegListTearOff* impl = V8SVGPathSegList::toImpl(info.Holder());
    SVGPathSeg* newItem;
    {
        newItem = V8SVGPathSeg::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!newItem) {
            exceptionState.throwTypeError("parameter 1 is not of type 'SVGPathSeg'.");
            exceptionState.throwIfNeeded();
            return;
        }
    }
    RefPtrWillBeRawPtr<SVGPathSeg> result = impl->initialize(newItem, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void initializeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGPathSegListTearOffV8Internal::initializeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "getItem", "SVGPathSegList", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    SVGPathSegListTearOff* impl = V8SVGPathSegList::toImpl(info.Holder());
    unsigned index;
    {
        index = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    RefPtrWillBeRawPtr<SVGPathSeg> result = impl->getItem(index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void getItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGPathSegListTearOffV8Internal::getItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void insertItemBeforeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "insertItemBefore", "SVGPathSegList", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    SVGPathSegListTearOff* impl = V8SVGPathSegList::toImpl(info.Holder());
    SVGPathSeg* newItem;
    unsigned index;
    {
        newItem = V8SVGPathSeg::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!newItem) {
            exceptionState.throwTypeError("parameter 1 is not of type 'SVGPathSeg'.");
            exceptionState.throwIfNeeded();
            return;
        }
        index = toUInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    RefPtrWillBeRawPtr<SVGPathSeg> result = impl->insertItemBefore(newItem, index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void insertItemBeforeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGPathSegListTearOffV8Internal::insertItemBeforeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void replaceItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "replaceItem", "SVGPathSegList", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    SVGPathSegListTearOff* impl = V8SVGPathSegList::toImpl(info.Holder());
    SVGPathSeg* newItem;
    unsigned index;
    {
        newItem = V8SVGPathSeg::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!newItem) {
            exceptionState.throwTypeError("parameter 1 is not of type 'SVGPathSeg'.");
            exceptionState.throwIfNeeded();
            return;
        }
        index = toUInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    RefPtrWillBeRawPtr<SVGPathSeg> result = impl->replaceItem(newItem, index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void replaceItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGPathSegListTearOffV8Internal::replaceItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void removeItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "removeItem", "SVGPathSegList", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    SVGPathSegListTearOff* impl = V8SVGPathSegList::toImpl(info.Holder());
    unsigned index;
    {
        index = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    RefPtrWillBeRawPtr<SVGPathSeg> result = impl->removeItem(index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void removeItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGPathSegListTearOffV8Internal::removeItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void appendItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "appendItem", "SVGPathSegList", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    SVGPathSegListTearOff* impl = V8SVGPathSegList::toImpl(info.Holder());
    SVGPathSeg* newItem;
    {
        newItem = V8SVGPathSeg::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!newItem) {
            exceptionState.throwTypeError("parameter 1 is not of type 'SVGPathSeg'.");
            exceptionState.throwIfNeeded();
            return;
        }
    }
    RefPtrWillBeRawPtr<SVGPathSeg> result = impl->appendItem(newItem, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void appendItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    SVGPathSegListTearOffV8Internal::appendItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void indexedPropertyGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    SVGPathSegListTearOff* impl = V8SVGPathSegList::toImpl(info.Holder());
    ExceptionState exceptionState(ExceptionState::IndexedGetterContext, "SVGPathSegList", info.Holder(), info.GetIsolate());
    RefPtrWillBeRawPtr<SVGPathSeg> result = impl->getItem(index, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (!result)
        return;
    v8SetReturnValueFast(info, WTF::getPtr(result.release()), impl);
}

static void indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMIndexedProperty");
    SVGPathSegListTearOffV8Internal::indexedPropertyGetter(index, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void indexedPropertySetter(uint32_t index, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    SVGPathSegListTearOff* impl = V8SVGPathSegList::toImpl(info.Holder());
    SVGPathSeg* propertyValue = V8SVGPathSeg::toImplWithTypeCheck(info.GetIsolate(), v8Value);
    ExceptionState exceptionState(ExceptionState::IndexedSetterContext, "SVGPathSegList", info.Holder(), info.GetIsolate());
    if (!propertyValue) {
        exceptionState.throwTypeError("The provided value is not of type 'SVGPathSeg'.");
        exceptionState.throwIfNeeded();
        return;
    }
    bool result = impl->anonymousIndexedSetter(index, propertyValue, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (!result)
        return;
    v8SetReturnValue(info, v8Value);
}

static void indexedPropertySetterCallback(uint32_t index, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMIndexedProperty");
    SVGPathSegListTearOffV8Internal::indexedPropertySetter(index, v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace SVGPathSegListTearOffV8Internal

void V8SVGPathSegList::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    SVGPathSegListTearOff* impl = scriptWrappable->toImpl<SVGPathSegListTearOff>();
    v8::Local<v8::Object> creationContext = v8::Local<v8::Object>::New(isolate, wrapper);
    V8WrapperInstantiationScope scope(creationContext, isolate);
    SVGElement* contextElement = impl->contextElement();
    if (contextElement) {
        if (DOMDataStore::containsWrapper(contextElement, isolate))
            DOMDataStore::setWrapperReference(wrapper, contextElement, isolate);
    }
}

static const V8DOMConfiguration::AccessorConfiguration V8SVGPathSegListAccessors[] = {
    {"length", SVGPathSegListTearOffV8Internal::lengthAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"numberOfItems", SVGPathSegListTearOffV8Internal::numberOfItemsAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8SVGPathSegListMethods[] = {
    {"clear", SVGPathSegListTearOffV8Internal::clearMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"initialize", SVGPathSegListTearOffV8Internal::initializeMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"getItem", SVGPathSegListTearOffV8Internal::getItemMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"insertItemBefore", SVGPathSegListTearOffV8Internal::insertItemBeforeMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts},
    {"replaceItem", SVGPathSegListTearOffV8Internal::replaceItemMethodCallback, 0, 2, V8DOMConfiguration::ExposedToAllScripts},
    {"removeItem", SVGPathSegListTearOffV8Internal::removeItemMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"appendItem", SVGPathSegListTearOffV8Internal::appendItemMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8SVGPathSegListTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::svg1DOMEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SVGPathSegList", v8::Local<v8::FunctionTemplate>(), V8SVGPathSegList::internalFieldCount, 0, 0, 0, 0, 0, 0);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "SVGPathSegList", v8::Local<v8::FunctionTemplate>(), V8SVGPathSegList::internalFieldCount,
            0, 0,
            V8SVGPathSegListAccessors, WTF_ARRAY_LENGTH(V8SVGPathSegListAccessors),
            V8SVGPathSegListMethods, WTF_ARRAY_LENGTH(V8SVGPathSegListMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    {
        v8::IndexedPropertyHandlerConfiguration config(SVGPathSegListTearOffV8Internal::indexedPropertyGetterCallback, SVGPathSegListTearOffV8Internal::indexedPropertySetterCallback, 0, 0, indexedPropertyEnumerator<SVGPathSegListTearOff>);
        functionTemplate->InstanceTemplate()->SetHandler(config);
    }

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8SVGPathSegList::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGPathSegListTemplate);
}

bool V8SVGPathSegList::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGPathSegList::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGPathSegListTearOff* V8SVGPathSegList::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8SVGPathSegList::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGPathSegListTearOff>()->ref();
#endif
}

void V8SVGPathSegList::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<SVGPathSegListTearOff>()->deref();
#endif
}

} // namespace blink
