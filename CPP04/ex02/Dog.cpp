#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
    std::cout << "Dog default constructor" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

void Dog::makeSound() const
{
    std::cout << "wof wof" << std::endl;
}
Dog::Dog(const Dog &dog)
{
    std::cout << "Dog copy constructor"  << std::endl;
    this->type = dog.getType();
    *this = dog;
}

Dog::~Dog()
{
    std::cout << "Dog has been destroyed" << std::endl;
    delete this->brain;
}

Brain *Dog::getBrain() const {
    return this->brain;
}

Dog&	Dog::operator=(const Dog& dog)
{
	std::cout << "Dog copy assignment operator called\n";
	this->type = dog.getType();
	this->brain = new Brain(*(dog.getBrain()));
	return *this;
}