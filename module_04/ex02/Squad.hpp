#ifndef SQUAD
#define SQUAD

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include <iostream>
#include <string>

class Squad : public ISquad {

    public:

    Squad(void);
    Squad(Squad const& src);
    Squad & operator=(Squad const& src);
    ~Squad(void);
    int getCount() const;
    ISpaceMarine* getUnit(int units) const;
    int push(ISpaceMarine* newMarine);

    protected:

    ISpaceMarine** _squad;
};


#endif