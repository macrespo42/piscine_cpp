#include "Convert.hpp"

int main(int ac, char **av) {
    if (ac == 2) {
        Convert nb(static_cast<std::string>(av[1]));
    }
    else
        std::cerr << "Error <bad numbers of arguments>" << std::endl;
    return 0;
}