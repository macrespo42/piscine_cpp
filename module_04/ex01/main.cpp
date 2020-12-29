#include "PlasmaRiffle.hpp"
#include "PowerFist.hpp"

int main(void) {

    PlasmaRiffle blaster;
    PowerFist fist;

    blaster.attack();
    fist.attack();
    std::cout << blaster.getName() << " make " << blaster.getDamage() << " damages and cost " << blaster.getapCost() << " ap" << std::endl; 
    std::cout << fist.getName() << " make " << fist.getDamage() << " damages and cost " << fist.getapCost() << " ap" << std::endl; 
    return 0;
}