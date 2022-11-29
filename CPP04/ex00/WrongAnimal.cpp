#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "Default";
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal)
{
    this->type = wrongAnimal.getType();
    *this = wrongAnimal;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
    this->type = wrongAnimal.getType();
    return *this;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal has been destroyed" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong Animal Sound" << std::endl;
}