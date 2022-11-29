#ifndef BRAIN_HPP
# define BRAIN_HPP

# define MAX_ID 100
#include <iostream>
class Brain{
    private:
        std::string ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(const Brain &brain);
        Brain & operator =(const Brain &brain);
        void setIdea(int i, std::string idea);
        std::string getIdea(int i) const;

};

#endif