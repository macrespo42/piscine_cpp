#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void) {
    Bureaucrat adam("Adam", 130);
    Bureaucrat boss("Boss", 1);

    Form * houseTree = new ShrubberryCreationForm("House");
    Form * cesar = new PresidentialPardonForm("Cesar");
    Form * leo = new RobotomyRequestForm("Leo");

    try {
        std::cout << "Sign form with the boss (he is grade 1)" << std::endl;
        std::cout << boss;

        houseTree->beSigned(boss);
        boss.executeForm(*houseTree);

        cesar->beSigned(boss);
        boss.executeForm(*cesar);

        leo->beSigned(boss);
        boss.executeForm(*leo);
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "------------------------------------------------------------------" << std::endl;
    try {
        std::cout << "Sign form with Adam the noob (he is grade 130)" << std::endl;
        std::cout << adam;
        adam.executeForm(*cesar);
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    delete houseTree;
    delete cesar;
    delete leo;
    return 0;
}