#include "Enemy.hpp"

Enemy::Enemy(void)
{

}

Enemy::Enemy(int hp, std::string const& type) : _hp(hp), _type(type)
{
    std::cout << "A " << this->_type << " enemy is created" << std::endl;
}

Enemy::Enemy(Enemy const& src)
{
    *this = src;
}

Enemy::~Enemy(void)
{
    std::cout << "A " << this->_type << " is destroyed" << std::endl;
}

Enemy & Enemy::operator=(Enemy const& src)
{
    this->_hp = src._hp;
    this->_type = src._type;
    return *this;
}

std::string Enemy::getType(void) const
{
    return this->_type;
}

int Enemy::getHp(void) const
{
    return this->_hp;
}

void Enemy::takeDamage(int damages)
{
    if (damages > 0) {
        this->_hp -= damages;
        std::cout << this->_type << " take" << damages << " damages now he have " << this->_hp << " hp" << std::endl;
    }
}