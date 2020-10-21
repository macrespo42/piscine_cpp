#ifndef DEF_HUMANB
#define DEF_HUMANB

#include "Weapon.hpp"
#include <iostream>
#include <string>
#include <sstream>

class HumanB
{
    public:

    HumanB(std::string const name);
    void attack(void) const;
    void setWeapon(Weapon &weapon);

    private:

    std::string const _name;
    Weapon* _weapon;
};

#endif