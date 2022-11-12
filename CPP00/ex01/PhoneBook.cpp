#include <iostream>
#include <iomanip> 
#include "phonebook.hpp"
#include "contact.hpp"

PhoneBook::PhoneBook()
{
    this->size = 0;
}

int PhoneBook::addContact()
{
    if (this->size == 8)
    {
        std::cout << "PhoneBook is full..." << std::endl;
        return (1);
    }
    contacts[this->size].readInput();
    this->size++;
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
    int loop = 0;
    
    do{
        if (loop != 0)
            std::cout << "The given index is not valid!" << std::endl;
        std::cout << "Enter the index [0-7]" << std::endl;
		std::cout << "> ";
		std::getline(std::cin, index_str);
		std::cout << std::endl;
		loop++;

    }while(index_str.size() != 1);
    index = atoi(index_str.c_str());
    contacts[index].printContact();
}