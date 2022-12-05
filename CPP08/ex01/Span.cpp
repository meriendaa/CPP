#include "Span.hpp"

Span::Span()
{
    this->size = 0;
}
Span::~Span(){}

Span::Span(unsigned int size)
{
    this->size = size;   
}

Span::Span(const Span &span)
{
    this->size = span.getSize();
}

Span &Span::operator=(const Span &span){
    this->size = span.getSize();
    return *this;
}

unsigned int Span::getSize() const{
    return this->size;
}

void Span::addNumber(int n)
{
    // std::cout << this->vect.size() << std::endl;
    // std::cout << this->size << std::endl;
    if(this->vect.size() == this->size)
        throw spanFull();
    this->vect.push_back(n);
}

long Span::longestSpan() const
{
	long	min;
	long 	max;

	if (this->vect.size() < 2)
		throw Span::spanEmpty();
	min = (long)*std::min_element(this->vect.begin(), this->vect.end());
	max = (long)*std::max_element(this->vect.begin(), this->vect.end());
    if(min == std::numeric_limits<int>::min() && max == std::numeric_limits<int>::max())
    {
        return (long)(max - min);
    }
	return (long)(max - min);
}

long Span::shortestSpan() 
{
    long shortest;
	if (this->vect.size() < 2)
		throw Span::spanEmpty();
    shortest = std::numeric_limits<int>::max();
    std::sort(this->vect.begin(), this->vect.end());

    if (this->vect.front() == std::numeric_limits<int>::min() && this->vect.back() == std::numeric_limits<int>::max())
    {
        return(longestSpan());
    }
	for (unsigned int i=0; i < this->size - 1; i++)
		shortest = (long)std::min(shortest, (long)this->vect[i + 1] - (long)this->vect[i]);
	return (long)shortest;
}

void Span::addRange(unsigned int min, unsigned int max)
{
    if((max - min) > this->size)
        throw spanFull();
    else{
        for (unsigned int i = min; i < max; i++)
        {
            addNumber(i);
        }
    }
}