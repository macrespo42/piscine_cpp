#include "Convert.hpp"

Convert::Convert(std::string str) {
    try {
        this->_str = std::stod(str);
        std::cout << this->_str;
    }
    catch (std::invalid_argument &) {
        std::cerr << "Invalid input" << std::endl;
    }
    catch (std::out_of_range &) {
        std::cerr << "Input out of range representable by doubles" << std::endl;
    }
}

Convert::Convert(Convert const& src) {
    *this = src;
}

Convert::~Convert(void) {}

Convert & Convert::operator=(Convert const& src) {
    this->_str = src._str;
    return *this;
}