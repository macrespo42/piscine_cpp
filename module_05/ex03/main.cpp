#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void) {
    Bureaucrat adam("Adam", 130);
    Bureaucrat boss("Boss", 1);
    Intern someRandomIntern;

    std::cout << adam;
    Form * houseTree = someRandomIntern.makeForm("Shruberry form", "House");
    houseTree->beSigned(adam);
    houseTree->execute(adam);

    Form * cesar = someRandomIntern.makeForm("Presidential pardon form" ,"Cesar");

    cesar->beSigned(boss);
    cesar->execute(boss);

    Form * leo = someRandomIntern.makeForm("Robotmy request form" ,"Leo");

    leo->beSigned(boss);
    leo->execute(boss);

    delete houseTree;
    return 0;
}