#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &wrongAnimal);
        WrongAnimal & operator =(const WrongAnimal &wrongAnimal);
        virtual ~WrongAnimal();
        virtual void makeSound() const;
        std::string getType() const;
};

#endif