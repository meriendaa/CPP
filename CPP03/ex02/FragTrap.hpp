#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP


#include <iostream>
#include "ClapTrap.hpp"
class FragTrap: public ClapTrap{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &fragtrap);
        FragTrap & operator =(const FragTrap &fragtrap);
        ~FragTrap();
        void attack(const std::string& target);
        void highFivesGuys();
};

#endif