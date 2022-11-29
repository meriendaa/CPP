#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
	{
		const Animal*	dog = new Dog();
		const Animal*	cat = new Cat();
        
		delete dog;
		delete cat;
	}
    std::cout<< std::endl;
	{
	 	Dog	dog;

		dog.getBrain()->setIdea(0, "TU PEEEERRRRo");
		std::cout << dog.getBrain()->getIdea(0) << std::endl;
	}
    std::cout<< std::endl;
    {
	 	Cat	cat;
        
		cat.getBrain()->setIdea(0, "MIAUU que flipassss");
		std::cout << cat.getBrain()->getIdea(0) << std::endl;
	}

}