#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(Ice const& src) {
    *this = src;
}

Ice::~Ice(void) {}

Ice & Ice::operator=(Ice const& src) {
    this->_xp = src->_xp;
    return *this;
}

AMateria* Ice::clone(void) const {
    AMateria* iceClone = new Ice;
    return iceClone;
}

void Ice::use(ICharacter& target) {
    (void)target;
    std::string name("Random"); // tmp
    std::cout << "* Shoots an ice bolt at " << name << << " *"std::endl;
    this->_xp += 10;
}