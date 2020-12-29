#include "PlasmaRiffle.hpp"

int main(void) {

    PlasmaRiffle blaster;

    blaster.attack();
    std::cout << blaster.getName() << " make " << blaster.getDamage() << " damages and cost " << blaster.getapCost() << " ap" << std::endl; 
    return 0;
}