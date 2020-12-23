#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main(void) {
    Sorcerer robert("Robert", "The magnificient");

    Victim jim("Jim");
    Peon joe("Joe");

    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);
    return 0;
}