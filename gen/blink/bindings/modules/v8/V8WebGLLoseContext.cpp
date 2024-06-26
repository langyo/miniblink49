// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8WebGLLoseContext.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8GCController.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/dom/Element.h"
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
const WrapperTypeInfo V8WebGLLoseContext::wrapperTypeInfo = { gin::kEmbedderBlink, V8WebGLLoseContext::domTemplate, V8WebGLLoseContext::refObject, V8WebGLLoseContext::derefObject, V8WebGLLoseContext::trace, 0, V8WebGLLoseContext::visitDOMWrapper, V8WebGLLoseContext::preparePrototypeObject, V8WebGLLoseContext::installConditionallyEnabledProperties, "WebGLLoseContext", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in WebGLLoseContext.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& WebGLLoseContext::s_wrapperTypeInfo = V8WebGLLoseContext::wrapperTypeInfo;

namespace WebGLLoseContextV8Internal {

static void loseContextMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WebGLLoseContext* impl = V8WebGLLoseContext::toImpl(info.Holder());
    impl->loseContext();
}

static void loseContextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    WebGLLoseContextV8Internal::loseContextMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void restoreContextMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WebGLLoseContext* impl = V8WebGLLoseContext::toImpl(info.Holder());
    impl->restoreContext();
}

static void restoreContextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    WebGLLoseContextV8Internal::restoreContextMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace WebGLLoseContextV8Internal

void V8WebGLLoseContext::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    WebGLLoseContext* impl = scriptWrappable->toImpl<WebGLLoseContext>();
    // The canvas() method may return a reference or a pointer.
    if (Node* owner = WTF::getPtr(impl->canvas())) {
        Node* root = V8GCController::opaqueRootForGC(isolate, owner);
        isolate->SetReferenceFromGroup(v8::UniqueId(reinterpret_cast<intptr_t>(root)), wrapper);
        return;
    }
}

static const V8DOMConfiguration::MethodConfiguration V8WebGLLoseContextMethods[] = {
    {"loseContext", WebGLLoseContextV8Internal::loseContextMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"restoreContext", WebGLLoseContextV8Internal::restoreContextMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8WebGLLoseContextTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "WebGLLoseContext", v8::Local<v8::FunctionTemplate>(), V8WebGLLoseContext::internalFieldCount,
        0, 0,
        0, 0,
        V8WebGLLoseContextMethods, WTF_ARRAY_LENGTH(V8WebGLLoseContextMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8WebGLLoseContext::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8WebGLLoseContextTemplate);
}

bool V8WebGLLoseContext::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8WebGLLoseContext::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

WebGLLoseContext* V8WebGLLoseContext::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8WebGLLoseContext::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<WebGLLoseContext>()->ref();
#endif
}

void V8WebGLLoseContext::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<WebGLLoseContext>()->deref();
#endif
}

} // namespace blink
