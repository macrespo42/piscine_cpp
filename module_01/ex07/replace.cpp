#include "replace.hpp"

int     main(int ac, char **av) {
    (void)av;
    if (ac == 4) {
        std::stringstream fileName;
        fileName << av[1];
        fileName << ".replace";
        std::ofstream replacedFile(fileName.str().c_str());
        if (replacedFile) {
            std::ifstream originalFile(av[1]);
            if (originalFile) {
                std::cout << "OK." << std::endl;
            }
            else {
                std::cout << "Error when trying to open" << av[1] << std::endl;
                return 1;
            }
        }
        else {
            std::cout << "Error when trying to create " << fileName.str() << std::endl;
            return 1;
        }
    } else {
        std::cout << "Bad arguments" << std::endl;
    }
    // std::string base = "Hello world!";
    // base.replace(0, 5, "Bonjour");
    // std::cout << base << std::endl;
    return 0;
}