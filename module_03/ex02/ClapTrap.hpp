#ifndef CLAP_TRAP
#define CLAP_TRAP

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class ClapTrap {

    public:

    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(int const hitPoints, int const maxHitPoints, int const energyPoints, int const _maxEnergyPoints,
     int const level, std::string name, int const meleeAttackDamages, int const rangedAttackDamages,
     int const armorDamageReduction);
    ClapTrap(ClapTrap const& src);
    ~ClapTrap(void);
    ClapTrap &operator=(ClapTrap const& src);
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    protected:

    int _hitPoints;
    int _maxHitPoints;
    int _energyPoints;
    int _maxEnergyPoints;
    int _level;
    std::string _name;
    int _meleeAttackDamages;
    int _rangedAttackDamages;
    int _armorDamageReduction;
};

#endif