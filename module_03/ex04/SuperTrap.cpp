#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) : ClapTrap(100, 100, 120, 120, 1, "S4P3R-TP", 60, 20, 5), FragTrap(), NinjaTrap()
{
    std::cout << "SUPER TRAP CREATED" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(100, 100, 120, 120, 1, name, 60, 20, 5), FragTrap(name), NinjaTrap(name)
{
    std::cout << "SUPER TRAP CREATED" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
    std::cout << "SUPER TRAP DEAD" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const& src)
{
	std::cout << "SUPER TRAP CREATED" << std::endl;
	*this = src;
}

void SuperTrap::rangedAttack(std::string const& target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const& target)
{
	NinjaTrap::meleeAttack(target);
}

SuperTrap & SuperTrap::operator=(SuperTrap const& src) {
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