#ifndef WHATEVER
#define WHATEVER

#include <iostream>

template< typename T >
void swap(T & a, T & b) {
    T tmp(a);
    a = b;
    b = tmp;
}

template< typename T >
T const& max(T const& a, T const& b) {
    return a < b ? b : a;
}

template< typename T >
T const& min(T const& a, T const& b) {
    return a < b ? a : b;
}

#endif