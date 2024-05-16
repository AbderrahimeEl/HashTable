#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include "node.hpp"

template <typename Type>
class linkedList
{
public:
    Node<Type> *head;
    Node<Type> *tail;
    int size;
    linkedList();
    void insertNode(Node<Type> *node);
    void display();
};

#include "../src/linkedList.tpp"

#endif // LINKEDLIST_HPP