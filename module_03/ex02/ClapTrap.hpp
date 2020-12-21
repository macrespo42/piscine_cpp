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
    int _maxEnergyPoint;
    int _level;
    std::string _name;
    int _meleeAttackDamages;
    int _rangedAttackDamages;
    int _armorDamageReduction;
};

#endif