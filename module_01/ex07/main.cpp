#include "replace.hpp"

int error_return(std::string error_msg)
{
    std::cout << error_msg << std::endl; 
    return 1;
}

std::string getFilename(char *name)
{
    std::stringstream filename;

    for (int i(0); name[i]; i++)
        name[i] = std::toupper(name[i]);
    filename << name;
    filename << ".replace";
    return filename.str();
}

int replace(char **av)
{
    std::ifstream file(av[1]);
    std::stringstream replaced;

    if (file)
    {
        std::string word;
        while (file >> word)
        {
            if (word == av[2])
                word = av[3];
            replaced << word << " ";
        }
    }
    else
    {
        return error_return("Error: can't open the file in read mode");
    }
    std::string const fileName(getFilename(av[1]));
    std::ofstream myFile(fileName.c_str());
    if (myFile)
        myFile << replaced.str();
    else
        return error_return("Error can't write in the replace file");
    return 0;
}

int main(int ac, char **av)
{
    int ret(1);
    if (ac == 4)
    {
        ret = replace(av);
    }
    else
        return error_return("Error: bad arguments");
    return ret;
}