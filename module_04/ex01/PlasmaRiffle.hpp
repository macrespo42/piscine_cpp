#ifndef PLASMA_RIFFLE
#define PLASMA_RIFFLE

#include "AWeapon.hpp"

class PlasmaRiffle : public AWeapon {

    public:

    PlasmaRiffle(void);
    PlasmaRiffle(PlasmaRiffle const& src);
    ~PlasmaRiffle(void);
    PlasmaRiffle & operator=(PlasmaRiffle const& src);
    void attack(void) const;

    protected:

    std::string _name;
    int _apCost;
    int _damage;

};

#endif