#include <string>
#include <iostream>
#include "Pony.hpp"

void    ponyOnTheStack()
{
    Pony    cottonCandy("Brown", "Cotton candy", 6);
    cottonCandy.neigh();
}

void    ponyOnTheHeap()
{
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