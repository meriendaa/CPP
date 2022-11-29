#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
    this->type = "Cat";
}
Cat::Cat(const Cat &cat)
{
    this->type = cat.getType();
    *this = cat;
}

void Cat::makeSound() const
{
    std::cout << "miau" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat has been destroyed" << std::endl;
}