#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
    this->type = "Dog";
}

void Dog::makeSound() const
{
    std::cout << "wof wof" << std::endl;
}
Dog::Dog(const Dog &dog)
{
    this->type = dog.getType();
    *this = dog;
}

Dog::~Dog()
{
    std::cout << "Dog has been destroyed" << std::endl;
}