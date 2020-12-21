#ifndef NINJA_TRAP
#define NINJA_TRAP

#include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap {

    public:

    NinjaTrap(void);
    NinjaTrap(std::string name);
    NinjaTrap(NinjaTrap const & src);
    ~NinjaTrap(void);
    NinjaTrap &operator=(NinjaTrap const & src);
};

#endif