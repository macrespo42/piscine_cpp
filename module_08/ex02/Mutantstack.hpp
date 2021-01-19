#ifndef MUTANTSTACK
#define MUTANTSTACK

#include <iostream>
#include <vector>
#include <stack>

template <typename T>
class Mutantstack : public std::stack<T> {

    public:
        Mutantstack(void) : std::stack<T>() {};
        Mutantstack(Mutantstack const& src) : std::stack<T>(src) {};
        virtual ~Mutantstack(void) {};
        Mutantstack & operator=(Mutantstack const& src) {this->c = src.c; return *this;};
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() { return std::begin(this->c); }
        iterator end() { return std::end(this->c); }
};

#endif