#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void) {
    Bureaucrat adam("Adam", 130);
    Bureaucrat boss("Boss", 1);

    std::cout << adam;
    Form * houseTree = new ShrubberryCreationForm("House");
    houseTree->beSigned(adam);
    houseTree->execute(adam);

    Form * cesar = new PresidentialPardonForm("Cesar");

    cesar->beSigned(boss);
    cesar->execute(boss);

    Form * leo = new RobotomyRequestForm("Leo");

    leo->beSigned(boss);
    leo->execute(boss);

    delete houseTree;
    return 0;
}