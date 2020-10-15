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