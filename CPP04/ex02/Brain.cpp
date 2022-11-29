#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
    std::cout << "Brain default constructor" << std::endl;
}
Brain::Brain(const Brain &brain)
{
    std::cout << "Copy Brain constructor" << std::endl;
    *this = brain;
}

Brain::~Brain()
{
    std::cout << "Brain destructor" << std::endl;
}

void Brain::setIdea(int i, std::string idea)
{
    this->ideas[i] = idea;
}

std::string Brain::getIdea(int i) const
{
    return this->ideas[i];
}

Brain & Brain::operator=(const Brain &brain)
{
    for (int i = 0; i < MAX_ID; i++)
    {
        this->ideas[i] = brain.getIdea(i);
    }
    return *this;
    
}