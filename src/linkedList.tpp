#include "../include/linkedList.hpp"

template <typename Type>
linkedList<Type>::linkedList()
{
    this->head = nullptr;
    this->tail = nullptr;
    this->size = 0;
}

template <typename Type>
void linkedList<Type>::insertNode(Node<Type> *node)
{
    if (this->size == 0)
    {
        this->head = node;
        this->tail = node;
        this->size++;
        return;
    }
    Node<Type> *temp = this->head;

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
    Node<Type> *temp2 = temp->next;
    while (temp->next != nullptr)
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
        if (temp != nullptr)
            temp2 = temp->next;
    }
}

template <typename Type>
void linkedList<Type>::display()
{
    Node<Type> *temp;
    temp = this->head;
    std::printf("\tsize = %d\telements: ", this->size);
    while (temp != nullptr)
    {
        std::cout<<"("<<temp->getHashEntry().getKey()<<" , "<< temp->getHashEntry().getValue()<<") ";
        temp = temp->next;
    }
}