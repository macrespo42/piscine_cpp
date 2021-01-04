#include <iostream>
#include <string>
#include <cctype>
#include "PhoneBook.hpp"

PhoneBook   newContact()
{
    std::string     contact[11];

    std::cout << "First name: ";
    getline(std::cin, contact[0]);
    std::cout << "Last name: ";
    getline(std::cin, contact[1]);
    std::cout << "Nickname: ";
    getline(std::cin, contact[2]);
    std::cout << "Login: ";
    getline(std::cin, contact[3]);
    std::cout << "Postal adress: ";
    getline(std::cin, contact[4]);
    std::cout << "Email adress: ";
    getline(std::cin, contact[5]);
    std::cout << "Phone numer: ";
    getline(std::cin, contact[6]);
    std::cout << "Birthday date: ";
    getline(std::cin, contact[7]);
    std::cout << "Favorite meal: ";
    getline(std::cin, contact[8]);
    std::cout << "Underwear color: ";
    getline(std::cin, contact[9]);
    std::cout << "Darkest secret: ";
    getline(std::cin, contact[10]);
    PhoneBook addedContact(contact[0], contact[1], contact[2],contact[3],contact[4],contact[5],contact[6],contact[7],contact[8],contact[9],contact[10]);
    return (addedContact);
}

std::string    truncate(std::string str)
{
    std::string     blank("");
    int             toFill(0);
    if (str.length() < 10)
    {
        toFill = str.length();
        while (toFill++ < 10)
            blank += " ";
        std::cout << blank;
    }
    else
    {
        str.resize(9);
        str += '.';
    }
    return str;
}

void    print_contacts(PhoneBook const contacts[8], int const size)
{
    for (int i(0); i < size; i++)
    {
        std::cout << i << "|";
        std::cout << truncate(contacts[i].getFirstName()) << "|";
        std::cout << truncate(contacts[i].getLastName()) << "|";
        std::cout << truncate(contacts[i].getNickname()) << std::endl;
    }
}

int checkUserInput(std::string userInput)
{
    for (int i(0); userInput.size() - 1; i++)
    {
        if (!isdigit(userInput[i]))
            return 1;
    }
    return 0;
}

int     main(void)
{
    bool            exit(false);
    std::string     command;
    PhoneBook       phonebook[8];
    int             lastContact(0);
    int             index(0);

    std::cout << "Welcome to My awesome phonebook !" << std::endl;
    while (exit == false)
    {
        std::cout << "Enter your command: ";
        getline(std::cin, command);
        if (command == "ADD")
        {
            if (lastContact >= 8)
                std::cout << "Your phonebook is full can't add a new contact." << std::endl;
            else
            {
                std::cout << "Enter the new contact info : " << std::endl;
                phonebook[lastContact] = newContact();
                lastContact++;
            }
        }
        else if (command == "SEARCH")
        {
            print_contacts(phonebook, lastContact);
            std::string userInput;
            std::cout << "Type the index of the contact you want to show: ";
            std::cin >> userInput;
            if (checkUserInput(userInput) == 1)
                std::cout << "Bad user input" << std::endl;
            else {
                index = atoi(userInput.c_str());
                std::cin.ignore();
                if (index <= lastContact && index <= 7)
                    phonebook[index].printAttributes();
                else
                    std::cout << "Bad index... no contact founded" << std::endl;
            }
        }
        else if (command == "EXIT")
            exit = true;
        else
            std::cout << "command not found, available commands are : ADD SEARCH and EXIT" << std::endl;
    }
    return 0;
}