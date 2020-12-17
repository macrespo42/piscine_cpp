#ifndef FIXED
#define FIXED

#include <iostream>
#include <cmath>

class Fixed {

    public:

    Fixed(void);
    Fixed(Fixed const & src);
    Fixed(int const value);
    Fixed(float const value);
    ~Fixed(void);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
    bool operator>(Fixed const& fixed) const;
    bool operator<(Fixed const& fixed) const ;
    bool operator<=(Fixed const& fixed) const;
    bool operator>=(Fixed const& fixed) const;
    bool operator==(Fixed const& fixed) const;
    bool operator!=(Fixed const& fixed) const;

    Fixed & operator=(Fixed const &src);
    Fixed operator+(Fixed const& fixed);
    Fixed operator-(Fixed const& fixed);
    Fixed operator*(Fixed const& fixed);
    Fixed operator/(Fixed const& fixed);

    static Fixed & min(Fixed & fixed1, Fixed & fixed2);
    static const Fixed & min(Fixed const& fixed1, Fixed const& fixed2);
    static Fixed & max(Fixed & fixed1, Fixed & fixed2);
    static const Fixed & max(Fixed const& fixed1, Fixed const& fixed2);
    
    private:

    int              _fixValue;
    static int const _bits = 8;
};

std::ostream& operator<<(std::ostream &out, Fixed const& fixed);

#endif