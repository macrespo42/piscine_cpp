#include "Character.hpp"

Character::Character(void) : _name("Random") {
    for (int i(0); i < 4; i++) {
        this->_inventory[i] = NULL;
    }
}

Character::Character(std::string name) : _name(name)
{
    for (int i(0); i < 4; i++) {
        this->_inventory[i] = NULL;
    }
}

Character::Character(Character const& src) {
    *this = src;
}

Character::~Character(void) {
    for (int i(0); i < 4; i++) {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
    // delete [] this->_inventory;
}

Character & Character::operator=(Character const& src) {
    this->_name = src._name;
    for (int i(0); src._inventory[i] != NULL; i++)
        this->_inventory[i] = src._inventory[i]->clone();
    return *this;
}

std::string const& Character::getName(void) const {
    return this->_name;
}

void Character::equip(AMateria *m) {
    int freeSlot(0);

    while (freeSlot < 4 && this->_inventory[freeSlot]) {
        freeSlot++;
    }
    if (freeSlot > 3)
        return ;
    this->_inventory[freeSlot] = m->clone();
}

void Character::unequip(int idx) {
    if (idx > 3 || idx < 0)
        return ;
    this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter & target)
{
    if ((idx > 3 || idx < 0) || !this->_inventory[idx])
        return ;
    this->_inventory[idx]->use(target);
}
