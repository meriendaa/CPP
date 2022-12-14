#include  <iostream>
#include <iomanip> 
#include "Phonebook.hpp"
#include "Contact.hpp"

void Contact::readInput()
{
    std::cout << "Enter the First Name: " << std::endl;
    std::getline(std::cin, this->firstName);
    std::cout << "Enter the Last Name: " << std::endl;
    std::getline(std::cin, this->lasttName);
    std::cout << "Enter the Nick Name: " << std::endl;
    std::getline(std::cin, this->nickName);    
    std::cout << "Enter the Phone Num: " << std::endl;
    std::getline(std::cin, this->phoneNum);
    std::cout << "Enter the DarkestSecret: " << std::endl;
    std::getline(std::cin, this->darkestSecret);

}
void Contact::shortPrint(int index) const{
    std::cout << "|" << std::setw(10) << index;
    std::cout << "|" << std::setw(10);
    if (this->firstName.size() > 10)
        std::cout << this->firstName.substr(0, 9) + ".";
    else
        std::cout << this->firstName;
    std::cout << "|" << std::setw(10);
    if (this->lasttName.size() > 10)
        std::cout << this->lasttName.substr(0, 9) + ".";
    else
        std::cout << this->lasttName;
    std::cout << "|" << std::setw(10);
    if (this->nickName.size() > 10)
        std::cout << this->nickName.substr(0, 9) + ".";
    else
        std::cout << this->nickName;
    std::cout << "|" << std::endl;
}
void Contact::printContact() const{
    std::cout << "First Name: " + this->firstName << std::endl;
    std::cout << "Last Name: " + this->lasttName << std::endl;
    std::cout << "Nick Name: " + this->nickName << std::endl;
    std::cout << "Phone Num: " + this->phoneNum << std::endl;
    std::cout << "DarkestSecrets: " + this->darkestSecret << std::endl;
}

std::string Contact::getFirstName() const {
    return (this->firstName);
}
std::string Contact::getLastName() const {
    return (this->lasttName);
}
std::string Contact::getNickName() const {
    return (this->nickName);
}
std::string Contact::getPhoneNum() const {
    return (this->phoneNum);
}
std::string Contact::getDarkestSecret() const {
    return (this->darkestSecret);
}
