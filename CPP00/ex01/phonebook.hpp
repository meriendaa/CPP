#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"

class PhoneBook {
    private:
        Contact contacts[8];
        int size;
    public:
        PhoneBook();
        ~PhoneBook();
        int addContact();
        void askForInd() const;
        void searchCont() const;
};

#endif