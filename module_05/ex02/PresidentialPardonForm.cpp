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