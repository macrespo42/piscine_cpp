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
    if (this->_values.size() <= 1)
        throw std::length_error("No enough values to get span");
    int max = *std::max_element(this->_values.begin(), this->_values.end());
    int min = *std::min_element(this->_values.begin(), this->_values.end());
    return max - min;
}

int Span::shortestSpan(void) const {
    if (this->_values.size() <= 1)
        throw std::length_error("No enough values to get span");
    std::vector<int> cpy = this->_values;
    std::sort(cpy.begin(), cpy.end());
    int minSpan = cpy.at(1) - cpy.front();
    for (std::size_t i = 0; i < cpy.size() - 1; i++) {
        if ((cpy.at(i + 1) - cpy.at(i) < minSpan))
            minSpan = cpy.at(i + 1) - cpy.at(i);
    }
    return minSpan;
}

void Span::fill(void) {
    if (this->_size_max <= 0)
        throw std::length_error("No enough space in Object to fill");
    for (std::size_t i = 0; i < this->_size_max; i++) {
        this->_values.push_back(i);
    }
    // for (std::size_t i = 0; i < this->_size_max; i++) {
    //     std::cout << this->_values.at(i) << std::endl;
    // }
}