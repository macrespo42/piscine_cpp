#ifndef SCAV_TRAP
#define SCAV_TRAP

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class ScavTrap {

    public:

    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const& src);
    ~ScavTrap(void);
    ScavTrap &operator=(ScavTrap const& src);
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void challengeNewcomer(std::string const& target);

    private:

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