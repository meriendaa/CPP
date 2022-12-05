#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span{
    private:
        unsigned int size;
        std::vector<int> vect;
    public:
        Span();
        ~Span();
        Span(const Span &span);
        Span(unsigned int size);
        unsigned int getSize() const;
        Span & operator=(const Span &span);
        void addNumber(int n); 
        long shortestSpan(void);
		long longestSpan(void) const;
        void	addRange(unsigned int min, unsigned int max);
        struct spanFull : public std::exception
        {
            const char * what () const throw ()
            {
                 return "the list is full";
            }
        };
        struct spanEmpty : public std::exception
        {
            const char * what () const throw ()
            {
                 return "the list is empty";
            }
        };
};

#endif