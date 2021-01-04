#ifndef ASSAULT_TERMINATOR
#define ASSAULT_TERMINATOR

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine {

    public:

    AssaultTerminator(void);
    AssaultTerminator(AssaultTerminator const& src);
    ~AssaultTerminator(void);
    AssaultTerminator & operator=(AssaultTerminator const& src);
    ISpaceMarine* clone(void) const;
    void battleCry(void) const;
    void rangedAttack(void) const;
    void meleeAttack(void) const;

};

#endif