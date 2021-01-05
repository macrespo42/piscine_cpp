#ifndef AMATERIA
#define AMATERIA

#include <iostream>
#include <string>

class AMateria {

    public:
        AMateria(std::string const& type);
        AMateria(AMateria const& src);
        virtual ~AMateria(void);
        AMateria & operator=(AMateria const& src);
        std::string const& geType(void) const;
        unsigned int getXP(void) const;
        virtual AMateria* clone(void) const = 0;
        virtual void use(ICharacter& target);

    protected:
        unsigned int _xp;
        std::string _type;

    private:
        AMateria(void);
};

#endif