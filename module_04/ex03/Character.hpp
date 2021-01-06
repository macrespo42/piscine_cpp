#ifndef CHARACTER
#define CHARACTER

#include "ICharacter.hpp"

class Character : public ICharacter {
    public:
        Character(void);
        Character(std::string name)
        Character(Character const& src);
        ~Character(void);
        Character & operator=(Character const& src);
        std::string const& getName(void) const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter & target);

    protected:
        AMateria *inventory[4];
        std::string _name;

};

#endif
