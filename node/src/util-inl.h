//Copyright Joyent, Inc. and other Node contributors.
//The MIT License (MIT)

#ifndef SRC_UTIL_INL_H_
#define SRC_UTIL_INL_H_

#if defined(NODE_WANT_INTERNALS) && NODE_WANT_INTERNALS

#include "util.h"
#include <cstring>

#if defined(_MSC_VER)
#include <intrin.h>
#define BSWAP_2(x) _byteswap_ushort(x)
#define BSWAP_4(x) _byteswap_ulong(x)
#define BSWAP_8(x) _byteswap_uint64(x)
#else
#define BSWAP_2(x) ((x) << 8) | ((x) >> 8)
#define BSWAP_4(x) \
    (((x)&0xFF) << 24) | (((x)&0xFF00) << 8) | (((x) >> 8) & 0xFF00) | (((x) >> 24) & 0xFF)
#define BSWAP_8(x) \
    (((x)&0xFF00000000000000ull) >> 56) | (((x)&0x00FF000000000000ull) >> 40) | (((x)&0x0000FF0000000000ull) >> 24) | (((x)&0x000000FF00000000ull) >> 8) | (((x)&0x00000000FF000000ull) << 8) | (((x)&0x0000000000FF0000ull) << 24) | (((x)&0x000000000000FF00ull) << 40) | (((x)&0x00000000000000FFull) << 56)
#endif

namespace node {

template <typename T>
ListNode<T>::ListNode()
    : prev_(this)
    , next_(this)
{
}

template <typename T>
ListNode<T>::~ListNode()
{
    Remove();
}

template <typename T>
void ListNode<T>::Remove()
{
    prev_->next_ = next_;
    next_->prev_ = prev_;
    prev_ = this;
    next_ = this;
}

template <typename T>
bool ListNode<T>::IsEmpty() const
{
    return prev_ == this;
}

template <typename T, ListNode<T>(T::*M)>
ListHead<T, M>::Iterator::Iterator(ListNode<T>* node)
    : node_(node)
{
}

template <typename T, ListNode<T>(T::*M)>
T* ListHead<T, M>::Iterator::operator*() const
{
    return ContainerOf(M, node_);
}

template <typename T, ListNode<T>(T::*M)>
const typename ListHead<T, M>::Iterator&
ListHead<T, M>::Iterator::operator++()
{
    node_ = node_->next_;
    return *this;
}

template <typename T, ListNode<T>(T::*M)>
bool ListHead<T, M>::Iterator::operator!=(const Iterator& that) const
{
    return node_ != that.node_;
}

template <typename T, ListNode<T>(T::*M)>
ListHead<T, M>::~ListHead()
{
    while (IsEmpty() == false)
        head_.next_->Remove();
}

template <typename T, ListNode<T>(T::*M)>
void ListHead<T, M>::MoveBack(ListHead* that)
{
    if (IsEmpty())
        return;
    ListNode<T>* to = &that->head_;
    head_.next_->prev_ = to->prev_;
    to->prev_->next_ = head_.next_;
    head_.prev_->next_ = to;
    to->prev_ = head_.prev_;
    head_.prev_ = &head_;
    head_.next_ = &head_;
}

template <typename T, ListNode<T>(T::*M)>
void ListHead<T, M>::PushBack(T* element)
{
    ListNode<T>* that = &(element->*M);
    head_.prev_->next_ = that;
    that->prev_ = head_.prev_;
    that->next_ = &head_;
    head_.prev_ = that;
}

template <typename T, ListNode<T>(T::*M)>
void ListHead<T, M>::PushFront(T* element)
{
    ListNode<T>* that = &(element->*M);
    head_.next_->prev_ = that;
    that->prev_ = &head_;
    that->next_ = head_.next_;
    head_.next_ = that;
}

template <typename T, ListNode<T>(T::*M)>
bool ListHead<T, M>::IsEmpty() const
{
    return head_.IsEmpty();
}

template <typename T, ListNode<T>(T::*M)>
T* ListHead<T, M>::PopFront()
{
    if (IsEmpty())
        return nullptr;
    ListNode<T>* node = head_.next_;
    node->Remove();
    return ContainerOf(M, node);
}

template <typename T, ListNode<T>(T::*M)>
typename ListHead<T, M>::Iterator ListHead<T, M>::begin() const
{
    return Iterator(head_.next_);
}

template <typename T, ListNode<T>(T::*M)>
typename ListHead<T, M>::Iterator ListHead<T, M>::end() const
{
    return Iterator(const_cast<ListNode<T>*>(&head_));
}

template <typename Inner, typename Outer>
ContainerOfHelper<Inner, Outer>::ContainerOfHelper(Inner Outer::*field,
    Inner* pointer)
    : pointer_(reinterpret_cast<Outer*>(
        reinterpret_cast<uintptr_t>(pointer) - reinterpret_cast<uintptr_t>(&(static_cast<Outer*>(0)->*field))))
{
}

template <typename Inner, typename Outer>
template <typename TypeName>
ContainerOfHelper<Inner, Outer>::operator TypeName*() const
{
    return static_cast<TypeName*>(pointer_);
}

template <typename Inner, typename Outer>
inline ContainerOfHelper<Inner, Outer> ContainerOf(Inner Outer::*field,
    Inner* pointer)
{
    return ContainerOfHelper<Inner, Outer>(field, pointer);
}

template <class TypeName>
inline v8::Local<TypeName> PersistentToLocal(
    v8::Isolate* isolate,
    const v8::Persistent<TypeName>& persistent)
{
    if (persistent.IsWeak()) {
        return WeakPersistentToLocal(isolate, persistent);
    } else {
        return StrongPersistentToLocal(persistent);
    }
}

template <class TypeName>
inline v8::Local<TypeName> StrongPersistentToLocal(
    const v8::Persistent<TypeName>& persistent)
{
    return *reinterpret_cast<v8::Local<TypeName>*>(
        const_cast<v8::Persistent<TypeName>*>(&persistent));
}

template <class TypeName>
inline v8::Local<TypeName> WeakPersistentToLocal(
    v8::Isolate* isolate,
    const v8::Persistent<TypeName>& persistent)
{
    return v8::Local<TypeName>::New(isolate, persistent);
}

inline v8::Local<v8::String> OneByteString(v8::Isolate* isolate,
    const char* data,
    int length)
{
    return v8::String::NewFromOneByte(isolate,
        reinterpret_cast<const uint8_t*>(data),
        v8::NewStringType::kNormal,
        length)
        .ToLocalChecked();
}

inline v8::Local<v8::String> OneByteString(v8::Isolate* isolate,
    const signed char* data,
    int length)
{
    return v8::String::NewFromOneByte(isolate,
        reinterpret_cast<const uint8_t*>(data),
        v8::NewStringType::kNormal,
        length)
        .ToLocalChecked();
}

inline v8::Local<v8::String> OneByteString(v8::Isolate* isolate,
    const unsigned char* data,
    int length)
{
    return v8::String::NewFromOneByte(isolate,
        reinterpret_cast<const uint8_t*>(data),
        v8::NewStringType::kNormal,
        length)
        .ToLocalChecked();
}

template <typename TypeName>
void Wrap(v8::Local<v8::Object> object, TypeName* pointer)
{
    NODE_CHECK_EQ(false, object.IsEmpty());
    NODE_CHECK_GT(object->InternalFieldCount(), 0);
    object->SetAlignedPointerInInternalField(0, pointer);
}

void ClearWrap(v8::Local<v8::Object> object)
{
    Wrap<void>(object, nullptr);
}

template <typename TypeName>
TypeName* Unwrap(v8::Local<v8::Object> object)
{
    NODE_CHECK_EQ(false, object.IsEmpty());
    NODE_CHECK_GT(object->InternalFieldCount(), 0);
    void* pointer = object->GetAlignedPointerFromInternalField(0);
    return static_cast<TypeName*>(pointer);
}

void SwapBytes16(char* data, size_t nbytes)
{
    NODE_CHECK_EQ(nbytes % 2, 0);

#if defined(_MSC_VER)
    int align = reinterpret_cast<uintptr_t>(data) % sizeof(uint16_t);
    if (align == 0) {
        // MSVC has no strict aliasing, and is able to highly optimize this case.
        uint16_t* data16 = reinterpret_cast<uint16_t*>(data);
        size_t len16 = nbytes / sizeof(*data16);
        for (size_t i = 0; i < len16; i++) {
            data16[i] = BSWAP_2(data16[i]);
        }
        return;
    }
#endif

    uint16_t temp;
    for (size_t i = 0; i < nbytes; i += sizeof(temp)) {
        memcpy(&temp, &data[i], sizeof(temp));
        temp = BSWAP_2(temp);
        memcpy(&data[i], &temp, sizeof(temp));
    }
}

void SwapBytes32(char* data, size_t nbytes)
{
    NODE_CHECK_EQ(nbytes % 4, 0);

#if defined(_MSC_VER)
    int align = reinterpret_cast<uintptr_t>(data) % sizeof(uint32_t);
    // MSVC has no strict aliasing, and is able to highly optimize this case.
    if (align == 0) {
        uint32_t* data32 = reinterpret_cast<uint32_t*>(data);
        size_t len32 = nbytes / sizeof(*data32);
        for (size_t i = 0; i < len32; i++) {
            data32[i] = BSWAP_4(data32[i]);
        }
        return;
    }
#endif

    uint32_t temp;
    for (size_t i = 0; i < nbytes; i += sizeof(temp)) {
        memcpy(&temp, &data[i], sizeof(temp));
        temp = BSWAP_4(temp);
        memcpy(&data[i], &temp, sizeof(temp));
    }
}

void SwapBytes64(char* data, size_t nbytes)
{
    NODE_CHECK_EQ(nbytes % 8, 0);

#if defined(_MSC_VER)
    int align = reinterpret_cast<uintptr_t>(data) % sizeof(uint64_t);
    if (align == 0) {
        // MSVC has no strict aliasing, and is able to highly optimize this case.
        uint64_t* data64 = reinterpret_cast<uint64_t*>(data);
        size_t len64 = nbytes / sizeof(*data64);
        for (size_t i = 0; i < len64; i++) {
            data64[i] = BSWAP_8(data64[i]);
        }
        return;
    }
#endif

    uint64_t temp;
    for (size_t i = 0; i < nbytes; i += sizeof(temp)) {
        memcpy(&temp, &data[i], sizeof(temp));
        temp = BSWAP_8(temp);
        memcpy(&data[i], &temp, sizeof(temp));
    }
}

char ToLower(char c)
{
    return c >= 'A' && c <= 'Z' ? c + ('a' - 'A') : c;
}

bool StringEqualNoCase(const char* a, const char* b)
{
    do {
        if (*a == '\0')
            return *b == '\0';
        if (*b == '\0')
            return *a == '\0';
    } while (ToLower(*a++) == ToLower(*b++));
    return false;
}

bool StringEqualNoCaseN(const char* a, const char* b, size_t length)
{
    for (size_t i = 0; i < length; i++) {
        if (ToLower(a[i]) != ToLower(b[i]))
            return false;
        if (a[i] == '\0')
            return true;
    }
    return true;
}

// These should be used in our code as opposed to the native
// versions as they abstract out some platform and or
// compiler version specific functionality.
// malloc(0) and realloc(ptr, 0) have implementation-defined behavior in
// that the standard allows them to either return a unique pointer or a
// nullptr for zero-sized allocation requests.  Normalize by always using
// a nullptr.

// weolar
// void* Realloc(void* pointer, size_t size) {
//   if (size == 0) {
//     free(pointer);
//     return nullptr;
//   }
//   return realloc(pointer, size);
// }
//
// // As per spec realloc behaves like malloc if passed nullptr.
// void* Malloc(size_t size) {
//   if (size == 0) size = 1;
//   return Realloc(nullptr, size);
// }
//
// void* Calloc(size_t n, size_t size) {
//   if (n == 0) n = 1;
//   if (size == 0) size = 1;
//   NODE_CHECK_GE(n * size, n);  // Overflow guard.
//   return calloc(n, size);
// }

} // namespace node

#endif // defined(NODE_WANT_INTERNALS) && NODE_WANT_INTERNALS

#endif // SRC_UTIL_INL_H_
