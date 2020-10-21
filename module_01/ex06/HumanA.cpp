#include "HumanA.hpp"

HumanA::HumanA(std::string const name, Weapon& weapon) : _name(name), _weapon(weapon)
{

}

void HumanA::attack(void) const
{
    std::stringstream attack_quote;

    attack_quote << this->_name;
    attack_quote << " attacks with his ";
    attack_quote << this->_weapon.getType();
    std::cout << attack_quote.str() << std::endl; 
}