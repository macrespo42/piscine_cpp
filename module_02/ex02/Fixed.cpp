#include "Fixed.hpp"

Fixed::Fixed(void) : _fixValue(0)
{
}

Fixed::Fixed(Fixed const & src)
{
    *this = src;
}

Fixed::Fixed(int const value) : _fixValue(value * 256)
{
}

Fixed::Fixed(float const value) : _fixValue(roundf(value * 256))
{
}

Fixed::~Fixed(void) {
}

int Fixed::getRawBits(void) const {
    return this->_fixValue;
}

void Fixed::setRawBits(int const raw) {
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
    this->_fixValue = src._fixValue;
    return *this;
}

std::ostream& operator<<(std::ostream &out, Fixed const& fixed) {
    std::cout << fixed.toFloat();
    return out;
}

bool Fixed::operator>(Fixed const& fixed) const {
    return (this->_fixValue > fixed.getRawBits());
}

bool Fixed::operator<(Fixed const& fixed) const {
    return (this->_fixValue < fixed.getRawBits());
}

bool Fixed::operator<=(Fixed const& fixed) const {
    return (this->_fixValue <= fixed.getRawBits());
}

bool Fixed::operator>=(Fixed const& fixed) const {
    return (this->_fixValue >= fixed.getRawBits());
}

bool Fixed::operator==(Fixed const& fixed) const {
    return (this->_fixValue == fixed.getRawBits());
}

bool Fixed::operator!=(Fixed const& fixed) const {
    return (this->_fixValue != fixed.getRawBits());
}

Fixed Fixed::operator+(Fixed const &src) {
    Fixed result(this->_fixValue + src.getRawBits());
    return result;
}

Fixed Fixed::operator-(Fixed const &src) {
    Fixed result(this->_fixValue - src.getRawBits());
    return result;
}

Fixed Fixed::operator*(Fixed const &src) {
    Fixed result(this->_fixValue * src.getRawBits() / 256);
    return result;
}

Fixed Fixed::operator/(Fixed const &src) {
    Fixed result(this->_fixValue * 256 / src.getRawBits());
    return result;
}

Fixed & min(Fixed & fixed1, Fixed & fixed2) {
    if (fixed1.getRawBits() < fixed2.getRawBits())
        return fixed1;
    else
        return fixed2;
}

const Fixed & min(Fixed const& fixed1, Fixed const& fixed2) {
    if (fixed1.getRawBits() < fixed2.getRawBits())
        return fixed1;
    else
        return fixed2;
}

Fixed & max(Fixed & fixed1, Fixed & fixed2)  {
    if (fixed1.getRawBits() > fixed2.getRawBits())
        return fixed1;
    else
        return fixed2;

}
const Fixed & max(Fixed const& fixed1, Fixed const& fixed2) {
    if (fixed1.getRawBits() > fixed2.getRawBits())
        return fixed1;
    else
        return fixed2;
}