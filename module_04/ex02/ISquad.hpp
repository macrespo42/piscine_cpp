#ifndef ISQUAD
#define ISQUAD

class ISquad
{
    public:

    virtual ~ISquad(void) {};
    virtual int getCount() const = 0;
    virtual ISpaceMarine* getUnit(int units) const = 0;
    virtual int push(ISpaceMarine*) = 0;
};

#endif