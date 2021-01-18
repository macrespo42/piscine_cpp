#ifndef SPAN
#define SPAN

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

class Span {

    public:
        Span(unsigned int size_max);
        Span(Span const& src);
        ~Span(void);
        Span & operator=(Span const& src);
        void addNumber(int nb);
        int longestSpan(void) const;
        int shortestSpan(void) const;

    private:
        Span(void);
        unsigned int _size_max;
        std::vector<int> _values;
};

#endif