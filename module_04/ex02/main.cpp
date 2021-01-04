#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main(void) {

    ISpaceMarine * greg = new TacticalMarine;
    ISpaceMarine * bob = new AssaultTerminator;
    ISquad* vlc = new Squad;

    vlc->push(greg);
    vlc->push(bob);
    for (int i(0); i < vlc->getCount(); i++)
    {
        ISpaceMarine* current = vlc->getUnit(i);
        current->battleCry();
        current->rangedAttack();
        current->meleeAttack();
    }
    delete vlc;
    return 0;
}