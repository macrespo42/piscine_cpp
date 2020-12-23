#ifndef VICTIM
#define VICTIM

#include <iostream>
#include <string>

class Victim {

    public:

    Victim(void);
    Victim(std::string name);
    ~Victim(void);
    Victim & operator=(Victim const& src);
    std::string getName(void) const;
    virtual void getPolymorphed(void) const;

    protected:

    std::string _name;
};

std::ostream &operator<<(std::ostream &os, Victim const& victim);

#endif