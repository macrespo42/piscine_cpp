#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void) {
    NinjaTrap roberto("Roberto");
    ClapTrap gina("gina");
    FragTrap fred("fred");
    ScavTrap vladou("vladou");

    roberto.rangedAttack("truc");
    roberto.meleeAttack("truc");

    roberto.ninjaShoebox(gina);
    roberto.ninjaShoebox(roberto);
    roberto.ninjaShoebox(fred);
    roberto.ninjaShoebox(vladou);
    return 0;
}