#include <iostream>
using namespace std;

class HashEntry
{
    int k;
    int v;

public:
    HashEntry(int k, int v);
    int getKey() { return k; }
    int getValue() { return v; }
};

HashEntry::HashEntry(int k, int v)
{
    this->k = k;
    this->v = v;
}

class HashTable
{
    HashEntry **t;
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

HashTable::HashTable(int ts)
{
    T_S = ts;
    t = new HashEntry *[T_S];
    for (int i = 0; i < T_S; i++)
        t[i] = NULL;
}

int HashTable::hash_function(int k)
{
    return k % T_S;
}

void HashTable::ht_insert(int k, int v)
{
    HashEntry *item = new HashEntry(k, v);
    int index = hash_function(k);
    HashEntry *current_item = this->t[index];
    if (current_item == NULL)
    {
        this->t[index] = item;
    }
}

HashEntry *HashTable::ht_get(int k)
{
    int index = hash_function(k);
    if (t[index] != NULL && t[index]->getKey() == k)
    {
        return t[index];
    }
    else
    {
        cout << "Key not found" << endl;
        return NULL;
    }
}

void HashTable::ht_delete(int k)
{
    int index = hash_function(k);
    if (t[index] != NULL && t[index]->getKey() == k)
    {
        delete (t[index]);
    }
    else
    {
        cout << "Key not found" << endl;
    }
}
void HashTable::ht_clear()
{
    for (int i = 0; i < T_S; i++)
    {
        delete (t[i]);
    }
    T_S = 0;
}

void HashTable::display()
{
    for (int i = 0; i < T_S; i++)
    {
        if (t[i] != NULL)
        {
            cout << "Index " << i << ": ";
            cout << "Key: " << t[i]->getKey() << ", Value: " << t[i]->getValue() << endl;
        }
    }
}

int main()
{
    HashTable ht(10);
    ht.ht_insert(5, 100);
    ht.ht_insert(8, 200);
    ht.ht_insert(2, 300);
    ht.ht_insert(3, 400);
    ht.ht_insert(4, 500);
    ht.ht_insert(33, 600);

    cout << "Hash Table:" << endl;
    ht.display();

    cout << "Search for key 5:" << endl;
    HashEntry *he = ht.ht_get(5);
    cout << he->getKey();
    ht.ht_clear();
    ht.display();
    return 0;
}