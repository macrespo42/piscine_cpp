#ifndef FRAG_TRAP
#define FRAG_TRAP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

    public:

    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(FragTrap const& src);
    ~FragTrap(void);
    FragTrap &operator=(FragTrap const& src);
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void vaulthunter_dot_exe(std::string const& target);
};

#endif