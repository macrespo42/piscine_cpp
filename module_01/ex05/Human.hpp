#ifndef DEF_HUMAN
#define DEF_HUMAN

#include "Brain.hpp"
#include <string>

class Human
{
    public:

    Human();
    ~Human();
    const Brain& getBrain(void);
    std::string identify(void) const;

    private:

    Brain const _brain;
};

#endif