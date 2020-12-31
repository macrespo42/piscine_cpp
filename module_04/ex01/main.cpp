#include "PlasmaRiffle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main(void) {

    Character *me = new Character("Max");
    Enemy *b = new RadScorpion();
    std::cout << *me;
    AWeapon *pr = new PlasmaRiffle();
    AWeapon *pf = new PowerFist();
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    me->attack(b);
    me->attack(b);
    me->equip(pf);
    me->attack(b);
    me->recoverAP();
    Enemy *c = new SuperMutant();
    me->attack(c);
    me->attack(c);
    me->attack(c);
    me->attack(c);
    me->attack(c);
    me->recoverAP();
    me->attack(c);
    me->attack(c);
    me->attack(c);
    me->attack(c);
    me->attack(c);
    std::cout << *me;
    return 0;
}