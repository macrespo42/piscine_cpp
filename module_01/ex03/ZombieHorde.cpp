#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int const hordeSize) : _hordeSize(hordeSize)
{
    srand(time(0));
    std::string const names[10] = {"Brian", "Adam", "Abbey", "Mickael", "Sarah", "Florian", "Quantin", "Vincent", "Thomas", "Alexandre"};
    this->_horde = new Zombie[this->_hordeSize];
    for (int i(0); i < this->_hordeSize; i++)
    {
        this->_horde[i].setType("Twerker zombie");
        this->_horde[i].setName(names[rand() % 10]);
    }
}

ZombieHorde::~ZombieHorde()
{
    delete [] this->_horde;
}

void ZombieHorde::announce(void) const
{
    for (int i(0); i < this->_hordeSize; i++)
        this->_horde[i].advert();
}