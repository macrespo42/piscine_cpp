#ifndef DEF_ZOMBIE
#define DEF_ZOMBIE

#include <iostream>
#include <string>

class Zombie
{
    public:

    Zombie(std::string const name, std::string const type);
    ~Zombie();
    void    advert(void) const;

    private:

    std::string const     _name;
    std::string const     _type;
};

#endif