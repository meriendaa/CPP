#include "Span.hpp"

#include <iostream>
int main( void ) 
{
    {
        // std::cout << std::numeric_limits<int>::max() << std::endl;
        // std::cout << std::numeric_limits<int>::min() << std::endl;
		//NORMAL
		Span	span(2);

		span.addNumber(std::numeric_limits<int>::min());
		span.addNumber(std::numeric_limits<int>::max());
		std::cout << "Shortest NORMAL span: " << span.shortestSpan() << std::endl;
		std::cout << "Longest NORMAL span: " << span.longestSpan() << std::endl;
	}
    std::cout << std::endl;
    {
     	Span	span(2);

		span.addNumber(10);
		span.addNumber(-10);
		std::cout << "Shortest NORMAL span: " << span.shortestSpan() << std::endl;
		std::cout << "Longest NORMAL span: " << span.longestSpan() << std::endl;   
    }
    std::cout << std::endl;
    {
		//CUANDO ESTA LLENO
		Span	span(3);
        span.addNumber(1);
        span.addNumber(2);
        span.addNumber(3);
		try {
			span.addNumber(4);
			std::cout << "ADDED\n";
		} catch (Span::spanFull& e) {
			std::cout << e.what() << std::endl;
		}
	}
    std::cout << std::endl;
    {
        Span span(40);
  		try {
			span.addRange(0,40);            
            std::cout << "Shortest NORMAL span: " << span.shortestSpan() << std::endl;
		    std::cout << "Longest NORMAL span: " << span.longestSpan() << std::endl;   
			std::cout << "ADDED\n";
		} catch (Span::spanFull& e) {
			std::cout << e.what() << std::endl;
		}
    }


}