#ifndef SUPER_TRAP
#define SUPER_TRAP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {

    public:

    SuperTrap(void);
    SuperTrap(std::string name);
    SuperTrap(SuperTrap const& src);
    ~SuperTrap(void);
    SuperTrap &operator=(SuperTrap const& src);
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
};

#endif