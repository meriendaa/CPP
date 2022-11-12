#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
class Contact {
    private:
        std::string firstName;
        std::string lasttName;
        std::string nickName;
        std::string phoneNum;
        std::string darkestSecret;
        
    public:
        void readInput();
        void shortPrint(int index) const;
        void printContact() const;
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickName() const;
        std::string getPhoneNum() const;
        std::string getDarkestSecret() const;
};

#endif