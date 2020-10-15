#ifndef DEF_PHONEBOOK
#define DEF_PHONEBOOK

#include <iostream>
#include <string>

class PhoneBook
{

    public:

    PhoneBook();
    PhoneBook(std::string const firstName, std::string const lastName, std::string const nickname, std::string const login, std::string const postalAdress,
     std::string const emailAdress, std::string const phoneNumber, std::string const birthday, std::string const favoriteMeal,
     std::string const underwearColor, std::string const darkestSecret);
    void           printAttributes(void) const;
    std::string    getFirstName(void) const;
    std::string    getLastName(void) const;
    std::string    getNickname(void) const;

    private:

    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _login;
    std::string _postalAdress;
    std::string _emailAdress;
    std::string _phoneNumber;
    std::string _birthday;
    std::string _favoriteMeal;
    std::string _underwearColor;
    std::string _darkestSecret;
};

#endif