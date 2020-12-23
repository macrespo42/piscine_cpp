#include "Peon.hpp"

Peon::Peon(void) : Victim()
{
    std::cout << "Zog zog." << std::endl;
}
Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const& src)
{
    *this = src;
}

Peon::~Peon(void)
{
    std::cout << "Bleuark" << std::endl;
}

Peon & Peon::operator=(Peon const& src)
{
    this->_name = src._name;
    return *this;
}

void Peon::getPolymorphed(void) const {
    std::cout << this->_name << " has been turned into a pink poney" << std::endl;
}