#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("PowerFist", 8, 50)
{

}

PowerFist::PowerFist(PowerFist const& src) : AWeapon(src)
{

}

PowerFist::~PowerFist(void)
{

}

PowerFist & PowerFist::operator=(PowerFist const& src)
{
    this->_name = src._name;
    this->_damage = src._damage;
    this->_apCost = src._apCost;
    return *this;
}

void PowerFist::attack(void) const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}