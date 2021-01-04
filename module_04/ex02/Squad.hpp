#ifndef SQUAD
#define SQUAD

#include "ISquad.hpp"

class Squad : public ISQUAD {

    public:

    Squad(void);
    ~Squad(void);
    int getCount();
    ISpaceMarine* getUnit(int units);
    int push(ISpace Marine*);
};


#endif