#ifndef DEF_PHONEBOOK
#define DEF_PHONEBOOK

#include <string>

class PhoneBook
{

    public:

    PhoneBook();
    PhoneBook(std::string const firstName, std::string const lastName, std::string const nickname, std::string const login, std::string const postalAdress,
     std::string const emailAdress, std::string const phoneNumber, std::string const birthday, std::string const favoriteMeal,
     std::string const underwearColor, std::string const darkestSecret);

    private:

    std::string const     _firstName;
    std::string const     _lastName;
    std::string const     _nickname;
    std::string const     _login;
    std::string const     _postalAdress;
    std::string const     _emailAdress;
    std::string const     _phoneNumber;
    std::string const     _birthday;
    std::string const     _favoriteMeal;
    std::string const     _underwearColor;
    std::string const     _darkestSecret;
};

#endif