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

