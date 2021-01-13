#include "Convert.hpp"

int main(int ac, char **av) {
    if (ac == 2) {
        Convert nb(static_cast<std::string>(av[1]));
        nb.printToChar();
        nb.printToInt();
        nb.printToFloat();
        nb.printToDouble();
    }
    else
        std::cerr << "Error <bad numbers of arguments>" << std::endl;
    return 0;
}