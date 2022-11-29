#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
    std::cout << "Cat default constructor"<< std::endl ;
    this->type = "Cat";
    this->brain = new Brain();
}
Cat::Cat(const Cat &cat)
{
    std::cout << "Cat copy constructor" << std::endl;
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
    delete this->brain;
}

Brain *Cat::getBrain() const{
    return this->brain;
}

Cat&	Cat::operator=(const Cat& cat)
{
	std::cout << "Cat copy assignment operator called\n";
	this->type = cat.getType();
	this->brain = new Brain(*(cat.getBrain()));
	return *this;
}