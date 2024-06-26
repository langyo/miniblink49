// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8CSSStyleSheet.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8CSSRule.h"
#include "bindings/core/v8/V8CSSRuleList.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8GCController.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/dom/Element.h"
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
const WrapperTypeInfo V8CSSStyleSheet::wrapperTypeInfo = { gin::kEmbedderBlink, V8CSSStyleSheet::domTemplate, V8CSSStyleSheet::refObject, V8CSSStyleSheet::derefObject, V8CSSStyleSheet::trace, 0, V8CSSStyleSheet::visitDOMWrapper, V8CSSStyleSheet::preparePrototypeObject, V8CSSStyleSheet::installConditionallyEnabledProperties, "CSSStyleSheet", &V8StyleSheet::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CSSStyleSheet.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& CSSStyleSheet::s_wrapperTypeInfo = V8CSSStyleSheet::wrapperTypeInfo;

namespace CSSStyleSheetV8Internal {

static void ownerRuleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    CSSStyleSheet* impl = V8CSSStyleSheet::toImpl(holder);
    RefPtrWillBeRawPtr<CSSRule> cppValue(impl->ownerRule());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "ownerRule"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void ownerRuleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    CSSStyleSheetV8Internal::ownerRuleAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void cssRulesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    CSSStyleSheet* impl = V8CSSStyleSheet::toImpl(holder);
    RefPtrWillBeRawPtr<CSSRuleList> cppValue(impl->cssRules());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "cssRules"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void cssRulesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    CSSStyleSheetV8Internal::cssRulesAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void rulesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    CSSStyleSheet* impl = V8CSSStyleSheet::toImpl(holder);
    RefPtrWillBeRawPtr<CSSRuleList> cppValue(impl->rules());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "rules"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void rulesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::CSSStyleSheetRules);
    CSSStyleSheetV8Internal::rulesAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void insertRuleMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "insertRule", "CSSStyleSheet", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    CSSStyleSheet* impl = V8CSSStyleSheet::toImpl(info.Holder());
    V8StringResource<> rule;
    unsigned index;
    {
        rule = info[0];
        if (!rule.prepare())
            return;
        if (UNLIKELY(info.Length() <= 1)) {
            unsigned result = impl->insertRule(rule, exceptionState);
            if (exceptionState.hadException()) {
                exceptionState.throwIfNeeded();
                return;
            }
            v8SetReturnValueUnsigned(info, result);
            return;
        }
        index = toUInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    unsigned result = impl->insertRule(rule, index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValueUnsigned(info, result);
}

static void insertRuleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    CSSStyleSheetV8Internal::insertRuleMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void deleteRuleMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "deleteRule", "CSSStyleSheet", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    CSSStyleSheet* impl = V8CSSStyleSheet::toImpl(info.Holder());
    unsigned index;
    {
        index = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->deleteRule(index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void deleteRuleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    CSSStyleSheetV8Internal::deleteRuleMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void addRuleMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "addRule", "CSSStyleSheet", info.Holder(), info.GetIsolate());
    CSSStyleSheet* impl = V8CSSStyleSheet::toImpl(info.Holder());
    V8StringResource<> selector;
    V8StringResource<> style;
    unsigned index;
    {
        selector = info[0];
        if (!selector.prepare())
            return;
        style = info[1];
        if (!style.prepare())
            return;
        if (UNLIKELY(info.Length() <= 2)) {
            int result = impl->addRule(selector, style, exceptionState);
            if (exceptionState.hadException()) {
                exceptionState.throwIfNeeded();
                return;
            }
            v8SetReturnValueInt(info, result);
            return;
        }
        index = toUInt32(info.GetIsolate(), info[2], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    int result = impl->addRule(selector, style, index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValueInt(info, result);
}

static void addRuleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::CSSStyleSheetAddRule);
    CSSStyleSheetV8Internal::addRuleMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void removeRuleMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "removeRule", "CSSStyleSheet", info.Holder(), info.GetIsolate());
    CSSStyleSheet* impl = V8CSSStyleSheet::toImpl(info.Holder());
    unsigned index;
    {
        index = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->removeRule(index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void removeRuleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::CSSStyleSheetRemoveRule);
    CSSStyleSheetV8Internal::removeRuleMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace CSSStyleSheetV8Internal

void V8CSSStyleSheet::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    CSSStyleSheet* impl = scriptWrappable->toImpl<CSSStyleSheet>();
    // The ownerNode() method may return a reference or a pointer.
    if (Node* owner = WTF::getPtr(impl->ownerNode())) {
        Node* root = V8GCController::opaqueRootForGC(isolate, owner);
        isolate->SetReferenceFromGroup(v8::UniqueId(reinterpret_cast<intptr_t>(root)), wrapper);
        return;
    }
}

static const V8DOMConfiguration::AccessorConfiguration V8CSSStyleSheetAccessors[] = {
    {"ownerRule", CSSStyleSheetV8Internal::ownerRuleAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"cssRules", CSSStyleSheetV8Internal::cssRulesAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"rules", CSSStyleSheetV8Internal::rulesAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8CSSStyleSheetMethods[] = {
    {"insertRule", CSSStyleSheetV8Internal::insertRuleMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"deleteRule", CSSStyleSheetV8Internal::deleteRuleMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"addRule", CSSStyleSheetV8Internal::addRuleMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"removeRule", CSSStyleSheetV8Internal::removeRuleMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8CSSStyleSheetTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "CSSStyleSheet", V8StyleSheet::domTemplate(isolate), V8CSSStyleSheet::internalFieldCount,
        0, 0,
        V8CSSStyleSheetAccessors, WTF_ARRAY_LENGTH(V8CSSStyleSheetAccessors),
        V8CSSStyleSheetMethods, WTF_ARRAY_LENGTH(V8CSSStyleSheetMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8CSSStyleSheet::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8CSSStyleSheetTemplate);
}

bool V8CSSStyleSheet::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8CSSStyleSheet::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

CSSStyleSheet* V8CSSStyleSheet::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8CSSStyleSheet::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<CSSStyleSheet>()->ref();
#endif
}

void V8CSSStyleSheet::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<CSSStyleSheet>()->deref();
#endif
}

} // namespace blink
