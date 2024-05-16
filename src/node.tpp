#include "../include/node.hpp"

template <typename Type>
HashEntry<Type> Node<Type>::getHashEntry()
{
    return this->H;
}

template <typename Type>
void Node<Type>::setHashEntry(HashEntry<Type> H)
{
    this->H = H;
}

template <typename Type>
Node<Type>::Node(HashEntry<Type> h)
{
    this->H = h;
    this->next = nullptr;
    this->previos = nullptr;
}