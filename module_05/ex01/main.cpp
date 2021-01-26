#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
    Bureaucrat adam("Adam", 10);
    std::cout << adam;

    std::cout << "------------------------------------------------------------------" << std::endl;
    try {
        std::cout << "Try create two form with correc grade and signed it with Adam" << std::endl;
        Form vaccineCovid19("covid19 5g mission", 5, 5);
        std::cout << vaccineCovid19 << std::endl;
        vaccineCovid19.beSigned(adam);
        std::cout << "------------------------------------------------------------------" << std::endl;
        Form poo("use toilet", 123, 150);
        std::cout << poo << std::endl;
        poo.beSigned(adam);
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "------------------------------------------------------------------" << std::endl;
    try {
        std::cout << "Try create a form with to high grade" << std::endl;
        Form toHigh("error test", 0, 150);
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "------------------------------------------------------------------" << std::endl;
    try {
        std::cout << "Try create a form with to low grade" << std::endl;
        Form toLow("error test", 156, 150);
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}