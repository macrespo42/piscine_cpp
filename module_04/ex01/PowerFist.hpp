#ifndef POWER_FIST
#define POWER_FIST

#include "AWeapon.hpp"

class PowerFist : public AWeapon {

    public:

    PowerFist(void);
    PowerFist(PowerFist const& src);
    ~PowerFist(void);
    PowerFist & operator=(PowerFist const& src);
    void attack(void) const;
};

#endif