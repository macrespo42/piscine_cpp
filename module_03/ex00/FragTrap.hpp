#ifndef FRAG_TRAP
#define FRAG_TRAP

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class FragTrap {

    public:

    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(FragTrap const& src);
    ~FragTrap(void);
    FragTrap &operator=(FragTrap const& src);
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const& target);

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