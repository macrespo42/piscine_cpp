#ifndef IMATERIA_SOURCE
#define IMATERIA_SOURCE

#include "AMateria.hpp"

class IMateriaSource {

    public:
        virtual ~IMateriaSource(void) {}
        virtual void learnMateria(AMateria* materia) = 0;
        virtual AMateria* createMateria(std::string const& type)= 0;
};

#endif