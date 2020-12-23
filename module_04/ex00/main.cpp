#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Jester.hpp"

int main(void) {
    Sorcerer robert("Robert", "The magnificient");

    Victim jim("Jim");
    Peon joe("Joe");
    Jester roger("Roger");

    std::cout << robert << jim << joe << roger;
    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(roger);
    return 0;
}