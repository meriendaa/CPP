#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Phonebook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
    this->size = 0;
} 

int PhoneBook::addContact()
{

    if (this->size >= 8)
    {
        contacts[0].shortPrint(0);
        for (int i = 0; i < 7; i++)
        {
            contacts[i] = contacts[i + 1];
        }
        contacts[7].readInput();
        return (1);
    }
    if (this->size < 8)
    {
        contacts[this->size].readInput();
        this->size++;
    }
    return (0);
}

void PhoneBook::searchCont() const{
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "|" << std::setw(10) << "index";
    std::cout << "|" << std::setw(10) << "First Name";
    std::cout << "|" << std::setw(10) << "Last name";
    std::cout << "|" << std::setw(10) << "NickName" << "|" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    for (int i = 0; i < this->size; i++)
    {
        contacts[i].shortPrint(i);
        std::cout << "--------------------------------------------------------" << std::endl;
    }
}

void PhoneBook::askForInd() const{
    std::string index_str;
    int index = 0;
    int loop = 1;

    if (this->size == 0)
    {
        std::cout << "PHONEBOOK IS EMPTY" << std::endl;
        
    }else{
        while(loop == 1)
        {
            std::cout << "Enter the index [0-7]" << std::endl;
            std::cout << "> ";
            std::getline(std::cin, index_str);
            if (index_str.length() > 1 || !std::isdigit(index_str[0]))
                loop = 1;
            else{
                std::cout << std::endl;
                index = atoi(index_str.c_str());
                if (index < this->size)
                    loop = 0;
            }
        }
    contacts[index].printContact();
    }

}