#include "Fixed.hpp"

Fixed::Fixed(void) : _fixValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed(int const value) : _fixValue(value * 256)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const value) : _fixValue(roundf(value * 256))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixValue;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixValue = raw;
}

float Fixed::toFloat(void) const {
    return (float)this->_fixValue / 256;
}

int Fixed::toInt(void) const {
    return this->_fixValue / 256;
}

Fixed & Fixed::operator=(Fixed const & src)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_fixValue = src._fixValue;
    return *this;
}

std::ostream& operator<<(std::ostream &out, Fixed const& fixed) {
    out << fixed.toFloat();
    return out;
}