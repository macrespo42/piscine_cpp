#ifndef DEF_ZOMBIE
#define DEF_ZOMBIE

#include <iostream>
#include <string>

class Zombie
{
    public:

    Zombie(void);
    Zombie(std::string const name, std::string const type);
    ~Zombie();
    void    advert(void) const;
    void    setName(std::string const name);
    void    setType(std::string const type);

    private:

    std::string     _name;
    std::string     _type;
};

#endif