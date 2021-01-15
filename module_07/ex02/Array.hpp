#ifndef ARRAY
#define ARRAY

#include <iostream>
#include <string>
#include <exception>

template< typename T >
class Array {
    public:
        Array(void);
        Array(unsigned int n);
        Array(Array const& src);
        ~Array(void);
        Array & operator=(Array const& src);
        unsigned int size(void) const;
        T& operator[](int index);

    private:
        T *_array;
        unsigned int _size;
};

#endif