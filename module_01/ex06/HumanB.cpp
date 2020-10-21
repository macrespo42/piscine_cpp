#include "HumanB.hpp"

HumanB::HumanB(std::string const name) : _name(name)
{

}

void HumanB::attack(void) const
{
    std::stringstream attack_quote;

    attack_quote << this->_name;
    attack_quote << " attacks with his ";
    attack_quote << this->_weapon->getType();
    std::cout << attack_quote.str() << std::endl; 
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}