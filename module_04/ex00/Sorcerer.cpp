#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
    // illegal option
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
    std::cout << this->_name << " " << this->_title << " is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const& src) {
    *this = src;
    std::cout << this->_name << " " << this->_title << " is born!" << std::endl;
}

Sorcerer::~Sorcerer(void) {
    std::cout << this->_name << " " << this->_title << " is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer & Sorcerer::operator=(Sorcerer const& src) {
    this->_name = src._name;
    this->_title = src._title;
    return *this;
}

std::string Sorcerer::getName(void) const {
    return this->_name;
}

std::string Sorcerer::getTitle(void) const {
    return this->_title;
}

std::ostream &operator<<(std::ostream &os, Sorcerer const& wizard)
{
    os << "I am " << wizard.getName() << ", " << wizard.getTitle() << ", and i like ponies!" << std::endl;
    return os;
}

void Sorcerer::polymorph(Victim const & victim) {
    victim.getPolymorphed();
}