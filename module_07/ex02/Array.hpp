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

        Array<T> & operator=(Array const& src) {
            this->_array = new T[src._size];
            this->_size = src._size;
            for (unsigned int i(0); i < this->_size; i++)
                this->_array[i] = src._array[i];
            return *this;
        }

        Array(Array const& src) {
            this->_array = new T[src._size];
            this->_size = src._size;
            for (unsigned int i(0); i < this->_size; i++)
                this->_array[i] = src._array[i];
        }

        ~Array(void) {
            delete [] this->_array;
        }


        unsigned int size(void) const {
            return this->_size;
        }

        T& operator[](int index) {
            try {
                if (index < 0 || index > static_cast<int>(this->_size))
                throw std::out_of_range (" Index out of range"); 
                return this->_array[index];
            }
            catch (std::exception& e) {
                std::cerr << e.what() << std::endl;
            }
            return this->_array[0];
        }

    private:
        T *_array;
        unsigned int _size;
};

#endif