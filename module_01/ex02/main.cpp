#include <iostream>
#include <string>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int     main(void)
{
    Zombie  *manon = new Zombie("Manon", "Sobbing zombie");
    manon->advert();
    delete manon;
    ZombieEvent     covid19;
    covid19.setZombieType("Squealer");
    Zombie  random1(covid19.randomChump());
    Zombie  random2(covid19.randomChump());
    Zombie* elisa(covid19.newZombie("Elisa"));
    delete elisa;
    return 0;
}