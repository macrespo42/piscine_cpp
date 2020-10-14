#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{

}
PhoneBook::PhoneBook(std::string firstName, std::string lastName, std::string nickname, std::string login, std::string postalAdress, std::string emailAdress, std::string phoneNumber, std::string birthday, std::string favoriteMeal, std::string underwearColor, std::string darkestSecret) : m_firstName(firstName), m_lastName(lastName), m_nickname(nickname), m_login(login), m_postalAdress(postalAdress), m_emailAdress(emailAdress), m_phoneNumber(phoneNumber), m_birthday(birthday), m_favoriteMeal(favoriteMeal), m_underwearColor(underwearColor), m_darkestSecret(darkestSecret)
{

}