#include "replace.hpp"

std::string replaceLine(char *s1, char *s2, std::string& line) {
    std::size_t s1_len(0);
    std::size_t occ_pos = line.find(s1, 0);

    for (int i(0); s1[i]; i++)
        s1_len++;
    while (occ_pos!=std::string::npos) {
        line.replace(occ_pos, s1_len, s2);
        int tmp = occ_pos;
        occ_pos = line.find(s1, tmp);
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
        std::stringstream fileName;
        fileName << av[1];
        fileName << ".replace";
        std::ofstream replacedFile(fileName.str().c_str());
        if (replacedFile) {
            std::ifstream originalFile(av[1]);
            if (originalFile) {
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
    return 0;
}