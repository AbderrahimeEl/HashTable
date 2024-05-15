#include "../include/hashEntry.hpp"

HashEntry::HashEntry(int k, int v)
{
    this->k = k;
    this->v = v;
}

HashEntry::HashEntry()
{
}

int HashEntry::getKey() { return k; }
int HashEntry::getValue() { return v; }