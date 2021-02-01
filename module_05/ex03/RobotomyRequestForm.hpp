#ifndef ROBOTOTMY_REQUEST_FORM
#define ROBOTOTMY_REQUEST_FORM

#include "Form.hpp"

class RobotomyRequestForm : public Form {
    public:
        RobotomyRequestForm(std::string const& target);
        RobotomyRequestForm(RobotomyRequestForm const& src);
        ~RobotomyRequestForm(void);
        RobotomyRequestForm & operator=(RobotomyRequestForm const& src);
        void action(void) const;

    private:
        RobotomyRequestForm(void);
        std::string _target;
};

#endif