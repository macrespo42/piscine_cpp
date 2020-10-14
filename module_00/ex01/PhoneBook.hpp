#ifndef DEF_PHONEBOOK
#define DEF_PHONEBOOK

#include <string>

class PhoneBook
{

    public:

    PhoneBook();
    PhoneBook(std::string firstName, std::string lastName, std::string nickname, std::string login, std::string postalAdress, std::string emailAdress, std::string phoneNumber, std::string birthday, std::string favoriteMeal, std::string underwearColor, std::string darkestSecret);

    private:

    std::string     m_firstName;
    std::string     m_lastName;
    std::string     m_nickname;
    std::string     m_login;
    std::string     m_postalAdress;
    std::string     m_emailAdress;
    std::string     m_phoneNumber;
    std::string     m_birthday;
    std::string     m_favoriteMeal;
    std::string     m_underwearColor;
    std::string     m_darkestSecret;
};

#endif