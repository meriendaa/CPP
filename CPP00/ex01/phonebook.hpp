#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook {
    private:
        Contact contacts[8];
        int size;
    public:
        PhoneBook();
        int addContact();
        void searchCont() const;
        void askForInd() const;
        
};

#endif