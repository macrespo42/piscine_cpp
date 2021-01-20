#include <string>
#include <iostream>
#include "Pony.hpp"

void    ponyOnTheStack()
{
    std::cout << "Poney on the stack :" << std::endl;
    Pony    cottonCandy("Brown", "Cotton candy", 6);
    cottonCandy.neigh();
}

void    ponyOnTheHeap()
{
    std::cout << "Poney on the heap :" << std::endl;
    Pony*  rainbow = new Pony("Pink", "Rainbow", 4);
    rainbow->neigh();
    delete rainbow;
}

int     main(void)
{
    ponyOnTheStack();
    ponyOnTheHeap();
    return 0;
}