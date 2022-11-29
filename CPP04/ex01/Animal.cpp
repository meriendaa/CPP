#include <iostream>
#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Default";
}

Animal::Animal(const Animal &animal)
{
    this->type = animal.getType();
    *this = animal;
}

Animal & Animal::operator=(const Animal &animal)
{
    this->type = animal.getType();
    return *this;
}

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