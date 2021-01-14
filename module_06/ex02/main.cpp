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
    
    Base * hardcore0 = new A;
    Base * hardcore1 = new B;
    Base * hardcore2 = new C;
    Base ref1 = A();
    Base ref2 = B();
    Base ref3 = C();

    identify_from_pointer(hardcore0);
    identify_from_pointer(hardcore1);
    identify_from_pointer(hardcore2);
    identify_from_reference(ref1);
    identify_from_reference(ref2);
    identify_from_reference(ref3);
    return 0;
}