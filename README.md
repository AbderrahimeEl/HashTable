# Hash Table with Double Linked List Collision Handling

This project implements a hash table data structure that uses double linked lists to handle collisions. The hash table provides efficient key-value storage and retrieval operations with constant-time average-case performance. Additionally, the project uses templates for data types, allowing for flexible and type-safe storage of various data types.
<p align="center">
<img src="docs/shema.png" width="800" alt="Alt Text">
</p>

## Features

- **Hash Table Data Structure**: The hash table is implemented as an array of double linked lists, with each index in the array representing a "bucket" that can store multiple key-value pairs.
- **Hash Function**: A simple modulo-based hash function is used to map keys to indices within the hash table.
- **Double Linked List Nodes**: Each node in the linked list stores a key-value pair (represented by the `HashEntry` class) and maintains references to the previous and next nodes in the list.
- **Insertion, Lookup, and Deletion**: The hash table supports efficient insertion, lookup, and deletion of key-value pairs, with collisions handled by appending new entries to the linked list at each index.
- **Collision Handling**: When a collision occurs (i.e., two keys hash to the same index), the new entry is added to the linked list at that index, maintaining the list in sorted order based on the key.

## Usage

To use the hash table implementation, follow these steps:

1. Clone the ropo :
   ```bash
   git clone git@github.com:AbderrahimeEl/Hash-Table.git
   ```
2. Compile the progrum
   ```bash
   bash bash.sh
   ```
3. run
   ```bash
   ./bin/output
   ```

### example usage:

```cpp
HashTable<string> stringTable(10);
    stringTable.ht_insert(10, "hello");
    stringTable.ht_insert(23, "world");
    stringTable.ht_insert(23, "world");
    stringTable.ht_insert(25, "world");
    cout << "\n\nHash Table (string):\n" ;;
    stringTable.display();
```

### output : 
```
Hash Table (string):
index = 0       size = 1        elements: (10 , hello) 
index = 3       size = 2        elements: (23 , world) (23 , world) 
index = 5       size = 1        elements: (25 , world)
```
