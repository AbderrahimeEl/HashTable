#include "../include/hashEntry.hpp"

template <typename Type>
HashEntry<Type>::HashEntry(int k, Type v)
{
    this->k = k;
    this->v = v;
}

template <typename Type>
HashEntry<Type>::HashEntry()
{
}

template <typename Type>
int HashEntry<Type>::getKey()
{
    return this->k;
}

template <typename Type>
Type HashEntry<Type>::getValue()
{
    return this->v;
}