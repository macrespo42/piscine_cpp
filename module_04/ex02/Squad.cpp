#include "Squad.hpp"

Squad::Squad(void) : _squad(NULL) {}

Squad::Squad(Squad const& src)
{
    *this = src;
}

Squad & Squad::operator=(Squad const& src)
{
    this->_squad = src._squad;
    return *this;
}

Squad::~Squad(void)
{
    for (int i(0); i < this->getCount(); i++)
        delete this->_squad[i];
    delete [] this->_squad;
}

int Squad::getCount() const
{
    int i(0);

    if (this->_squad == NULL)
        return 0;
    while (this->_squad[i] != NULL)
        i++;
    return i;
}

ISpaceMarine* Squad::getUnit(int units) const
{
    if (this->getCount() >= units)
        return this->_squad[units];
    return NULL;
}

int Squad::push(ISpaceMarine *newMarine)
{
    ISpaceMarine** newSquad;
    newSquad = new ISpaceMarine*[this->getCount() + 1];
    int i(0);

    for (int j(0); j < this->getCount(); j++)
    {
        if (this->_squad[j] == newMarine)
            return 0;
    }
    if (newMarine == NULL)
        return 0;
    while (i < this->getCount())
    {
        newSquad[i] = this->_squad[i];
        i++;
    }
    newSquad[i] = newMarine;
    i++;
    newSquad[i] = NULL;
    delete [] this->_squad;
    this->_squad = newSquad;
    return i;
}