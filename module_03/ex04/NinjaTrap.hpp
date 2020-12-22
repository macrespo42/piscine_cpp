#ifndef NINJA_TRAP
#define NINJA_TRAP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap {

    public:

    NinjaTrap(void);
    NinjaTrap(std::string name);
    NinjaTrap(NinjaTrap const & src);
    ~NinjaTrap(void);
    NinjaTrap &operator=(NinjaTrap const & src);
    void ninjaShoebox(ClapTrap const & target);
    void ninjaShoebox(NinjaTrap const & target);
    void ninjaShoebox(FragTrap const & target);
    void ninjaShoebox(ScavTrap const & target);
};

#endif