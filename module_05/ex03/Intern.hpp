#ifndef INTERN
#define INTERN

#include <iostream>
#include <string>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {

    public:
        typedef Form * (Intern::*functionPtr)(std::string const&);

        Intern(void);
        Intern(Intern const& src);
        ~Intern(void);
        Intern & operator=(Intern const& src);
        Form* makeForm(std::string const& formType, std::string const& target);
    
    private:
        Form* makePresidentialPardonForm(std::string const& target);
        Form* makeRobotmyRequestForm(std::string const& target);
        Form* makeShrubberyCreationForm(std::string const& target);
};

#endif
