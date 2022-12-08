#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name): name(name){}

Zombie::Zombie()
{
    
}
Zombie::~Zombie()
{
    std::cout << this->name << " Me mueroooo" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}