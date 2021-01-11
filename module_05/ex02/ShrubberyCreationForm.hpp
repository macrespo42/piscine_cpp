#ifndef SHRUBBERRY_CREATION_FORM
#define SHRUBBERRY_CREATION_FORM

#include "Form.hpp"
#include <fstream>
#include <sstream>

class ShrubberryCreationForm : public Form {

    public:
        ShrubberryCreationForm(std::string const& target);
        ShrubberryCreationForm(ShrubberryCreationForm const& src);
        ~ShrubberryCreationForm(void);
        ShrubberryCreationForm & operator=(ShrubberryCreationForm const& src);
        bool execute(Bureaucrat const& executor) const;
        void action(void) const;


    private:
        ShrubberryCreationForm(void);
        std::string _target;
};

#endif