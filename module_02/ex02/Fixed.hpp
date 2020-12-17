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

    private:

    int              _fixValue;
    static int const _bits = 8;
};

std::ostream& operator<<(std::ostream &out, Fixed const& fixed);

#endif