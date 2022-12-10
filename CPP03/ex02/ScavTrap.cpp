#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "Default Constructor SCAV Called" << std::endl;
    this->name = "Teo";
    this->energy = 100;
    this->health = 50;
    this->attack_ = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "Constructor SCAV Called" << std::endl;
    this->energy = 100;
    this->health = 50;
    this->attack_ = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor SCAV Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap): ClapTrap()
{
    std::cout << "Copy Constructor SCAV Called" << std::endl;
    *this = scavtrap;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &scavtrap)
{
    ClapTrap::operator=(scavtrap);
    std::cout << "Assignation operator SCAV called" << std::endl;
    return *this;
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in gate keeper mode\n";
}

void ScavTrap::attack(const std::string& target)
{
    if (this->energy != 0)
    {
        std::cout << "SCAV " << this->name << " attacks " << target << " causing " << this->attack_ << " points of damage" << std::endl;
        this->energy--;
    }
    else
        std::cout << "Esta muerto" << std::endl;
}
