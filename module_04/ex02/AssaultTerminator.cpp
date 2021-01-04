#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const& src)
{
    (void)src;
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator(void)
{
    std::cout << "I'll be back ..." << std::endl;
}

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const& src)
{
    (void)src;
    return *this;
}

ISpaceMarine* AssaultTerminator::clone(void) const
{
    AssaultTerminator* copy = new AssaultTerminator;
    return copy;
}

void AssaultTerminator::battleCry(void) const
{
    std::cout << "This code is unclean. Purify it !" << std::endl;
}

void AssaultTerminator::rangedAttack(void) const
{
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack(void) const
{
    std::cout << "* attack with a chainfists *" << std::endl;
}