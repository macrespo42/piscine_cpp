#ifndef BUREAUCRAT
#define BUREAUCRAT

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat {

    public:

        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const& src);
        ~Bureaucrat(void);
        Bureaucrat & operator=(Bureaucrat const& src);
        std::string const getName(void) const;
        int getGrade(void) const;
        void incGrade(void);
        void decGrade(void);

    private:
        std::string const _name;
        int _grade;
};

std::ostream & operator<<(std::ostream &os, Bureaucrat const& bureaucrat);

#endif