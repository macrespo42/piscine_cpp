#include "AMateria.hpp"

AMateria::AMateria(std::string const& type) : _xp(0), _type(type) {}

AMateria::AMateria(AMateria const& src) {
    *this = src;
}

AMateria::~AMateria(void) {}

AMateria & AMateria::operator=(AMateria const& src) {
    this->_xp = src._xp;
    this->_type = src._type;
    return *this;
}

std::string const& AMateria::geType(void) const {
    return this->_type;
}

unsigned int AMateria::getXP(void) const {
    return this->_xp;
}

void AMateria::use(ICharacter& target) {
    std::cout << target.getName() << " use unknown materia -__-" << std::endl;
    this->_xp += 10;
}