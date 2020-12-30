#include "PlasmaRiffle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main(void) {

    Character *me = new Character("Max");
    Enemy *b = new RadScorpion();

    std::cout << me << std::endl;

    AWeapon *pr = new PlasmaRiffle();

    std::cout << me << std::endl;

    AWeapon *pf = new PowerFist();

    std::cout << me << std::endl;

    me->equip(pr);
    me->attack(b);
    me->equip(pf);

    delete me;
    delete b;
    delete pr;
    delete pf;
    return 0;
}