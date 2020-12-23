#include "Sorcerer.hpp"
#include "Victim.hpp"

int main(void) {
    Sorcerer robert("Robert", "Mage noir");
    Victim baptiste("Baptiste");

    robert.polymorph(baptiste);
    std::cout << robert << std::endl;
    std::cout << baptiste << std::endl;
    return 0;
}