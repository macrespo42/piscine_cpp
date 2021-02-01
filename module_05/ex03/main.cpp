#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void) {
    Bureaucrat boss("Boss", 1);
    Intern someRandomIntern;

    Form * houseTree = someRandomIntern.makeForm("Shruberry form", "House");
    Form * cesar = someRandomIntern.makeForm("Presidential pardon form" ,"Cesar");
    Form * leo = someRandomIntern.makeForm("Robotmy request form" ,"Leo");
    
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

    Form * error = someRandomIntern.makeForm("Dominate the world" ,"Gilbert");

    delete error;
    delete houseTree;
    delete cesar;
    delete leo;
    return 0;
}