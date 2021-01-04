#ifndef TACTICAL_MARINE
#define TACTICAL_MARINE

#include "ISpaceMarine.hpp"
#include <iostream>
#include <string>

class TacticalMarine : public ISpaceMarine {

    public:

    TacticalMarine(void);
    TacticalMarine(TacticalMarine const& src);
    ~TacticalMarine(void);
    TacticalMarine & operator=(TacticalMarine const& src);
    ISpaceMarine* clone(void) const;
    void battleCry(void) const;
    void rangedAttack(void) const;
    void meleeAttack(void) const;
};

#endif