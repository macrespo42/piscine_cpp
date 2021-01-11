#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
    Bureaucrat adam("Adam", 10);
    Bureaucrat roro("Robert", 167);

    std::cout << adam;
    adam.incGrade();
    adam.incGrade();
    std::cout << adam;
    adam.decGrade();
    std::cout << adam;

    Form vaccineCovid19("covid19 5g mission", 5, 1);
    Form poo("use toilet", 123, 150);
    Form toHigh("error test", 0, 150);
    Form toLow("error test", 156, 150);
    
    vaccineCovid19.beSigned(adam);
    poo.beSigned(adam);
    return 0;
}