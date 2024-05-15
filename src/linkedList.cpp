#include "../include/linkedList.hpp"

linkedList::linkedList()
{
    this->head = nullptr;
    this->tail = nullptr;
    this->size = 0;
}

void linkedList::insertNode(Node *node)
{
    if (this->size == 0)
    {
        this->head = node;
        this->tail = node;
        this->size++;
        return;
    }
    Node *temp = this->head;

    // start insertion
    if (temp->getHashEntry().getKey() >= node->getHashEntry().getKey())
    {
        this->head->previos = node;
        node->next = this->head;
        this->head = node;
        this->size++;
        return;
    }
    // end insertion
    temp = this->tail;
    if (this->tail->getHashEntry().getKey() <= node->getHashEntry().getKey())
    {
        this->tail->next = node;
        node->previos = this->tail;
        this->tail = node;
        this->size++;
        return;
    }
    // middle insertion
    temp = this->head;
    Node *temp2 = temp->next;
    while (temp->next != NULL)
    {
        if (temp->next->getHashEntry().getKey() >= node->getHashEntry().getKey())
        {
            node->previos = temp;
            temp->next = node;
            node->next = temp2;
            temp2->previos = node;
            this->size++;
            return;
        }
        temp = temp->next;
        if (temp != NULL)
            temp2 = temp->next;
    }
}

void linkedList::display()
{
    Node *temp;
    temp = this->head;
    printf("\tsize = %d\telemnets :", this->size);
    while (temp != NULL)
    {
        printf("(%d , %d)   ", temp->getHashEntry().getKey(), temp->getHashEntry().getValue());
        temp = temp->next;
    }
}