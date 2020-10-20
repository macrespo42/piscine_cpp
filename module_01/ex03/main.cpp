#include "ZombieHorde.hpp"

int     main(void)
{
    ZombieHorde     stackHorde(5);
    ZombieHorde     *heapHorde;

    std::cout << "heap zombies :" << std::endl;
    heapHorde = new ZombieHorde(5);
    heapHorde->announce();
    std::cout << "stack zombies :" << std::endl;
    stackHorde.announce();
    delete heapHorde;
    return 0;
}