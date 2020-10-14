#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int     main(void)
{
    bool            exit(false);
    std::string     command;
    PhoneBook       phonebook[8];
    int             lastContact(0);

    std::cout << "Welcome to My awesome phonebook !" << std::endl;
    while (!exit)
    {
        std::cout << "Enter your command : " << std::endl;
        getline(std::cin, command);
        if (command == "ADD")
        {
            // add new contact
        }
        else if (command == "SEARCH")
        {
            // search and print a contact if it exist
        }
        else if (command == "EXIT")
            exit = true;
        else
            std::cout << "command not found, available commands are : ADD SEARCH and EXIT" << std::endl;
    }
    return 0;
}