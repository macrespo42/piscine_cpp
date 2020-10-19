#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
    srand(time(0));
}

void    ZombieEvent::setZombieType(std::string zombieType)
{
    this->_zombieType = zombieType;
}

Zombie*  ZombieEvent::newZombie(std::string name)
{
    Zombie      *walkingDead = new Zombie(name, this->_zombieType);
    walkingDead->advert();
    return walkingDead;
}

Zombie  ZombieEvent::randomChump(void)
{
    int const         namesNumber(10);
    std::string const names[namesNumber] = {"Brian", "Adam", "Abbey", "Mickael", "Sarah", "Florian", "Quantin", "Vincent", "Thomas", "Alexandre"};
    Zombie  walkingDead(names[rand() % namesNumber], this->_zombieType);
    walkingDead.advert();
    return walkingDead;
}