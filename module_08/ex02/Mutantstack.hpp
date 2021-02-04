#ifndef MUTANTSTACK
#define MUTANTSTACK

#include <iostream>
#include <vector>
#include <stack>

template<typename T, typename Container = std::deque<T> >
class Mutantstack : public std::stack<T> {

    public:
        Mutantstack(void) : std::stack<T>() {};
        Mutantstack(Mutantstack const& src) : std::stack<T>(src) {};
        virtual ~Mutantstack(void) {};
        Mutantstack & operator=(Mutantstack const& src) {this->c = src.c; return *this;};

        typedef typename Container::iterator iterator;
        typedef typename Container::const_iterator const_iterator;
        typedef typename Container::reverse_iterator reverse_iterator;
        typedef typename Container::const_reverse_iterator const_reverse_iterator;

        iterator begin() {return this->c.begin();}
        iterator end() {return this->c.end();}
        const_iterator begin() const {return this->c.begin();}
        const_iterator end() const {return this->c.end();}
        reverse_iterator rbegin() {return this->c.rbegin();}
        reverse_iterator rend() {return this->c.rend();}
        const_reverse_iterator rbegin() const {return this->c.rbegin();}
        const_reverse_iterator rend() const {return this->c.rend();}
};

#endif