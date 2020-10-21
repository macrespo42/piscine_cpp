#include "Weapon.hpp"

Weapon::Weapon(std::string const type) : _type(type)
{
}

const std::string& Weapon::getType(void)
{
    std::string& typeRef(this->_type);
    return typeRef;
}

void Weapon::setType(std::string const type)
{
    this->_type = type;
}