#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const& target)
    : Form("Presidential pardon form", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src) 
    : Form("Presidential pardon form", 25, 5) {
        *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const& src) {
    this->_target = src._target;
    return *this;
}

bool PresidentialPardonForm::execute(Bureaucrat const& executor) const {
    if (Form::execute(executor)) {
        action();
        return true;
    }
    return false;
}

void PresidentialPardonForm::action(void) const {
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}