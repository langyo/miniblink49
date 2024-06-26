// Copyright (c) 2009 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef mc_base_LinkedList_h
#define mc_base_LinkedList_h

// Simple LinkedList type. (See the Q&A section to understand how this
// differs from std::list).
//
// To use, start by declaring the class which will be contained in the linked
// list, as extending LinkNode (this gives it next/previous pointers).
//
//   class MyNodeType : public LinkNode<MyNodeType> {
//     ...
//   };
//
// Next, to keep track of the list's head/tail, use a LinkedList instance:
//
//   LinkedList<MyNodeType> list;
//
// To add elements to the list, use any of LinkedList::Append,
// LinkNode::InsertBefore, or LinkNode::InsertAfter:
//
//   LinkNode<MyNodeType>* n1 = ...;
//   LinkNode<MyNodeType>* n2 = ...;
//   LinkNode<MyNodeType>* n3 = ...;
//
//   list.Append(n1);
//   list.Append(n3);
//   n3->InsertBefore(n3);
//
// Lastly, to iterate through the linked list forwards:
//
//   for (LinkNode<MyNodeType>* node = list.head();
//        node != list.end();
//        node = node->next()) {
//     MyNodeType* value = node->value();
//     ...
//   }
//
// Or to iterate the linked list backwards:
//
//   for (LinkNode<MyNodeType>* node = list.tail();
//        node != list.end();
//        node = node->previous()) {
//     MyNodeType* value = node->value();
//     ...
//   }
//
// Questions and Answers:
//
// Q. Should I use std::list or base::LinkedList?
//
// A. The main reason to use base::LinkedList over std::list is
//    performance. If you don't care about the performance differences
//    then use an STL container, as it makes for better code readability.
//
//    Comparing the performance of base::LinkedList<T> to std::list<T*>:
//
//    * Erasing an element of type T* from base::LinkedList<T> is
//      an O(1) operation. Whereas for std::list<T*> it is O(n).
//      That is because with std::list<T*> you must obtain an
//      iterator to the T* element before you can call erase(iterator).
//
//    * Insertion operations with base::LinkedList<T> never require
//      heap allocations.
//
// Q. How does base::LinkedList implementation differ from std::list?
//
// A. Doubly-linked lists are made up of nodes that contain "next" and
//    "previous" pointers that reference other nodes in the list.
//
//    With base::LinkedList<T>, the type being inserted already reserves
//    space for the "next" and "previous" pointers (base::LinkNode<T>*).
//    Whereas with std::list<T> the type can be anything, so the implementation
//    needs to glue on the "next" and "previous" pointers using
//    some internal node type.

namespace mc {

template <typename T>
class LinkNode {
public:
    LinkNode() : m_previous(NULL), m_next(NULL) {}
    LinkNode(LinkNode<T>* previous, LinkNode<T>* next)
        : m_previous(previous), m_next(next) {}

    // Insert |this| into the linked list, before |e|.
    void insertBefore(LinkNode<T>* e) 
    {
        this->m_next = e;
        this->m_previous = e->m_previous;
        e->m_previous->m_next = this;
        e->m_previous = this;
    }

    // Insert |this| into the linked list, after |e|.
    void insertAfter(LinkNode<T>* e) 
    {
        this->m_next = e->m_next;
        this->m_previous = e;
        e->m_next->m_previous = this;
        e->m_next = this;
    }

    // Remove |this| from the linked list.
    void removeFromList() {
        this->m_previous->m_next = this->m_next;
        this->m_next->m_previous = this->m_previous;
        // next() and previous() return non-NULL if and only this node is not in any
        // list.
        this->m_next = NULL;
        this->m_previous = NULL;
    }

    LinkNode<T>* previous() const 
    {
        return m_previous;
    }

    LinkNode<T>* next() const 
    {
        return m_next;
    }

    // Cast from the node-type to the value type.
    const T* value() const 
    {
        return static_cast<const T*>(this);
    }

    T* value() 
    {
        return static_cast<T*>(this);
    }

private:
    LinkNode<T>* m_previous;
    LinkNode<T>* m_next;
};

template <typename T>
class LinkedList {
public:
    // The "root" node is self-referential, and forms the basis of a circular
    // list (m_root.next() will point back to the start of the list,
    // and m_root->previous() wraps around to the end of the list).
    LinkedList() : m_root(&m_root, &m_root) {}

    // Appends |e| to the end of the linked list.
    void append(LinkNode<T>* e)
    {
        e->insertBefore(&m_root);
    }

    LinkNode<T>* head() const 
    {
        return m_root.next();
    }

    LinkNode<T>* tail() const 
    {
        return m_root.previous();
    }

    const LinkNode<T>* end() const
    {
        return &m_root;
    }

    bool empty() const 
    {
        return head() == end();
    }

private:
    LinkNode<T> m_root;
};

}  // namespace mc

#endif  // mc_base_LinkedList_h
