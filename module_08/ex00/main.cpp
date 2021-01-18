#include <iostream>
#include <list>
#include <vector>
#include "easyfind.hpp"

int main(void) {
    std::list<int> lst1;

    lst1.push_back(1);
    lst1.push_back(42);
    lst1.push_back(3);
    lst1.push_back(8);

    try {
        std::cout << "lst find 8 : " << easyfind(lst1, 8) << std::endl;
        std::cout << "lst find 42 : " << easyfind(lst1, 42) << std::endl;
        std::cout << "lst find 31 : " << easyfind(lst1, 12345) << std::endl;
    }
    catch (std::exception const& e) {
        std::cout << e.what() << std::endl;
    }

    std::vector<int> lst2;

    lst2.push_back(1);
    lst2.push_back(42);
    lst2.push_back(3);
    lst2.push_back(3);

    try {
        std::cout << "vector find 42 : " << easyfind(lst2, 42) << std::endl;
        std::cout << "vector find 31 : " << easyfind(lst2, 3) << std::endl;
        std::cout << "vector find 8 : " << easyfind(lst2, 8) << std::endl;
    }
    catch (std::exception const& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}