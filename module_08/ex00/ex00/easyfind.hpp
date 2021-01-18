#ifndef EASYFIND
#define EASYFIND

#include <algorithm>
#include <string>
#include <iostream>
#include <exception>

template <typename T>
int easyfind(T const& container, int const toFind) {
    typename T::const_iterator it;

    it = std::find(container.begin(), container.end(), toFind);
    if (it == container.end())
        throw std::runtime_error("Error no occurences found in container");
    return *it;
}

#endif