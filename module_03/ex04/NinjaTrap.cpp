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

void NinjaTrap::ninjaShoebox(ClapTrap const & target) {
    (void)target;
    if (this->_energyPoints >= 25) {
        this->_energyPoints -=25;
        std::cout << this->_name << " S'attaque à sont maitre, il rate et disparais dans un fumigene..." << std::endl;
    }
    else
        std::cout << this->_name << " N'a pas assez d'energie pour lancer cette attaque...";
}

void NinjaTrap::ninjaShoebox(NinjaTrap const & target) {
    (void)target;
    if (this->_energyPoints >= 25) {
        this->_energyPoints -=25;
        std::cout << this->_name << " S'attaque à l'un des sien, ils sont si rapide qu'on ne sais pas qui gagne" << std::endl;
    }
    else
        std::cout << this->_name << " N'a pas assez d'energie pour lancer cette attaque...";
}

void NinjaTrap::ninjaShoebox(FragTrap const & target) {
    (void)target;
    if (this->_energyPoints >= 25) {
        this->_energyPoints -=25;
        std::cout << this->_name << " S'attaque à un FragTrap, coup critique ! Il lui a refait une coupe !" << std::endl;
    }
    else
        std::cout << this->_name << " N'a pas assez d'energie pour lancer cette attaque...";
}

void NinjaTrap::ninjaShoebox(ScavTrap const & target) {
    (void)target;
    if (this->_energyPoints >= 25) {
        this->_energyPoints -=25;
        std::cout << this->_name << " S'attaque à un ScavTrap, coup critique ! OUAH c'est presque un one shot !" << std::endl;
    }
    else
        std::cout << this->_name << " N'a pas assez d'energie pour lancer cette attaque...";
}
