#include "Form.hpp"

Form::Form(std::string const& name, int signedGrade, int execGrade) : _name(name), _signed(false), _signedGrade(signedGrade), _execGrade(execGrade) {
    if (this->_signedGrade > 150 || this->_execGrade > 150)
        throw Form::GradeTooLowException();
    else if (this->_signedGrade < 1 || this->_execGrade < 1)
        throw Form::GradeTooHighException();
} 

Form::Form(Form const& src) : _name(src.getName()), _signed(src.getSigned()), _signedGrade(src.getSignedGrade()), _execGrade(src.getExecGrade())
{
    if (this->_signedGrade > 150 || this->_execGrade > 150)
        throw Form::GradeTooLowException();
    else if (this->_signedGrade < 1 || this->_execGrade < 1)
        throw Form::GradeTooHighException();
}

Form::~Form(void) {}

Form & Form::operator=(Form const& src) {
    this->_signed = src._signed;
    return *this;
}

std::string Form::getName(void) const {
    return this->_name;
}

bool Form::getSigned(void) const {
    return this->_signed;
}

int Form::getSignedGrade(void) const {
    return this->_signedGrade;
}

int Form::getExecGrade(void) const {
    return this->_execGrade;
}

void Form::beSigned(Bureaucrat const& signer) {
    try {
        signer.signForm(this->_signedGrade, this->_name);
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
    if (src.getSigned())
        os << "Signed : True" << std::endl;
    else
        os << "Signed : False" << std::endl;
    os << "Bureaucrat grade required for sign : " << src.getSignedGrade() << std::endl;
    os << "Bureaucrat grade required for execute : " << src.getExecGrade() << std::endl;
    return os;
}

bool Form::execute(Bureaucrat const& executor) const {
    try {
        if (this->_signed == false)
            throw Form::FormNotSigned();
        else if (this->_execGrade < executor.getGrade())
            throw Form::GradeTooLowException();
        return true;
    }
    catch(std::exception& e) {
        std::cout << e.what() << std::endl;
        return false;
    }
}