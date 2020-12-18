#include "FragTrap.hpp"

FragTrap::FragTrap() : _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoint(100), _level(1), _name("C34A"), _meleeAttackDamages(30), _rangedAttackDamages(20), _armorDamageReduction(5)
{
    srand(time(0));
    std::cout << "Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : " << this->_name <<". Robot d'Hyperion classe C. Veuillez régler les paramètres d'usine en fonction de vos besoin avant déploiement. " << std::endl;
}

FragTrap::FragTrap(std::string name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoint(100), _level(1), _name(name), _meleeAttackDamages(30), _rangedAttackDamages(20), _armorDamageReduction(5)
{
    srand(time(0));
    std::cout << "Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : " << this->_name <<". Robot d'Hyperion classe C. Veuillez régler les paramètres d'usine en fonction de vos besoin avant déploiement. " << std::endl;
}

FragTrap::FragTrap(FragTrap const& src)
{
    srand(time(0));
    *this = src;
    std::cout << "Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : " << this->_name <<". Robot d'Hyperion classe C. Veuillez régler les paramètres d'usine en fonction de vos besoin avant déploiement. " << std::endl;
}

FragTrap::~FragTrap(void) {
    std::cout << "Je suis mort, je suis mort. Oh mon dieu, je suis mort. " << std::endl;
}

void FragTrap::rangedAttack(std::string const& target) {
    std::cout << "FR4G-TP "<< this->_name <<" attaque " << target << " à distance, causant "<< this->_rangedAttackDamages <<" points de dégâts" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const& src) {
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
        if (this->_hitPoints > 100)
            this->_hitPoints = 100;
        std::cout << "FR4G-TP " << this->_name << " se soigne, il a maintenant " << this->_hitPoints << " HP" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const& target) {
    std::string const attackNames[5] = {"Lançant son bras droit", "Chantant une berceuse", "Tournant autour de sa cible", "Poussant des cris strident", "Ouvrant une porte"};
    int const attackDamage[5] = {50, 10, 0, 75, 2};

    if (this->_energyPoints < 25) {
        std::cout << this->_name << " n'a pas assez d'energie pour effectuer une attaque special" << std::endl;
        return ;
    }
    this->_energyPoints -= 25;

    int attackIndex(rand() % 5);
    std::cout << "FR4G-TP "<< this->_name <<" attaque " << target << " en " << attackNames[attackIndex] << ", causant "<< attackDamage[attackIndex] <<" points de dégâts" << std::endl;
}