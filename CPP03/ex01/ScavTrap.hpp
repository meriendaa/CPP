#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP


#include <iostream>
#include "ClapTrap.hpp"
class ScavTrap: public ClapTrap{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &scavtrap);
        ScavTrap & operator =(const ScavTrap &scavtrap);
        ~ScavTrap();
        void guardGate();
        void attack(const std::string& target);

};

#endif