#include <iostream>
#include "Animal.hpp"

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "Animal Sound" << std::endl;
}
Animal::~Animal(void)
{
    std::cout << "Destructor ANIMAL Called" << std::endl;
}