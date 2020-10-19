#include <iostream>
#include <string>

int     main(void)
{
    std::string const   brain("HI THIS IS BRAIN");
    std::string const   *brainPtr(&brain);
    std::string const   &brainRef(brain);

    std::cout << "brain with ptr : " << *brainPtr << std::endl;
    std::cout << "brain with reference : " << brainRef << std::endl;
    return 0;
}