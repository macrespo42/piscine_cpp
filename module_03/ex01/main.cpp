#include "FragTrap.hpp"

int main(void) {
    FragTrap roberto("Roberto");

    roberto.rangedAttack("Crystal");
    roberto.meleeAttack("Roger");
    roberto.takeDamage(10);
    roberto.takeDamage(10000);
    roberto.beRepaired(42);
    roberto.beRepaired(200);
    roberto.vaulthunter_dot_exe("ruby");
    roberto.vaulthunter_dot_exe("python");
    roberto.vaulthunter_dot_exe("php");
    roberto.vaulthunter_dot_exe("C");
    roberto.vaulthunter_dot_exe("Javascript");
    return 0;
}