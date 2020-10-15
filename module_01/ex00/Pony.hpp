#ifndef DEF_PONY
#define DEF_PONY

#include <iostream>
#include <string>

class Pony
{
    public:

    Pony(std::string const color, std::string const name, int age);
    ~Pony();
    void    neigh(void) const;

    private:

    std::string const       _color;
    std::string const       _name;
    int                     _age;
};

#endif