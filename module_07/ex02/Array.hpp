#ifndef ARRAY
#define ARRAY

#include <iostream>
#include <string>
#include <exception>

template< typename T >
class Array {
    public:
        Array(void) : _size(0) {
            this->_array = new T[this->_size];
        }

        Array(unsigned int n) : _size(n) {
            T *tmp = new T();
            this->_array = new T[this->_size];
            for (unsigned int i(0); i < this->_size; i++)
                this->_array[i] = *tmp;
            delete tmp;
        }

        Array(Array const& src) {
            *this = src;
        }

        ~Array(void) {
            delete [] this->_array;
        }

        Array<T> & operator=(Array const& src) {
            this->_array = src._array;
            this->_size = src._size;
            for (unsigned int i(0); i < this->_size; i++)
                this->_array[i] = src._array[i];
        }

        unsigned int size(void) const {
            return this->_size;
        }

        T& operator[](int index) {
            if (index < 0 || index > this->_size)
                throw std::out_of_range ("Index out of range"); 
            return this->_array[index];
        }

    private:
        T *_array;
        unsigned int _size;
};

#endif