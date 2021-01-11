#include "ShrubberyCreationForm.hpp"

ShrubberryCreationForm::ShrubberryCreationForm(std::string const& target)
    : Form("Shruberry form", 145, 137), _target(target) {}

ShrubberryCreationForm::ShrubberryCreationForm(ShrubberryCreationForm const& src) : Form("Shruberry form", 145, 137)
{
    *this = src;
}

ShrubberryCreationForm::~ShrubberryCreationForm(void) {}

ShrubberryCreationForm & ShrubberryCreationForm::operator=(ShrubberryCreationForm const& src) {
    this->_target = src._target;
    return *this;
}

bool ShrubberryCreationForm::execute(Bureaucrat const& executor) const {
    if (Form::execute(executor) == true) {
        action();
        return true;
    }
    return false;
}

void ShrubberryCreationForm::action(void) const {
    std::stringstream fileName;
    fileName << this->_target;
    fileName << "_shrubbery";
    std::ofstream target(fileName.str().c_str());
    if (target) {
        target << "     .{{}}}}}}." << std::endl;
        target << "    {{{{{{(`)}}}." << std::endl;
        target << "   {{{(`)}}}}}}}}}" << std::endl;
        target << "  }}}}}}}}}{{(`){{{" << std::endl;
        target << "  }}}}{{{{(`)}}{{{{" << std::endl;
        target << " {{{(`)}}}}}}}{}}}}}" << std::endl;
        target << "{{{{{{{{(`)}}}}}}}}}}" << std::endl;
        target << "{{{{{{{}{{{{(`)}}}}}}" << std::endl;
        target << " {{{{{(`)   {{{{(`)}'" << std::endl;
        target << "  `\"\"'\" |   | \"'\"'`" << std::endl;
        target << "  (`)   /     \\" << std::endl;
        target << " ~~~~~~~~~~~~~~~~~~~" << std::endl;
        target.close();
    }
    else
        return ;
}