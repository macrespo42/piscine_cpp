#include "Jester.hpp"

Jester::Jester(void) : Victim()
{
    std::cout << "Yi yaaaah." << std::endl;
}
Jester::Jester(std::string name) : Victim(name)
{
    std::cout << "Yi yaaaah." << std::endl;
}

Jester::Jester(Jester const& src)
{
    *this = src;
}

Jester::~Jester(void)
{
    std::cout << "POUET" << std::endl;
}

Jester & Jester::operator=(Jester const& src)
{
    this->_name = src._name;
    return *this;
}

void Jester::getPolymorphed(void) const {
    std::cout << this->_name << " has been turned into a dragonfly" << std::endl;
}