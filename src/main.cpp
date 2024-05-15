#include <iostream>
using namespace std;
#include "../include/hashEntry.hpp"
#include "../include/hashTable.hpp"


int main()
{
    HashTable ht(10);
    ht.ht_insert(10, 100);
    ht.ht_insert(23, 200);
    ht.ht_insert(11, 200);
    ht.ht_insert(90, 2220);
    ht.ht_insert(91, 220);
    ht.ht_insert(20, 400);
    ht.ht_insert(33, 400);
    ht.ht_insert(63, 400);
    ht.ht_insert(55, 20);
    ht.ht_insert(59, 20);
    cout << "Hash Table:" << endl;
    ht.display();
    return 0;
}
