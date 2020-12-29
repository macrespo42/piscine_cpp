#include "PlasmaRiffle.hpp"

PlasmaRiffle::PlasmaRiffle(void) : AWeapon("Plama Riffle", 5, 21)
{

}

PlasmaRiffle::PlasmaRiffle(PlasmaRiffle const& src)
{
    *this = src;
}

PlasmaRiffle::~PlasmaRiffle(void)
{

}

PlasmaRiffle & PlasmaRiffle::operator=(PlasmaRiffle const& src)
{
    this->_name = src._name;
    this->_apCost = src._apCost;
    this->_damage = src._damage;
    return *this;
}

void PlasmaRiffle::attack(void) const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}