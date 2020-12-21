#ifndef SCAV_TRAP
#define SCAV_TRAP

#include "ClapTrap.hpp"

class ScavTrap {

    public:

    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const& src);
    ~ScavTrap(void);
    ScavTrap &operator=(ScavTrap const& src);
    void challengeNewcomer(std::string const& target);

};

#endif