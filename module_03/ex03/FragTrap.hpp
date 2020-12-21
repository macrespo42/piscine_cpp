#ifndef FRAG_TRAP
#define FRAG_TRAP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

    public:

    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(FragTrap const& src);
    ~FragTrap(void);
    FragTrap &operator=(FragTrap const& src);
    void vaulthunter_dot_exe(std::string const& target);
};

#endif