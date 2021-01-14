#include "Base.hpp"
#include <iostream>

void identify_from_pointer(Base * p) {
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify_from_reference( Base & p) {
    if (dynamic_cast<A*>(&p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(&p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(&p))
        std::cout << "C" << std::endl;
}

int main(void) {
    
    Base * test0 = new A;
    Base * test1 = new B;
    Base * test2 = new C;

    identify_from_pointer(test0);
    identify_from_pointer(test1);
    identify_from_pointer(test2);
    identify_from_reference(*test0);
    identify_from_reference(*test1);
    identify_from_reference(*test2);
    return 0;
}