#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
    this->type = "WrongCat";
}

void WrongCat::makeSound() const
{
    std::cout << "miauWROng" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Wrong Cat has been destroyed" << std::endl;
}