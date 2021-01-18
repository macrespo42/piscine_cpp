#include "Span.hpp"

Span::Span(unsigned int size_max) : _size_max(size_max) {}

Span::Span(Span const& src) {
    *this = src;
}

Span::~Span(void) {}

Span & Span::operator=(Span const& src) {
    this->_size_max = src._size_max;
    this->_values = src._values;
    return *this;
}

void Span::addNumber(int nb) {
    if (this->_values.size() >= this->_size_max)
        throw std::length_error("Max numbers of values already reached");
    else
        this->_values.push_back(nb);
}

int Span::longestSpan(void) const {
    if (this->_values.size() <= 1) {
        throw std::length_error("No enough values to get span");
    }
    int max = 0;
    int min = this->_values.front();
    for (std::size_t i = 0; i < this->_values.size(); i++) {
        if (this->_values[i] > max)
            max = this->_values[i];
        if (this->_values[i] < min)
            min = this->_values[i];
    }
    return max - min;
}