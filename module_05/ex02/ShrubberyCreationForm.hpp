#ifndef SHRUBBERRY_CREATION_FORM
#define SHRUBBERRY_CREATION_FORM

#include "Form.hpp"

class ShrubberryCreationForm : public Form {

    public:
        ShrubberryCreationForm(std::string const& target);
        ShrubberryCreationForm(ShrubberryCreationForm const& src);
        ~ShrubberryCreationForm(void);
        ShrubberryCreationForm & operator=(ShrubberryCreationForm const& src);


    private:
        ShrubberryCreationForm(void);
        std::string _target;
};

#endif