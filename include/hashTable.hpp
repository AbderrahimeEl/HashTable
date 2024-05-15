
#ifndef HASHTABLE_HPP
#define HASHTABLE_HPP

#include "linkedList.hpp"

class HashTable
{
    linkedList *t;
    int T_S;
    int count;

public:
    HashTable(int ts);
    int hash_function(int k);
    void ht_insert(int k, int v);
    HashEntry *ht_get(int k);
    void ht_delete(int k);
    void ht_clear();
    void display();
};

#endif