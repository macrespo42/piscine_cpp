#include "Array.hpp"

template<typename T>
Array<T>::Array(void) : _size(0) {
    this->_array = new T[this->_size];
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n) {
    T *tmp = new T();
    this->_array = new T[this->_size];
    for (int i(0); i < this->_size; i++)
        this->_array[i] = tmp;
    delete tmp;
}

template<typename T>
Array<T>::Array(Array const& src) {
    *this = src;
}

template<typename T>
Array<T>::~Array(void) {
    delete [] this->_array;
}

template<typename T>
Array<T> & Array<T>::operator=(Array const& src) {
    this->_array = src._array;
    this->_size = src._size;
    for (int i(0); i < this->_size; i++)
        this->_array[i] = src._array[i];
}

template<typename T>
T& Array<T>::operator[](int index) {
    if (index < 0 || index > this->_size)
        throw std::out_of_range ("Index out of range");
    return this->_array[index];
}

template<typename T>
unsigned int Array<T>::size(void) const {
    return this->_size;
}