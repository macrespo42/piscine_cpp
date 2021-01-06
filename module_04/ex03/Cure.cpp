#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(Cure const& src) : AMateria("cure") {
    *this = src;
}

Cure::~Cure(void) {}

Cure * Cure::operator=(Cure const& src) {
    this->_xp = src._xp;
    return *this;
}

AMateria* Cure::clone(void) const {
    AMateria* cureClone = new Cure;
    return cureClone;
}

void Cure::use(ICharacter& target) {
    (void)target;
    std::cout << "* heals " << target.getName() << "'s wounds" << std::endl;
    this->_xp += 10;
}