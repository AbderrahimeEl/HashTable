#include <iostream>
#include <string>
#include "../include/hashEntry.hpp"
#include "../include/hashTable.hpp"

using namespace std;

int main() {
    // Hash table for integers
    HashTable<int> intTable(10);
    intTable.ht_insert(10, 42);
    intTable.ht_insert(23, 84);
    intTable.ht_insert(26, 84);
    intTable.ht_insert(23, 84);
    cout << "\n\nHash Table (int):" << endl;
    intTable.display();
    
    // Hash table for strings
    HashTable<string> stringTable(10);
    stringTable.ht_insert(10, "hello");
    stringTable.ht_insert(23, "world");
    stringTable.ht_insert(23, "world");
    stringTable.ht_insert(25, "world");
    cout << "\n\nHash Table (string):\n" ;;
    stringTable.display();

    // Hash table for characters
    HashTable<char> charTable(10);
    charTable.ht_insert(10, 'a');
    charTable.ht_insert(23, 'b');
    charTable.ht_insert(23, 'c');
    charTable.ht_insert(25, 'd');
    cout <<"\n\nHash Table (char):\n";
    charTable.display();

    return 0;
}
