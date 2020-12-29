#ifndef SUPER_MUTANT
#define SUPER_MUTANT

#include "Enemy.hpp"

class SuperMutant : public Enemy {

    public:

    SuperMutant(void);
    SuperMutant(SuperMutant const& src);
    ~SuperMutant(void);
    SuperMutant & operator=(SuperMutant const& src);
    void takeDamage(int damages);
};

#endif