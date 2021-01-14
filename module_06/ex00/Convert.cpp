#include "Convert.hpp"

Convert::Convert(std::string str) {
    try {
        this->_str = std::stod(str);
        this->_validArg = true;
    }
    catch (std::invalid_argument &) {
        std::cerr << "Invalid input" << std::endl;
        this->_validArg = false;
    }
    catch (std::out_of_range &) {
        std::cerr << "Input out of range representable by doubles" << std::endl;
        this->_validArg = false;
    }
}

Convert::Convert(Convert const& src) {
    *this = src;
}

Convert::~Convert(void) {}

Convert & Convert::operator=(Convert const& src) {
    this->_str = src._str;
    this->_validArg = src._validArg;
    return *this;
}

void Convert::printToDouble(void) const {
    if (this->_validArg == true) {
        if (this->_str == static_cast<int>(this->_str))
            std::cout << "double: " << this->_str << ".0" << std::endl;
        else
            std::cout << "double: " << this->_str << std::endl;
    }
}

void Convert::printToFloat(void) const {
    if (this->_validArg == true) {
        float tmp = static_cast<float>(this->_str);
        if (tmp == static_cast<int>(this->_str))
            std::cout << "float: " << tmp << ".0f" << std::endl;
        else
            std::cout << "float: " << tmp << "f" << std::endl;
    }
}

void Convert::printToInt(void) const {
    if (this->_validArg == true) {
        if (!std::isfinite(this->_str)) {
            std::cout << "int: impossible" << std::endl;
        }
        else {
            int tmp = static_cast<int>(this->_str);
            std::cout << "int: " << tmp << std::endl;
        }
    }
}

void Convert::printToChar(void) const {
    if (this->_validArg == true) {
        char tmp = static_cast<char>(this->_str);
        if (!std::isfinite(this->_str)) {
            std::cout << "int: impossible" << std::endl;
        }
        else if ((tmp >= 0 && tmp <= 32) || (tmp < 0 || tmp > 126)){
            std::cout << "char: Non displayable" << std::endl;
        }
        else {
            std::cout << "char: " << tmp << std::endl;
        }
    }
}