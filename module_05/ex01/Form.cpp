#include "Form.hpp"

Form::Form(std::string const& name, int signedGrade, int execGrade) : _name(name), _signedGrade(signedGrade), _execGrade(execGrade), _signed(false) {
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

Form::Form(Form const& src) : _name(src.getName()), _signedGrade(src.getSignedGrade()), _execGrade(src.getExecGrade()), _signed(src.getSigned())
{
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

Form::~Form(void) {}

Form & Form::operator=(Form const& src) {
    this->_signed = src._signed;
    return *this;
}

std::string const Form::getName(void) const {
    return this->_name;
}

bool Form::getSigned(void) const {
    return this->_signed;
}

int const Form::getSignedGrade(void) const {
    return this->_signedGrade;
}

int const Form::getExecGrade(void) const {
    return this->_execGrade;
}

void Form::beSigned(Bureaucrat const& signer) {
    try {
        if (signer.getGrade() <= this->_signedGrade)
            this->_signed = true;
        else 
            throw Form::GradeTooLowException();
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

std::ostream & operator<<(std::ostream & os, Form const& src)
{
    os << "Form : "  << src.getName() << std::endl;
    os << "Signed : " << std::endl;
    os << "Bureaucrat grade required for sign : " << src.getSignedGrade() << std::endl;
    os << "Bureaucrat grade required for execute : " << src.getExecGrade() << std::endl;
    return os;
}