#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor Called" << std::endl;
    this->name = "Teo";
    this->energy = 10;
    this->health = 10;
    this->attack_ = 1;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructor Called" << std::endl;
    this->name = name;
    this->energy = 10;
    this->health = 10;
    this->attack_ = 1;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
    std::cout << "Copy Constructor Called" << std::endl;
    *this = claptrap;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor Called" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &claptrap)
{
    std::cout << "Assignation operator called" << std::endl;
    this->name = claptrap.getName();
    this->energy = claptrap.getEnergy();
    this->health = claptrap.getHealth();
    this->attack_ = claptrap.getAttack();
    return *this;
}


std::string ClapTrap::getName() const
{
    return this->name;
}

int ClapTrap::getEnergy() const
{
    return this->energy;
}

int ClapTrap::getAttack() const
{
        return this->attack_;

}

int ClapTrap::getHealth() const
{
    return this->health;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energy != 0)
    {
        std::cout << "CloudTrap " << this->name << " attacks " << target << " causing " << this->attack_ << " points of damage" << std::endl;
        this->energy--;
    }
    else
        std::cout << "Esta muerto" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->health -= amount;
	std::cout << "ClapTrap " << this->name << " take " << amount << " damage"<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->energy += amount;
    this->energy--;
    std::cout << "ClapTrap " << this->name << " take " << amount << " of repair"<< std::endl;
}