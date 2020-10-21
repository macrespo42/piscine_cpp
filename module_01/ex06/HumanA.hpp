#ifndef DEF_HUMANA
#define DEF_HUMANA

#include "Weapon.hpp"
#include <iostream>
#include <string>
#include <sstream>

class HumanA
{
    public:

    HumanA(std::string const name, Weapon& weapon);
    void attack(void) const;

    private:

    std::string const _name;
    Weapon& _weapon;
};

#endif