#ifndef IMATERIA_SOURCE
#define IMATERIA_SOURCE

#include "AMateria.hpp"

class IMateriaSource {

    public:
        virtual ~IMateriaSource(void) {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const& type) const = 0;
};

#endif