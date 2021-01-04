#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main(void) {

    ISpaceMarine * bob = new AssaultTerminator;

    bob->battleCry();
    bob->rangedAttack();
    bob->meleeAttack();

    delete bob;
    return 0;
}