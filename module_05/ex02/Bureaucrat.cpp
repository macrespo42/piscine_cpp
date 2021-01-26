#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Unknow"), _grade(150) {

}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
    try {
        if (this->_grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (this->_grade < 1)
            throw Bureaucrat::GradeTooHighException();
    }
    catch (Bureaucrat::GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
        this->_grade = 150;
    }
    catch (Bureaucrat::GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
        this->_grade = 1;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const& src) {
    *this = src;
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const& src) {
    this->_grade = src._grade;
    return *this;
}

std::string const Bureaucrat::getName(void) const {
    return this->_name;
}

int Bureaucrat::getGrade(void) const {
    return this->_grade;
}

void Bureaucrat::incGrade(void) {
    if (this->_grade > 1)
        this->_grade -= 1;
    else
        throw GradeTooHighException();
}

void Bureaucrat::decGrade(void) {
    if (this->_grade < 150)
        this->_grade += 1;
    else
        throw GradeTooLowException();
}

std::ostream & operator<<(std::ostream &os, Bureaucrat const& bureaucrat) {
    os << "<" << bureaucrat.getName() << ">, bureaucrat grade <" << bureaucrat.getGrade() << ">" << std::endl;
    return os;
}

void Bureaucrat::signForm(int formGrade, std::string const& formName) const {
    if (formGrade >= this->_grade)
        std::cout << "<" << this->_name << "> signs <" << formName <<">" << std::endl;
    else
        std::cout << "<" << this->_name << "> can't signs <" << formName <<">" << "because it got to high grade for him" << std::endl;
}