#include "Zombie.hpp"

Zombie::Zombie(std::string const name, std::string const type) : _name(name), _type(type)
{
    std::cout << this->_name << " are alive !" << std::endl;
}

void    Zombie::advert(void) const
{
    std::cout << "< " << this->_name << " (" << this->_type << ")> Braiiiiiiiiiiiiiins ..." << std::endl;
}