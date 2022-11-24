#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->valp = 0;
}

Fixed::Fixed(const int val)
{
    std::cout << "Int constructor called" << std::endl;
    this->valp = val << this->fracc;
}

Fixed::Fixed(const float val)
{
    std::cout << "Float  constructor called" << std::endl;
    this->valp = roundf(val * (1 << this->fracc));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    this->valp = fixed.getRawBits();
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->valp = raw;
}

int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->valp;
}

Fixed & Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    this->valp = fixed.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
    os << fixed.toFloat();
    return os;
}

int Fixed::toInt() const{
    return (this->valp >> this->fracc);
}

float Fixed::toFloat() const{
    return (float)this->valp / (float)(1 << this->fracc);
}

