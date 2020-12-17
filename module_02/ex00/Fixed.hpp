#ifndef FIXED
#define FIXED

#include<iostream>

class Fixed {

    public:

    Fixed(void);
    Fixed(Fixed const & src);
    ~Fixed(void);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    Fixed & operator=(Fixed const & src);

    private:

    int              _fixValue;
    static int const _bits = 8; // 2ˆ8 to convert (256)
};

#endif