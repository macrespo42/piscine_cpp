#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
    Bureaucrat adam("Adam", 150);
    Bureaucrat roro("Robert", 167);

    std::cout << adam;
    Form * houseTree = new ShrubberryCreationForm("House");
    houseTree->beSigned(adam);
    houseTree->execute(adam);

    delete houseTree;
    return 0;
}