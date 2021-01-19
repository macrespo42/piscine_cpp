#include "Mutantstack.hpp"

int main()
{
    Mutantstack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "On top of the stack :" << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Stack size : "<< mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    Mutantstack<int>::iterator it = mstack.begin();
    Mutantstack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << "Stack value : " << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}