#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(Cure const& src) {
    *this = src;
}

Cure::~Cure(void) {}

Cure * Cure::operator=(Cure const& src) {
    this->_xp = src._xp;
    return *this;
}

AMateria* clone(void) const {
    AMateria* cureClone = new Cure;
    return cureClone;
}

void use(ICharacter& target) {
    (void)target;
    std::cout << "* heals " << name << "'s wounds" << std::endl;
    this->_xp += 10;
}