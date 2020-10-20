#ifndef DEF_ZOMBIE_HORDE
#define DEF_ZOMBIE_HORDE

#include <iostream>
#include "Zombie.hpp"
#include <ctime>
#include <cstdlib>

class ZombieHorde
{
    public:

    ZombieHorde(int const hordeSize);
    ~ZombieHorde();
    void announce(void) const;

    private:

    Zombie      *_horde;
    int const   _hordeSize;
};

#endif