#include "Bureaucrat.hpp"

int main(void) {
    Bureaucrat adam("Adam", 10);
    std::cout << "Try create Bureaucrat with grade 167 :" << std::endl;
    Bureaucrat roro("Robert", 167);
    std::cout << "Try create Bureaucrat with grade 0 :" << std::endl;
    Bureaucrat sisi("Robert", 0);

    std::cout << "------------------------------------------------------------------" << std::endl;
    try {
        std::cout << adam;
        std::cout << "Try increment :" << std::endl;
        adam.incGrade();
        std::cout << adam;
        std::cout << "Try decrement :" << std::endl;
        adam.decGrade();
        std::cout << adam;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "------------------------------------------------------------------" << std::endl;
    try {
        std::cout << "Try decrement with a grade at 150:" << std::endl;
        Bureaucrat isabelle("Isa", 150);
        std::cout << isabelle;
        isabelle.decGrade();
        std::cout << isabelle;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "------------------------------------------------------------------" << std::endl;
    try {
        Bureaucrat manon("Manon", 1);
        std::cout << manon;
        std::cout << "Try increment with a grade at 1:" << std::endl;
        manon.incGrade();
        std::cout << manon;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}