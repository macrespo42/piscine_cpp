#ifndef MATERIA_SOURCE
#define MATERIA_SOURCE

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    public:
        MateriaSource(void);
        MateriaSource(MateriaSource const& src);
        ~MateriaSource(void);
        MateriaSource & operator=(MateriaSource const& src);
        void learnMateria(AMateria* materia);
        AMateria* createMateria(std::string const& type);

    protected:
        AMateria *materiaLearned[4];
};

#endif