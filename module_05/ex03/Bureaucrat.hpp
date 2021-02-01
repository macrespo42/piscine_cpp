#ifndef BUREAUCRAT
#define BUREAUCRAT

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;
class Bureaucrat {

    public:

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw()
                {
                    return "Error <grade is to high>";
                }
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw()
                {
                    return "Error <grade is to low>";
                }
        };

        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const& src);
        ~Bureaucrat(void);
        Bureaucrat & operator=(Bureaucrat const& src);
        std::string const getName(void) const;
        int getGrade(void) const;
        void incGrade(void);
        void decGrade(void);
        void signForm(int formGrade, std::string const& formName) const;
        void executeForm(Form const& form) const;

    private:
        std::string const _name;
        int _grade;
};

std::ostream & operator<<(std::ostream &os, Bureaucrat const& bureaucrat);

#endif