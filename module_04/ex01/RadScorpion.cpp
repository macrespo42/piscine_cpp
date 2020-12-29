#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "Rad Scorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const& src) : Enemy(src)
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void)
{
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion & RadScorpion::operator=(RadScorpion const& src)
{
    this->_hp = src._hp;
    this->_type = src._type;
    return *this;
}