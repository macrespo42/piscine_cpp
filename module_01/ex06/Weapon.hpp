#ifndef DEF_WEAPON
#define DEF_WEAPON

#include <string>

class Weapon
{
    public:

    Weapon(std::string const type);
    const std::string &getType(void);
    void setType(std::string const type);

    private:

    std::string _type;
};

#endif