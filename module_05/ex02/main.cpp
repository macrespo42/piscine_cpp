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
        houseTree->execute(boss);

        cesar->beSigned(boss);
        cesar->execute(boss);

        leo->beSigned(boss);
        leo->execute(boss);
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "------------------------------------------------------------------" << std::endl;
    try {
        std::cout << "Sign form with Adam the noob (he is grade 130)" << std::endl;
        std::cout << adam << std::endl;
        cesar->execute(adam);
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    delete houseTree;
    delete cesar;
    delete leo;
    return 0;
}