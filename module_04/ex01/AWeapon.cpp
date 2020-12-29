#include "AWeapon.hpp"

AWeapon::AWeapon(std::string name, int apCost, int damage) : _name(name), _apCost(apCost), _damage(damage)
{
    std::cout << this->_name << " are created !" << std::endl;
}

AWeapon::AWeapon(AWeapon const& src)
{
    std::cout << this->_name << " are created !" << std::endl;
    *this = src;
}

AWeapon & AWeapon::operator=(AWeapon const& src)
{
    this->_name = src._name;
    this->_apCost = src._apCost;
    this->_damage = src._damage;
    return *this;
}

AWeapon::~AWeapon(void)
{
    std::cout << "Weapon destroyed" << std::endl;
}

std::string AWeapon::getName(void) const
{
    return this->_name;
}

int AWeapon::getapCost(void) const
{
    return this->_apCost;
}

int AWeapon::getDamage(void) const
{
    return this->_damage;
}