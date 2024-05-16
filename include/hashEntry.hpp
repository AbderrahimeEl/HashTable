#ifndef HASHENTRY_HPP
#define HASHENTRY_HPP

template <typename Type>
class HashEntry
{
    int k;
    Type v;

public:
    HashEntry(int k, Type v);
    HashEntry();
    int getKey();
    Type getValue();
};

#include "../src/hashEntry.tpp"

#endif // HASHENTRY_HPP