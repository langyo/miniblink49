// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8WebGLCompressedTextureATC.h"

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
const WrapperTypeInfo V8WebGLCompressedTextureATC::wrapperTypeInfo = { gin::kEmbedderBlink, V8WebGLCompressedTextureATC::domTemplate, V8WebGLCompressedTextureATC::refObject, V8WebGLCompressedTextureATC::derefObject, V8WebGLCompressedTextureATC::trace, 0, V8WebGLCompressedTextureATC::visitDOMWrapper, V8WebGLCompressedTextureATC::preparePrototypeObject, V8WebGLCompressedTextureATC::installConditionallyEnabledProperties, "WebGLCompressedTextureATC", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in WebGLCompressedTextureATC.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& WebGLCompressedTextureATC::s_wrapperTypeInfo = V8WebGLCompressedTextureATC::wrapperTypeInfo;

namespace WebGLCompressedTextureATCV8Internal {

} // namespace WebGLCompressedTextureATCV8Internal

void V8WebGLCompressedTextureATC::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    WebGLCompressedTextureATC* impl = scriptWrappable->toImpl<WebGLCompressedTextureATC>();
    // The canvas() method may return a reference or a pointer.
    if (Node* owner = WTF::getPtr(impl->canvas())) {
        Node* root = V8GCController::opaqueRootForGC(isolate, owner);
        isolate->SetReferenceFromGroup(v8::UniqueId(reinterpret_cast<intptr_t>(root)), wrapper);
        return;
    }
}

static void installV8WebGLCompressedTextureATCTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "WebGLCompressedTextureATC", v8::Local<v8::FunctionTemplate>(), V8WebGLCompressedTextureATC::internalFieldCount,
        0, 0,
        0, 0,
        0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    static const V8DOMConfiguration::ConstantConfiguration V8WebGLCompressedTextureATCConstants[] = {
        {"COMPRESSED_RGB_ATC_WEBGL", 0x8C92, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
        {"COMPRESSED_RGBA_ATC_EXPLICIT_ALPHA_WEBGL", 0x8C93, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
        {"COMPRESSED_RGBA_ATC_INTERPOLATED_ALPHA_WEBGL", 0x87EE, 0, 0, V8DOMConfiguration::ConstantTypeUnsignedLong},
    };
    V8DOMConfiguration::installConstants(isolate, functionTemplate, prototypeTemplate, V8WebGLCompressedTextureATCConstants, WTF_ARRAY_LENGTH(V8WebGLCompressedTextureATCConstants));

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8WebGLCompressedTextureATC::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8WebGLCompressedTextureATCTemplate);
}

bool V8WebGLCompressedTextureATC::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8WebGLCompressedTextureATC::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

WebGLCompressedTextureATC* V8WebGLCompressedTextureATC::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8WebGLCompressedTextureATC::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<WebGLCompressedTextureATC>()->ref();
#endif
}

void V8WebGLCompressedTextureATC::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<WebGLCompressedTextureATC>()->deref();
#endif
}

} // namespace blink
