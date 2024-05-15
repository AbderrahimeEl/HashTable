#include "../include/node.hpp"

HashEntry Node::getHashEntry()
{
    return this->H;
}
void Node::setHashEntry(HashEntry H)
{
    this->H = H;
}

Node::Node(HashEntry h)
{
    this->H = h;
    this->next = nullptr;
    this->previos = nullptr;
}

