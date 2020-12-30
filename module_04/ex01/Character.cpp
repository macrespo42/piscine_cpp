#include "Character.hpp"

Character::Character(std::string const& name) : _name(name), _ap(40), _weapon(NULL)
{

}

Character::Character(Character const& src)
{
    *this = src;
}

Character::~Character(void)
{

}
    
Character & Character::operator=(Character const& src)
{
    this->_name = src._name;
    this->_ap = src._ap;
    this->_weapon = src._weapon;
    return *this;
}

void Character::recoverAP(void)
{
    this->_ap += 10;
    if (this->_ap > 40)
        this->_ap = 40;
}
    
void Character::equip(AWeapon *weapon)
{
    this->_weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
    if (this->_weapon && this->_weapon->getapCost() < this->_ap) {
        std::cout << this->_name << " attack " << enemy->getType() << " " << this->_weapon->getName() << std::endl;
        this->_weapon->attack();
        this->_ap -= this->_weapon->getapCost();
        enemy->takeDamage(this->_weapon->getDamage());
        if (enemy->getHp() <= 0)
            delete enemy;
    }
}

std::string Character::getName(void) const
{
    return this->_name;
}

int Character::getAp(void) const
{
    return this->_ap;
}

AWeapon * Character::getWeapon(void) const
{
    return this->_weapon;
}

std::ostream& operator<<(std::ostream &os, Character const& character)
{
    os << character.getName() << " has " << character.getAp();
    if (character.getWeapon() != NULL)
        os << " and carries a " << character.getWeapon()->getName() << std::endl;
    else
        os << " and is unarmed" << std::endl;
    return os;
}