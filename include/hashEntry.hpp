#ifndef HASHENTRY_HPP
#define HASHENTRY_HPP
#include <iostream>
using namespace std;

class HashEntry
{
    int k;
    int v;

public:
    HashEntry(int k, int v);
    HashEntry();
    int getKey();
    int getValue();
};

#endif