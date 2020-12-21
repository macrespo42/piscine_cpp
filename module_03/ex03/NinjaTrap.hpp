#ifndef NINJA_TRAP
#define NINJA_TRAP

#include "ClapTrap.hpp"
#include "FragTrap.cpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {

    public:

    NinjaTrap(void);
    NinjaTrap(std::string name);
    NinjaTrap(ClapTrap const & src);
    ~NinjaTrap(void);
    NinjaTrap &operator=(ScavTrap const & src);
    void ninjaShoebox(ClapTrap const & xTrap);
    void ninjaShoebox(FragTrap const & xTrap);
    void ninjaShoebox(ScavTrap const & xTrap);
}

#endif