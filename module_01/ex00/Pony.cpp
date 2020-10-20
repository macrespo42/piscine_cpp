#include "Pony.hpp"

Pony::Pony(std::string const color, std::string const name, int age) : _color(color), _name(name), _age(age)
{
    std::cout << this->_color << " pony named: " << this->_name << " is created, he's " << this->_age << std::endl;
}

Pony::~Pony()
{
    std::cout << this->_color << " pony named: " << this->_name << " is deleted" << std::endl;
}

void    Pony::neigh(void) const
{
    std::cout << this->_name << " say: uhhhhhh UUUUUHHHHH UUUUUUHHHHHHHHHH" << std::endl;
}