#include "Convert.hpp"

Convert::Convert(std::string str) {
    try {
        this->_str = std::stod(str);
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

void Convert::printToDouble(void) const {
    std::cout << "double: " << this->_str << std::endl;
}

void Convert::printToFloat(void) const {
    float tmp = static_cast<float>(this->_str);
    std::cout << "float: " << tmp << "f" << std::endl;
}

void Convert::printToInt(void) const {
    int tmp = static_cast<int>(this->_str);
    std::cout << "int: " << tmp << std::endl;
}

void Convert::printToChar(void) const {
    char tmp = static_cast<char>(this->_str);
    std::cout << "char: " << tmp << std::endl;
}