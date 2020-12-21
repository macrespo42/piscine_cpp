#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Daddy")
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
    this->_maxEnergyPoint = src._maxEnergyPoint;
    this->_level = src._level;
    this->_name = src._name;
    this->_meleeAttackDamages = src._meleeAttackDamages;
    this->_rangedAttackDamages = src._rangedAttackDamages;
    this->_armorDamageReduction = src._armorDamageReduction;
    return *this;
}

void FragTrap::rangedAttack(std::string const& target) {
    std::cout << "FR4G-TP "<< this->_name <<" attaque " << target << " à distance, causant "<< this->_rangedAttackDamages <<" points de dégâts" << std::endl;
}

void FragTrap::meleeAttack(std::string const& target) {
    std::cout << "FR4G-TP "<< this->_name <<" attaque " << target << " au corps à corps, causant "<< this->_rangedAttackDamages <<" points de dégâts" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
    if (amount > this->_armorDamageReduction) {
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

void FragTrap::beRepaired(unsigned int amount) {
        this->_hitPoints += amount;
        if (this->_hitPoints > this->_maxHitPoints)
            this->_hitPoints = this->_maxHitPoints;
        std::cout << "FR4G-TP " << this->_name << " se soigne, il a maintenant " << this->_hitPoints << " HP" << std::endl;
}