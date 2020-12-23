#ifndef PEON
#define PEON

#include "Victim.hpp"

class Peon : public Victim {

    public:

    Peon(void);
    Peon(std::string name);
    Peon(Peon const& src);
    ~Peon(void);
    Peon & operator=(Peon const& src);
    void getPolymorphed(void) const;
};

#endif