#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed b( a );
    Fixed d(12);
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    std::cout << d.getRawBits() << std::endl;
    return 0;
}