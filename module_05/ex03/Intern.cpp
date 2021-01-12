#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern const& src) {
    *this = src;
}

Intern::~Intern(void) {}

Intern & Intern::operator=(Intern const& src) {
    (void)src;
    return *this;
}

Form* Intern::makePresidentialPardonForm(std::string const& target) {
    Form *presidentialForm = new PresidentialPardonForm(target);
    return presidentialForm;
}

Form* Intern::makeRobotmyRequestForm(std::string const& target) {
    Form *robotmyForm = new RobotomyRequestForm(target);
    return robotmyForm;
}

Form* Intern::makeShrubberyCreationForm(std::string const& target) {
    Form *shrubberyForm = new ShrubberryCreationForm(target);
    return shrubberyForm;
}

Form* Intern::makeForm(std::string const& formType, std::string const& target) {
    functionPtr formPtrs[3] = {&Intern::makeShrubberyCreationForm, &Intern::makeRobotmyRequestForm, &Intern::makePresidentialPardonForm};
    std::string formNames[3] = {"Shruberry form" , "Robotmy request form" ,"Presidential pardon form"};

    for (int i(0); i < 3; i++) {
        if (formNames[i] == formType) { 
            Form *newForm = (this->*formPtrs[i])(target);
            return newForm;
        }
    }
    std::cerr << "Error <Inter ty create a form who doesn't exist>" << std::endl;
    return NULL;
}