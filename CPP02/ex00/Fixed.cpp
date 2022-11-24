#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    valp = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    valp = fixed.getRawBits();
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    valp = raw;
}

int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return valp;
}

Fixed & Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    valp = fixed.getRawBits();
    return *this;
}
