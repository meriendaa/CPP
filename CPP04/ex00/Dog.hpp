#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog: public Animal{
    public:
        Dog();
        ~Dog();
        Dog(const Dog &dog);
        virtual void makeSound() const;
};

#endif