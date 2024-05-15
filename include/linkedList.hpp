#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include "node.hpp"

class linkedList
{
public:
    Node *head;
    Node *tail;
    int size;
    linkedList();
    void insertNode(Node *node);
    void display();
};
#endif