#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat: public Animal{
    public:
        Cat();
        Cat(const Cat &cat);
        ~Cat();
        virtual void makeSound() const;
};

#endif