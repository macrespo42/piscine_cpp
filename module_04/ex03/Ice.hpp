#ifndef ICE
#define ICE

#include "AMateria.hpp"

class Ice : public AMateria {
    
    public:
        Ice(void);
        Ice(Ice const& src);
        ~Ice(void);
        Ice & operator=(Ice const& src);
        AMateria* clone(void) const;
        void use(ICharacter& target);
};

#endif