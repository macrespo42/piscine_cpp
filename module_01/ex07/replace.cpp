#include "replace.hpp"

std::string replaceLine(char *from, char *to, std::string& line) {
    
    size_t occ_pos(0);
    size_t fromLen(0);
    size_t toLen(0);

    for (int i(0); from[i] ;i++)
        fromLen++;
    for (int i(0); to[i] ;i++)
        toLen++;
    while((occ_pos = line.find(from, occ_pos)) != std::string::npos) {
        line.replace(occ_pos, fromLen, to);
        occ_pos += toLen;
    }
    return line;
}

int     count_line(char *fileName) {
    std::ifstream file(fileName);
    int numbersOfLines(0);
    std::string line;
    while (getline(file, line)) {
        numbersOfLines++;
    }
    return (numbersOfLines);
}

int     main(int ac, char **av) {
    if (ac == 4) {
        std::ifstream originalFile(av[1]);
        if (originalFile) {
            std::stringstream fileName;
            fileName << av[1];
            fileName << ".replace";
            std::ifstream exist(av[1]);
            std::ofstream replacedFile(fileName.str().c_str());
            if (replacedFile) {
                int numberOfLines = count_line(av[1]);
                int i(0);
                std::string line;
                while (getline(originalFile, line)) {
                    line = replaceLine(av[2], av[3], line);
                    replacedFile << line;
                    if (i < numberOfLines - 1)
                        replacedFile << std::endl;
                    i++;
                }
            }
            else {
                std::cout << "Error when trying to create " << fileName.str() << std::endl;
                return 1;
            }
        }
        else {
            std::cout << "Error when trying to open" << av[1] << std::endl;
            return 1;
        }
    } else {
        std::cout << "Bad arguments" << std::endl;
    }
    return 0;
}