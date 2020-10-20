#include "Zombie.hpp"

Zombie::Zombie(void)
{

}

Zombie::Zombie(std::string const name, std::string const type) : _name(name), _type(type)
{
    std::cout << this->_name << " are alive !" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " is dead now" << std::endl;
}

void    Zombie::advert(void) const
{
    std::cout << "< " << this->_name << " (" << this->_type << ")> Braiiiiiiiiiiiiiins ..." << std::endl;
}

void    Zombie::setName(std::string const name)
{
    this->_name = name;
}

void    Zombie::setType(std::string const type)
{
    this->_type = type;
}