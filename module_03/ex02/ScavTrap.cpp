#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoint(50), _level(1), _name("C34A"), _meleeAttackDamages(20), _rangedAttackDamages(15), _armorDamageReduction(3)
{
    srand(time(0));
    std::cout << "Bonjour, je suis votre nouveau robot monofonction. Nom : " << this->_name <<". Robot d'Hyperion classe B. Pas de reglages disponibles. " << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoint(50), _level(1), _name(name), _meleeAttackDamages(20), _rangedAttackDamages(15), _armorDamageReduction(3)
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
    this->_maxEnergyPoint = src._maxEnergyPoint;
    this->_level = src._level;
    this->_name = src._name;
    this->_meleeAttackDamages = src._meleeAttackDamages;
    this->_rangedAttackDamages = src._rangedAttackDamages;
    this->_armorDamageReduction = src._armorDamageReduction;
    return *this;
}

void ScavTrap::rangedAttack(std::string const& target) {
    std::cout << "SC4V-TP "<< this->_name <<" attaque " << target << " à distance, causant "<< this->_rangedAttackDamages <<" points de dégâts" << std::endl;
}

void ScavTrap::meleeAttack(std::string const& target) {
    std::cout << "SC4V-TP "<< this->_name <<" attaque " << target << " au corps à corps, causant "<< this->_rangedAttackDamages <<" points de dégâts" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
    if (amount > this->_armorDamageReduction) {
        this->_hitPoints -= (amount - this->_armorDamageReduction);
        if (this->_hitPoints <= 0) {
            this->_hitPoints = 0;
            std::cout << "SC4V-TP " << this->_name << " est mort..." << std::endl;
        }
        else
            std::cout << "SC4V-TP " << this->_name << " prend cher! Il lui reste " << this->_hitPoints << " HP" << std::endl;
    }
    else
        std::cout << "SC4V-TP " << this->_name << " est trop résistant il ne prend aucun dégâts" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
        this->_hitPoints += amount;
        if (this->_hitPoints > 100)
            this->_hitPoints = 100;
        std::cout << "SC4V-TP " << this->_name << " se soigne, il a maintenant " << this->_hitPoints << " HP" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const& target) {
    std::string const challenges[5] = {"Ce battre contre le covid", "Faire sourrir norminet", "Manger sain pendant 1 semaine", "Appeler son coiffeur", "Ouvrire une porte"};

    if (this->_energyPoints < 25) {
        std::cout << this->_name << " n'a pas assez d'energie pour effectuer une challenge" << std::endl;
        return ;
    }
    this->_energyPoints -= 25;

    std::cout << "SC4V-TP " << this->_name << "doit : " << challenges[rand() % 5] << std::endl;
}