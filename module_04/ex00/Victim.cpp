#include "Victim.hpp"

Victim::Victim(void) : _name("Ran Dom")
{
    std::cout << "A random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(std::string name) : _name(name)
{
    std::cout << "A random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim(void) {
    std::cout << "The victim " << this->_name << " died for no apparend reason" << std::endl;
}

Victim & Victim::operator=(Victim const& src) {
    this->_name = src._name;
    return *this;
}

std::string Victim::getName(void) const {
    return this->_name;
}

void Victim::getPolymorphed(void) const {
    std::cout << this->_name << " was just polymorphed in a cute little sheep" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Victim const& victim) {
    os << "I'm " << victim.getName() << " and i like otters!";
    return os;
}