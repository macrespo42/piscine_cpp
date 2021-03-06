#ifndef SORCERER
#define SORCERER

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer {

    public:

    Sorcerer(std::string name, std::string title);
    Sorcerer(Sorcerer const& src);
    ~Sorcerer(void);
    Sorcerer & operator=(Sorcerer const& src);
    std::string getName(void) const;
    std::string getTitle(void) const;
    void polymorph(Victim const & victim);

    protected:

    std::string _name;
    std::string _title;

    private:

    Sorcerer(void);
};

std::ostream &operator<<(std::ostream &os, Sorcerer const& wizard);

#endif