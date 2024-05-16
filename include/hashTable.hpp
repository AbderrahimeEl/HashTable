#ifndef HASHTABLE_HPP
#define HASHTABLE_HPP

#include "linkedList.hpp"

template <typename Type>
class HashTable
{
    linkedList<Type> *t;
    int T_S;
    int count;

public:
    HashTable(int ts);
    int hash_function(int k);
    void ht_insert(int k, Type v);
    HashEntry<Type> *ht_get(int k);
    void ht_delete(int k);
    void ht_clear();
    void display();
};

#include "../src/hashTable.tpp"

#endif // HASHTABLE_HPP