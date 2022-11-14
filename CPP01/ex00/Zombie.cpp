#include <iostream>
#include "zombie.hpp"

Zombie::Zombie(std::string name): name(name){}

Zombie::~Zombie()
{
    std::cout << this->name << " Me mueroooo" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}



