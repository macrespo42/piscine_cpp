#include "Form.hpp"

Form::Form(std::string const& name, int signedGrade int execGrade) : _name(name), _signedGrade(signedGrade), execGrade(_execGrade), _signed(false) {
    try {
        if (this->_signedGrade > 150 || this->_execGrade > 150)
            throw Form::GradeTooLowException();
        else if (this->_signedGrade < 1 || this->_execGrade < 1)
            throw Form::GradeTooHighException();
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
} 

Form::Form(Form const& src) {
    *this = src;
}

Form::~Form(void) {}

Form & Form::operator=(Form const& src) {
    this->_signed = src._signed;
    return *this;
}

std::string const Form::getName(void) const {
    return this->_name;
}

bool const Form::getSigned(void) const {
    return this->_signed
}

int const Form::getSignedGrade(void) const {
    return this->_signedGrade;
}

int const Form::getExecGrade(void) const {
    return this->_execGrade;
}