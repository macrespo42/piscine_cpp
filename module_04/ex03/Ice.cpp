#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(Ice const& src) : AMateria("ice") {
    *this = src;
}

Ice::~Ice(void) {}

Ice & Ice::operator=(Ice const& src) {
    this->_xp = src._xp;
    return *this;
}

AMateria* Ice::clone(void) const {
    AMateria* iceClone = new Ice;
    return iceClone;
}

void Ice::use(ICharacter& target) {
    std::cout << "* Shoots an ice bolt at " << target.getName() << " *" << std::endl;
    this->_xp += 10;
}