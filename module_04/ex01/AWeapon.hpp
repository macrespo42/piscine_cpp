#ifndef AWEAPON
#define AWEAPON

#include <iostream>
#include <string>

class AWeapon {

    public:

    AWeapon(std::string name, int apCost, int damage);
    AWeapon(AWeapon const& src);
    virtual ~AWeapon(void);
    AWeapon & operator=(AWeapon const& src);
    std::string getName(void) const;
    int getapCost(void) const;
    int getDamage(void) const;
    virtual void attack(void) const = 0;

    protected:

    std::string _name;
    int _apCost;
    int _damage;

    private:

    AWeapon(void);

};

#endif