#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap(60, 60, 120, 120, 1, "N3J4", 60, 5, 0)
{
    std::cout << "Bonjour, je suis votre nouveau robot Ninja. Nom : " << this->_name << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0)
{
    std::cout << "Bonjour, je suis votre nouveau robot Ninja. Nom : " << this->_name << std::endl;
}

NinjaTrap(ClapTrap const & src) {
    std::cout << "Bonjour, je suis votre nouveau robot Ninja. Nom : " << this->_name << std::endl;
    *this = src;
}

~NinjaTrap(void) {
    std::cout << "YAAAAAAAAA le ninja " << this->_name << " Disparais dans l'ombre..." << std::endl;
}

NinjaTrap &operator=(ScavTrap const & src) {
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

void ninjaShoebox(ClapTrap const & target) {
    (void)target;
    if (this->_energyPoints > 25)
        std::cout << this->_name << " attaque sont maître, il se fait mal au bras ..." << std::endl;
    else
        std::cout << this->_name << " n'a pas assez d'energie pour lancer cette attaque" << std::endl;
}

void ninjaShoebox(FragTrap const & target) {
    (void)target;
    if (this->_energyPoints > 25)
        std::cout << this->_name << " attaque un FragTrap c'est un coup critique !" << std::endl;
    else
        std::cout << this->_name << " n'a pas assez d'energie pour lancer cette attaque" << std::endl;
}
void ninjaShoebox(ScavTrap const & target) {
        (void)target;
    if (this->_energyPoints > 25)
        std::cout << this->_name << " attaque sont un ScavTrap, pfiouuu c'est pas passez loin du one shot !" << std::endl;
    else
        std::cout << this->_name << " n'a pas assez d'energie pour lancer cette attaque" << std::endl;
}