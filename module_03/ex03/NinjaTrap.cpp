#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap(60, 60, 120, 120, 1, "N3J4", 60, 5, 0)
{
    std::cout << "Bonjour, je suis votre nouveau robot Ninja. Nom : " << this->_name << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0)
{
    std::cout << "Bonjour, je suis votre nouveau robot Ninja. Nom : " << this->_name << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src)
{
    std::cout << "Bonjour, je suis votre nouveau robot Ninja. Nom : " << this->_name << std::endl;
    *this = src;
}

NinjaTrap::~NinjaTrap(void)
{
    std::cout << "YAAAAAAAAA le ninja " << this->_name << " Disparais dans l'ombre..." << std::endl;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & src)
{
    this->_hitPoints = src._hitPoints;
    this->_maxHitPoints = src._maxHitPoints;
    this->_energyPoints = src._energyPoints;
    this->_maxEnergyPoints = src._maxEnergyPoints;
    this->_level = src._level;
    this->_name = src._name;
    this->_meleeAttackDamages = src._meleeAttackDamages;
    this->_rangedAttackDamages = src._rangedAttackDamages;
    this->_armorDamageReduction = src._armorDamageReduction;
    return *this;
}