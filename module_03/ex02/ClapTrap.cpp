#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _name("Daddy") ,_meleeAttackDamages(20), _rangedAttackDamages(10), _armorDamageReduction(5)
{
    srand(time(0));
    std::cout << "Bonjour, je suis votre nouveau robot. Nom : " << this->_name <<". Robot d'Hyperion classe C." << std::endl;
}

ClapTrap::ClapTrap(int const hitPoints, int const maxHitPoints, int const energyPoints, int const maxEnergyPoints,
     int const level, std::string name, int const meleeAttackDamages, int const rangedAttackDamages,
     int const armorDamageReduction) : _hitPoints(hitPoints), _maxHitPoints(maxHitPoints), _energyPoints(energyPoints),
                                       _maxEnergyPoints(maxEnergyPoints), _level(level), _name(name),
                                       _meleeAttackDamages(meleeAttackDamages), _rangedAttackDamages(rangedAttackDamages),
                                       _armorDamageReduction(armorDamageReduction)
{
    srand(time(0));
    std::cout << "Bonjour, je suis votre nouveau robot. Nom : " << this->_name <<". Robot d'Hyperion classe C." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    srand(time(0));
    std::cout << "Bonjour, je suis votre nouveau robot. Nom : " << this->_name <<". Robot d'Hyperion classe C." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src)
{
    srand(time(0));
    *this = src;
    std::cout << "Bonjour, je suis votre nouveau robot. Nom : " << this->_name <<". Robot d'Hyperion classe C." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Papa robot est mort :(" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& src)
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

void ClapTrap::rangedAttack(std::string const& target) {
    std::cout << "FR4G-TP "<< this->_name <<" attaque " << target << " à distance, causant "<< this->_rangedAttackDamages <<" points de dégâts" << std::endl;
}

void ClapTrap::meleeAttack(std::string const& target) {
    std::cout << "FR4G-TP "<< this->_name <<" attaque " << target << " au corps à corps, causant "<< this->_rangedAttackDamages <<" points de dégâts" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if ((int)amount > this->_armorDamageReduction) {
        this->_hitPoints -= (amount - this->_armorDamageReduction);
        if (this->_hitPoints <= 0) {
            this->_hitPoints = 0;
            std::cout << "FR4G-TP " << this->_name << " est mort..." << std::endl;
        }
        else
            std::cout << "FR4G-TP " << this->_name << " prend cher! Il lui reste " << this->_hitPoints << " HP" << std::endl;
    }
    else
        std::cout << "FR4G-TP " << this->_name << " est trop résistant il ne prend aucun dégâts" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
        this->_hitPoints += amount;
        if (this->_hitPoints > this->_maxHitPoints)
            this->_hitPoints = this->_maxHitPoints;
        std::cout << "FR4G-TP " << this->_name << " se soigne, il a maintenant " << this->_hitPoints << " HP" << std::endl;
}