#ifndef JESTER
#define JESTER

#include "Victim.hpp"

class Jester : public Victim {

    public:

    Jester(void);
    Jester(std::string name);
    Jester(Jester const& src);
    virtual ~Jester(void);
    Jester & operator=(Jester const& src);
    void getPolymorphed(void) const;
};

#endif