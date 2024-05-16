#include "../include/hashTable.hpp"

template <typename Type>
HashTable<Type>::HashTable(int ts)
{
    this->t = new linkedList<Type>[ts];
    this->T_S = ts;
}

template <typename Type>
int HashTable<Type>::hash_function(int k)
{
    return k % T_S;
}

template <typename Type>
void HashTable<Type>::ht_insert(int k, Type v)
{
    HashEntry<Type> item(k, v);
    Node<Type> *N = new Node<Type>(item);
    int index = hash_function(k);
    this->t[index].insertNode(N);
}

template <typename Type>
void HashTable<Type>::display()
{
    for (int i = 0; i < T_S; i++)
    {
        if (this->t[i].head != nullptr)
        {
            std::cout << "index = " << i;
            t[i].display();
            std::cout << std::endl;
        }
    }
}