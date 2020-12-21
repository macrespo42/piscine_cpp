#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
    FragTrap roberto("Roberto");
    // ScavTrap gina("Gina");

    roberto.rangedAttack("Crystal");
    roberto.meleeAttack("Roger");
    // gina.rangedAttack("Max");
    // gina.meleeAttack("Mans");

    roberto.takeDamage(10);
    roberto.takeDamage(10000);
    // gina.takeDamage(10);
    // gina.takeDamage(10000);

    roberto.beRepaired(42);
    roberto.beRepaired(200);
    // gina.beRepaired(42);
    // gina.beRepaired(200);

    roberto.vaulthunter_dot_exe("ruby");
    roberto.vaulthunter_dot_exe("python");
    roberto.vaulthunter_dot_exe("php");
    roberto.vaulthunter_dot_exe("C");
    roberto.vaulthunter_dot_exe("Javascript");
    
    // gina.challengeNewcomer("ruby");
    // gina.challengeNewcomer("python");
    // gina.challengeNewcomer("php");
    // gina.challengeNewcomer("C");
    // gina.challengeNewcomer("Javascript");
    return 0;
}