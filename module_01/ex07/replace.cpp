#include "replace.hpp"

int     main(int ac, char **av) {
    (void)av;
    if (ac == 4) {
        std::cout << "OK." << std::endl;
    } else {
        std::cout << "Bad arguments" << std::endl;
    } 
    return 0;
}