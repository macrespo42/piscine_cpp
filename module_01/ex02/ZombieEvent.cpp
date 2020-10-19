#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{

}

void    ZombieEvent::setZombieType(std::string zombieType)
{
    this->_zombieType = zombieType;
}

Zombie*  ZombieEvent::newZombie(std::string name)
{
    Zombie      *walkingDead = new Zombie(name, this->_zombieType);
    return walkingDead;
}

Zombie  ZombieEvent::randomChump(void)
{
    std::string const names[5] = {"Brian", "Adam", "Abbey", "Mickael", "Sarah"};
    srand(time(0));
    int               random(rand() % 5);
    Zombie  walkingDead(names[random], this->_zombieType);
    walkingDead.advert();
    return walkingDead;
}