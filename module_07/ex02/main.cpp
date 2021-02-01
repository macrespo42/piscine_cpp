#include "Array.hpp"

int main(void) {

    Array<int> test;
    Array<char> test2(43);
    Array<std::string> test3(1000);
    Array<char> truc = test2;

    std::cout << "Size of array of char test 2:" <<test2.size() << std::endl;
    std::cout << "value of index 40 of test 2:" <<test2[40] << std::endl;
    try {
        std::cout << "value of index 45993383 of test 2:" <<test2[45993383] << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what();
    }
    return 0;
}