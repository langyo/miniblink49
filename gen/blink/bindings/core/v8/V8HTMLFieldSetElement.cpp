// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8HTMLFieldSetElement.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HTMLFormControlsCollection.h"
#include "bindings/core/v8/V8HTMLFormElement.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8ValidityState.h"
#include "core/HTMLNames.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/dom/custom/CustomElementProcessingStack.h"
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
const WrapperTypeInfo V8HTMLFieldSetElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8HTMLFieldSetElement::domTemplate, V8HTMLFieldSetElement::refObject, V8HTMLFieldSetElement::derefObject, V8HTMLFieldSetElement::trace, 0, 0, V8HTMLFieldSetElement::preparePrototypeObject, V8HTMLFieldSetElement::installConditionallyEnabledProperties, "HTMLFieldSetElement", &V8HTMLElement::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLFieldSetElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& HTMLFieldSetElement::s_wrapperTypeInfo = V8HTMLFieldSetElement::wrapperTypeInfo;

namespace HTMLFieldSetElementV8Internal {

static void disabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLFieldSetElement* impl = V8HTMLFieldSetElement::toImpl(holder);
    v8SetReturnValueBool(info, impl->fastHasAttribute(HTMLNames::disabledAttr));
}

static void disabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLFieldSetElementV8Internal::disabledAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void disabledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "disabled", "HTMLFieldSetElement", holder, info.GetIsolate());
    HTMLFieldSetElement* impl = V8HTMLFieldSetElement::toImpl(holder);
    bool cppValue = toBoolean(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    impl->setBooleanAttribute(HTMLNames::disabledAttr, cppValue);
}

static void disabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLFieldSetElementV8Internal::disabledAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void formAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLFieldSetElement* impl = V8HTMLFieldSetElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->formOwner()), impl);
}

static void formAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLFieldSetElementV8Internal::formAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void nameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toImpl(holder);
    v8SetReturnValueString(info, impl->getNameAttribute(), info.GetIsolate());
}

static void nameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLFieldSetElementV8Internal::nameAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void nameAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::nameAttr, cppValue);
}

static void nameAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLFieldSetElementV8Internal::nameAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void typeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLFieldSetElement* impl = V8HTMLFieldSetElement::toImpl(holder);
    v8SetReturnValueString(info, impl->type(), info.GetIsolate());
}

static void typeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLFieldSetElementV8Internal::typeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void elementsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLFieldSetElement* impl = V8HTMLFieldSetElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->elements()), impl);
}

static void elementsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLFieldSetElementV8Internal::elementsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void willValidateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLFieldSetElement* impl = V8HTMLFieldSetElement::toImpl(holder);
    v8SetReturnValueBool(info, impl->willValidate());
}

static void willValidateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLFieldSetElementV8Internal::willValidateAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void validityAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLFieldSetElement* impl = V8HTMLFieldSetElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->validity()), impl);
}

static void validityAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLFieldSetElementV8Internal::validityAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void validationMessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLFieldSetElement* impl = V8HTMLFieldSetElement::toImpl(holder);
    v8SetReturnValueString(info, impl->validationMessage(), info.GetIsolate());
}

static void validationMessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLFieldSetElementV8Internal::validationMessageAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void checkValidityMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLFieldSetElement* impl = V8HTMLFieldSetElement::toImpl(info.Holder());
    v8SetReturnValueBool(info, impl->checkValidity());
}

static void checkValidityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    HTMLFieldSetElementV8Internal::checkValidityMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void reportValidityMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLFieldSetElement* impl = V8HTMLFieldSetElement::toImpl(info.Holder());
    v8SetReturnValueBool(info, impl->reportValidity());
}

static void reportValidityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    HTMLFieldSetElementV8Internal::reportValidityMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void setCustomValidityMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "setCustomValidity", "HTMLFieldSetElement", 1, info.Length()), info.GetIsolate());
        return;
    }
    HTMLFieldSetElement* impl = V8HTMLFieldSetElement::toImpl(info.Holder());
    V8StringResource<> error;
    {
        error = info[0];
        if (!error.prepare())
            return;
    }
    impl->setCustomValidity(error);
}

static void setCustomValidityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    HTMLFieldSetElementV8Internal::setCustomValidityMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace HTMLFieldSetElementV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8HTMLFieldSetElementAccessors[] = {
    {"disabled", HTMLFieldSetElementV8Internal::disabledAttributeGetterCallback, HTMLFieldSetElementV8Internal::disabledAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"form", HTMLFieldSetElementV8Internal::formAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"name", HTMLFieldSetElementV8Internal::nameAttributeGetterCallback, HTMLFieldSetElementV8Internal::nameAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"type", HTMLFieldSetElementV8Internal::typeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"elements", HTMLFieldSetElementV8Internal::elementsAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"willValidate", HTMLFieldSetElementV8Internal::willValidateAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"validity", HTMLFieldSetElementV8Internal::validityAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"validationMessage", HTMLFieldSetElementV8Internal::validationMessageAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8HTMLFieldSetElementMethods[] = {
    {"checkValidity", HTMLFieldSetElementV8Internal::checkValidityMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"reportValidity", HTMLFieldSetElementV8Internal::reportValidityMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"setCustomValidity", HTMLFieldSetElementV8Internal::setCustomValidityMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8HTMLFieldSetElementTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "HTMLFieldSetElement", V8HTMLElement::domTemplate(isolate), V8HTMLFieldSetElement::internalFieldCount,
        0, 0,
        V8HTMLFieldSetElementAccessors, WTF_ARRAY_LENGTH(V8HTMLFieldSetElementAccessors),
        V8HTMLFieldSetElementMethods, WTF_ARRAY_LENGTH(V8HTMLFieldSetElementMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8HTMLFieldSetElement::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8HTMLFieldSetElementTemplate);
}

bool V8HTMLFieldSetElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8HTMLFieldSetElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

HTMLFieldSetElement* V8HTMLFieldSetElement::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8HTMLFieldSetElement::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<HTMLFieldSetElement>()->ref();
#endif
}

void V8HTMLFieldSetElement::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<HTMLFieldSetElement>()->deref();
#endif
}

} // namespace blink
