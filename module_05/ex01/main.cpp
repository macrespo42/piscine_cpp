#include "Bureaucrat.hpp"

int main(void) {
    Bureaucrat adam("Adam", 10);
    Bureaucrat roro("Robert", 167);

    std::cout << adam;
    adam.incGrade();
    adam.incGrade();
    std::cout << adam;
    adam.decGrade();
    std::cout << adam;
    return 0;
}