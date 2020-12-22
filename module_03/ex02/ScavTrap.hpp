#ifndef SCAV_TRAP
#define SCAV_TRAP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

    public:

    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const& src);
    ~ScavTrap(void);
    ScavTrap &operator=(ScavTrap const& src);
    void challengeNewcomer(void);
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);

};

#endif