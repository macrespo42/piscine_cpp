#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const& src) : Enemy(src)
{
    std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
    std::cout << "Aaargh ..." << std::endl;
}

SuperMutant & SuperMutant::operator=(SuperMutant const& src)
{
    this->_hp = src._hp;
    this->_type = src._hp;
    return *this;
}

void SuperMutant::takeDamage(int damages)
{
    Enemy::takeDamage(damages - 3);
}
