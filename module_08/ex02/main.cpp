#include "Mutantstack.hpp"

int main()
{
    Mutantstack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "On top of the stack : " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Stack size after pop : "<< mstack.size() << std::endl;
    std::cout << "On top of the stack : "<< mstack.top() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    std::cout << "Stack size after 4 push : " << mstack.size() << std::endl;
    Mutantstack<int>::iterator it = mstack.begin();
    Mutantstack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << "Stack value : " << *it << std::endl;
        ++it;
    }
    std::cout << "----------------------------------------------------------------" << std::endl;
    Mutantstack<int>::reverse_iterator rit = mstack.rbegin();
    Mutantstack<int>::reverse_iterator rite = mstack.rend();
    while (rit != rite)
    {
        std::cout << "Stack reverse value : " << *rit << std::endl;
        *rit++;
    }
    std::stack<int> s(mstack);
    return 0;
}