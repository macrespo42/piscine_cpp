#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{

}
PhoneBook::PhoneBook(std::string const firstName, std::string const lastName, std::string const nickname, std::string const login, std::string const postalAdress,
 std::string const emailAdress, std::string const phoneNumber, std::string const birthday, std::string const favoriteMeal, std::string const underwearColor,
 std::string const darkestSecret) :
    _firstName(firstName), _lastName(lastName), _nickname(nickname), _login(login), _postalAdress(postalAdress), _emailAdress(emailAdress),
    _phoneNumber(phoneNumber), _birthday(birthday), _favoriteMeal(favoriteMeal), _underwearColor(underwearColor), _darkestSecret(darkestSecret)
{

}

void    PhoneBook::printAttributes(void) const {
    std::cout << "First name: " << this->_firstName << std::endl;
    std::cout << "Last name: " << this->_lastName << std::endl;
    std::cout << "Nickname: " << this->_nickname << std::endl;
    std::cout << "Login: " << this->_login << std::endl;
    std::cout << "Postal adress: " << this->_postalAdress << std::endl;
    std::cout << "Email adress: " << this->_emailAdress << std::endl;
    std::cout << "Phone number: " << this->_phoneNumber << std::endl;
    std::cout << "Birthday: " << this->_birthday << std::endl;
    std::cout << "Favorite meal: " << this->_favoriteMeal << std::endl;
    std::cout << "Uderwear color: " << this->_underwearColor << std::endl;
    std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
}

std::string    PhoneBook::getFirstName(void) const
{
    return this->_firstName;
}

std::string    PhoneBook::getLastName(void) const
{
    return this->_lastName;
}

std::string    PhoneBook::getNickname(void) const
{
    return this->_nickname;
}