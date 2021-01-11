#ifndef PRESIDENTIAL_PARDON_FORM
#define PRESIDENTIAL_PARDON_FORM

#include "Form.hpp"

class PresidentialPardonForm : public Form {

    public:
        PresidentialPardonForm(std::string const& target);
        PresidentialPardonForm(PresidentialPardonForm const& src);
        ~PresidentialPardonForm(void);
        PresidentialPardonForm & operator=(PresidentialPardonForm const& src);

    private:
        PresidentialPardonForm(void);
        std::string _target;
};

#endif