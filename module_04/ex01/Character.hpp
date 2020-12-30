#ifndef CHARACTER
#define CHARACTER

#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {

    public:

    Character(std::string const& name);    
    Character(Character const& src);
    ~Character(void);
    Character & operator=(Character const& src);
    void recoverAP(void);
    void equip(AWeapon *weapon);
    void attack(Enemy *enemy);
    std::string getName(void) const;
    int getAp(void) const;
    AWeapon * getWeapon(void) const;

    protected:

    std::string _name;
    int _ap;
    AWeapon *_weapon;

    private:

    Character(void);

};

std::ostream& operator<<(std::ostream &os, Character const& character);

#endif