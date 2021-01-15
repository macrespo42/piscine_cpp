#include "Array.hpp"

int main(void) {

    Array<int> test;
    Array<char> test2(43);
    Array<std::string> test3(1000);
    Array<char> truc = test2;
    truc[2] = 'S';

    std::cout << "Size of array of char test 2:" <<test2.size() << std::endl;
    std::cout << "value of index 40 of test 2:" <<test2[40] << std::endl;
    std::cout << "Test no change in main array:" << test2[2] << std::endl;
    // std::cout << "Test exeption out of range (test):" << test[2] << std::endl; // does not compile (normal)
    return 0;
}