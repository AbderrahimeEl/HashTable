# Hash Table Implementation in C++

This repository contains an implementation of a hash table data structure in C++.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

A hash table is a data structure that provides efficient storage and retrieval of key-value pairs. This implementation of a hash table in C++ includes the following components:

1. `HashEntry` class: Represents a key-value pair stored in the hash table.
2. `HashTable` class: Manages the hash table, including methods for insertion, retrieval, deletion, and display of the stored entries.
3. `main()` function: Demonstrates the usage of the hash table by performing various operations.

## Features

The hash table implementation in this repository provides the following features:

1. **Insertion**: Ability to insert key-value pairs into the hash table.
2. **Retrieval**: Ability to retrieve the value associated with a given key.
3. **Deletion**: Ability to delete a key-value pair from the hash table.
4. **Clearing**: Ability to clear all entries from the hash table.
5. **Display**: Ability to display the contents of the hash table.

## Usage

To use the hash table implementation, follow these steps:

1. Include the necessary header files in your C++ source file.
2. Create an instance of the `HashTable` class and perform the desired operations, such as insertion, retrieval, deletion, and display.
3. The `main()` function provided in the example demonstrates the usage of the hash table.

Here's an example usage:

```cpp
HashTable ht(10);
ht.ht_insert(5, 100);
ht.ht_insert(8, 200);
ht.display();

HashEntry* entry = ht.ht_get(5);
if (entry != nullptr) {
    cout << "Key: " << entry->getKey() << ", Value: " << entry->getValue() << endl;
}

ht.ht_delete(8);
ht.display();
```
