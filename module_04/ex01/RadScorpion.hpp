#ifndef RAD_SCORPION
#define RAD_SCORPION

#include "Enemy.hpp"

class RadScorpion : public Enemy {

    public:

    RadScorpion(void);
    RadScorpion(RadScorpion const& src);
    ~RadScorpion(void);
    RadScorpion & operator=(RadScorpion const& src);
};

#endif