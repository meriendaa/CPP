#include <iostream>
#include <iomanip> 
#include "phonebook.hpp"
#include "contact.hpp"

std::string readLine()
{
    std::string str;
    std::cout << "Enter Command ADD|SEARCH|EXIT: " << std::endl;
    std::cout << "-> ";
    std::getline(std::cin, str);
    return (str);
}


int main()
{
    PhoneBook phb;
    std::string cmd;

    while (42)
    {
        cmd = readLine();
        if(cmd.compare("ADD") == 0)
            phb.addContact();
        else if(cmd.compare("SEARCH") == 0)
        {
            phb.searchCont();
            phb.askForInd();
        }
            
        else if(cmd.compare("EXIT") == 0)
            //exit;
            break ;
    }
}