#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
    std::cout << "Tactical Marine ready for action" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const& src)
{
    (void)src;
    std::cout << "Tactical Marine ready for action" << std::endl;
}

TacticalMarine::~TacticalMarine(void)
{
    std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const& src)
{
    (void)src;
    return *this;
}

ISpaceMarine* TacticalMarine::clone(void) const
{
    TacticalMarine* copy = new TacticalMarine;
    return copy;
}

void TacticalMarine::battleCry(void) const
{
    std::cout << "For the Holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack(void) const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack(void) const
{
    std::cout << "* attacks with a chainsword *" << std::endl;
}