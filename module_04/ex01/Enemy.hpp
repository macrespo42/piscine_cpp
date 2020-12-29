#ifndef ENEMY
#define ENEMY

#include <iostream>
#include <string>

class Enemy {

    public:

    Enemy(int hp, std::string const& type);
    Enemy(Enemy const& src);
    virtual ~Enemy(void);
    Enemy & operator=(Enemy const& src);
    std::string getType(void) const;
    int getHp(void) const;
    virtual void takeDamage(int damages);

    protected:

    int _hp;
    std::string _type;

    private:

    Enemy(void);

};

#endif