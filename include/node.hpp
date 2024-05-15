#ifndef NODE_HPP
#define NODE_HPP
#include "hashEntry.hpp"

class Node
{
    HashEntry H;
public:
    Node *next;
    Node *previos;
    Node(HashEntry h);
    HashEntry getHashEntry();
    void setHashEntry(HashEntry H);

public:
};

#endif
