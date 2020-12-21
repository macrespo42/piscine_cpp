#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(100, 100, 100, 100, 1, "S34B", 30, 20, 5)
{
    srand(time(0));
    std::cout << "Bonjour, je suis votre nouveau robot monofonction. Nom : " << this->_name <<". Robot d'Hyperion classe B. Pas de reglages disponibles. " << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5)
{
    srand(time(0));
    std::cout << "Bonjour, je suis votre nouveau robot monofonction. Nom : " << this->_name <<". Robot d'Hyperion classe B. Pas de reglages disponibles. " << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& src)
{
    srand(time(0));
    *this = src;
    std::cout << "Bonjour, je suis votre nouveau robot monofonction. Nom : " << this->_name <<". Robot d'Hyperion classe B. Pas de reglages disponibles. " << std::endl;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "Au revoir maître" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const& src) {
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
void ScavTrap::challengeNewcomer(void) {
    std::string const challenges[5] = {"Ce battre contre le covid", "Faire sourrir norminet", "Manger sain pendant 1 semaine", "Appeler son coiffeur", "Ouvrire une porte"};

    if (this->_energyPoints < 25) {
        std::cout << this->_name << " n'a pas assez d'energie pour effectuer une challenge" << std::endl;
        return ;
    }
    this->_energyPoints -= 25;

    std::cout << "SC4V-TP " << this->_name << "doit : " << challenges[rand() % 5] << std::endl;
}