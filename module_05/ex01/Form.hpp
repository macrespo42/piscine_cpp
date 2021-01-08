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
        void beSigned(Bureaucrat const& signer);
        std::string getName(void) const;
        bool getSigned(void) const;
        int getSignedGrade(void) const;
        int getExecGrade(void) const;

    private:
        std::string const _name;
        bool _signed;
        int const _signedGrade;
        int const _execGrade;
        Form(void);
};

std::ostream & operator<<(std::ostream & os, Form const& src);

#endif