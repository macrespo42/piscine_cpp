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

    class FormNotSigned : public std::exception {
        public:
            virtual const char* what() const throw()
            {
                return "Error <form is not signed>";
            }
    };
        Form(std::string const& name, int signedGrade, int execGrade);
        Form(Form const& src);
        virtual ~Form(void);
        Form & operator=(Form const& src);
        void beSigned(Bureaucrat const& signer);
        std::string getName(void) const;
        bool getSigned(void) const;
        int getSignedGrade(void) const;
        int getExecGrade(void) const;
        virtual bool execute(Bureaucrat const& executor) const;
        virtual void action(void) const = 0;

    private:
        std::string const _name;
        bool _signed;
        int const _signedGrade;
        int const _execGrade;
        Form(void);
};

std::ostream & operator<<(std::ostream & os, Form const& src);

#endif