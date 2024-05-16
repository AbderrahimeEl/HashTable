#ifndef NODE_HPP
#define NODE_HPP

#include "hashEntry.hpp"

template <typename Type>
class Node
{
    HashEntry<Type> H;

public:
    Node *next;
    Node *previos;
    Node(HashEntry<Type> h);
    HashEntry<Type> getHashEntry();
    void setHashEntry(HashEntry<Type> H);
};

#include "../src/node.tpp"

#endif // NODE_HPP