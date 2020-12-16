#include "Fixed.hpp"

Fixed::Fixed() : _fixValue(0), _static(8)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) : _fixValue(src._fixValue), _static(src._static)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
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

Fixed & Fixed::operator=(Fixed const & src)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_fixValue = src._fixValue;
    return *this;
}