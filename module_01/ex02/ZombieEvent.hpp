#ifndef DEF_ZOMBIE_EVENT
#define DEF_ZOMBIE_EVENT

#include <string>
#include "Zombie.hpp"
#include <ctime>
#include <cstdlib>

class ZombieEvent
{
    public:

    ZombieEvent();
    void    setZombieType(std::string zombieType);
    Zombie  *newZombie(std::string name);
    Zombie  randomChump(void);

    private:

    std::string     _zombieType;
};

#endif