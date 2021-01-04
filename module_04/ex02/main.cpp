#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"

int main(void) {

    ISpaceMarine * bob = new TacticalMarine;

    bob->battleCry();
    bob->rangedAttack();
    bob->meleeAttack();

    delete bob;
    return 0;
}