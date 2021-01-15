#ifndef ITER
#define ITER

#include <iostream>

template< typename T>
void iter(T *array, int size, void (*ptr)(T & element)) {
    for (int i(0); i  < size; i++) {
        (ptr)(array[i]);
    }
}

template< typename T>
void print(T element) {
    std::cout << element << std::endl;
}

#endif
