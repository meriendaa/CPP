#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

#include <iostream>

class ClapTrap{
    protected:
        std::string name;
        int health;
        int energy;
        int attack_;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &claptrap);
        ClapTrap & operator =(const ClapTrap &claptrap);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName() const;
        int getHealth() const;
        int getAttack() const;
        int getEnergy() const;
};

#endif