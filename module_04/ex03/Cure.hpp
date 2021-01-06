#ifndef CURE
#define CURE

#include "AMateria.hpp"

class Cure : public AMateria {

    public:
        Cure(void);
        Cure(Cure const& src);
        ~Cure(void);
        Cure * operator=(Cure const& src);
        AMateria* clone(void) const;
        void use(ICharacter& target);
};

#endif