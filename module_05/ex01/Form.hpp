#ifndef FORM
#define FORM

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Form {

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
        Form(std::string const& name, int signedGrade, int execGrade);
        Form(Form const& src);
        ~Form(void);
        Form & operator=(Form const& src);
        std::string const getName(void) const;
        bool const getSigned(void) const;
        int const getSignedGrade(void) const;
        int const getExecGrade(void) const;

    private:
        std::string const _name;
        bool _signed;
        int const _signedGrade;
        int const _execGrade;
        Form(void);
};

#endif