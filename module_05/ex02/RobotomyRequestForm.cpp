#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const& target)
    : Form("Robotmy request form", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src)
    : Form("Robotmy request form", 72, 45) {
        *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const& src) {
    this->_target = src._target;
    return *this;
}

bool RobotomyRequestForm::execute(Bureaucrat const& executor) const {
    if (Form::execute(executor)) {
        action();
        return true;
    }
    std::cout << "Can't robotomized..." << std::endl;
    return false;
}

void RobotomyRequestForm::action(void) const {
    std::cout << "brrzzzz BRRZZZZ" << std::endl;
    std::cout << this->_target << " has been robotomized" << std::endl;
}