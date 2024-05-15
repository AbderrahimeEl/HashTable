#include "../include/hashTable.hpp"
#include "hashTable.hpp"

HashTable::HashTable(int ts)
{
    this->t = new linkedList[ts];
    this->T_S = ts;
}


int HashTable::hash_function(int k)
{
    return k % T_S;
}

void HashTable::ht_insert(int k, int v)
{
    HashEntry item(k, v);
    Node *N = new Node(item);
    int index = hash_function(k);
    this->t[index].insertNode(N);
}

void HashTable::display()
{
    for (int i = 0; i < T_S; i++)
    {
        if (this->t[i].head != nullptr)
        {
            cout <<"index = "<<i;
            t[i].display();
            cout << endl;
        }
    }
}