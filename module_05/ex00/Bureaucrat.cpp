#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Unknow"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {}

Bureaucrat::Bureaucrat(Bureaucrat const& src) {
    *this = src;
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const& src) {
    // this->_name = src._name;
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
}

void Bureaucrat::decGrade(void) {
    if (this->_grade < 150)
        this->_grade += 1;
}

std::ostream & operator<<(std::ostream &os, Bureaucrat const& bureaucrat) {
    os << "<" << bureaucrat.getName() << ">, bureaucrat grade <" << bureaucrat.getGrade() << ">" << std::endl;
    return os;
}