#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(): ClapTrap()
{
    std::cout << "Default Constructor FRAG Called" << std::endl;
    this->name = "Teo";
    this->energy = 100;
    this->health = 100;
    this->attack_ = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "Constructor FRAG Called" << std::endl;
    this->energy = 100;
    this->health = 100;
    this->attack_ = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor FRAG Called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap): ClapTrap()
{
    std::cout << "Copy Constructor FRAG Called" << std::endl;
    *this = fragtrap;
}

FragTrap & FragTrap::operator=(const FragTrap &fragtrap)
{
    ClapTrap::operator=(fragtrap);
    std::cout << "Assignation operator FRAG called" << std::endl;
    return *this;
}

void FragTrap::attack(const std::string& target)
{
    if (this->energy != 0)
    {
        std::cout << "CloudTrap " << this->name << " attacks " << target << " causing " << this->attack_ << " points of damage" << std::endl;
        this->energy--;
    }
    else
        std::cout << "Esta muerto" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "HIGH FIVES GUYSSSS" << std::endl;
}