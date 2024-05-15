#include <iostream>
using namespace std;
#include "../include/hashEntry.hpp"
#include "../include/hashTable.hpp"


int main()
{
    HashTable ht(10);
    ht.ht_insert(5, 100);
    ht.ht_insert(15, 200);
    ht.ht_insert(22, 200);
    ht.ht_insert(23, 2220);
    ht.ht_insert(21, 220);
    ht.ht_insert(20, 400);
    cout << "Hash Table:" << endl;
    ht.display();
    return 0;
}
