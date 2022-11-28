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

//operators
//SUMA
Fixed Fixed::operator+(const Fixed &fixed)
{
    Fixed aux;

    aux.setRawBits(this->valp + fixed.getRawBits());
    return (aux);
}
//RESTA
Fixed Fixed::operator-(const Fixed &fixed)
{
    Fixed aux;

    aux.setRawBits(this->valp - fixed.getRawBits());
    return (aux);
}
//MULTI
Fixed Fixed::operator*(const Fixed &fixed)
{
    Fixed aux;
    float num;

    num = this->toFloat() *  fixed.toFloat();
    aux.setRawBits(roundf(num * (1 << this->fracc)));
    return(aux);
}
//DIVI
Fixed Fixed::operator/(const Fixed &fixed)
{
    Fixed aux;
    float num;

    num = this->toFloat() / fixed.toFloat();
    aux.setRawBits(roundf(num * (1 << this->fracc)));
    return(aux);
}

//BOOOLs
bool Fixed::operator<(const Fixed &fixed) const
{
    return (this->valp < fixed.getRawBits());
}

bool Fixed::operator>(const Fixed &fixed) const
{
    return (this->valp > fixed.getRawBits());
}
bool Fixed::operator==(const Fixed &fixed) const
{
    return (this->valp == fixed.getRawBits());
}
bool Fixed::operator!=(const Fixed &fixed) const
{
    return (this->valp != fixed.getRawBits());
} 
bool Fixed::operator>=(const Fixed &fixed) const
{
    return (this->valp >= fixed.getRawBits());
}
bool Fixed::operator<=(const Fixed &fixed) const
{
    return (this->valp <= fixed.getRawBits());
}

//increm
Fixed& Fixed::operator++()
{
    this->valp++;
    return (*this);
}
Fixed& Fixed::operator--()
{
    this->valp--;
    return (*this);
}
Fixed Fixed::operator++(int)
{
    Fixed aux;
    aux = *this;
    ++*this;
    return aux;
}
Fixed Fixed::operator--(int)
{
    Fixed aux;
    aux = *this;
    --*this;
    return aux;
}

//MIN AND MAX
const Fixed &Fixed::max(const Fixed &fix1, const Fixed &fix2)
{
    if (fix1 > fix2)
        return (fix1);
    return(fix2);
}
Fixed &Fixed::max(Fixed &fix1, Fixed &fix2)
{
    if (fix1 > fix2)
        return (fix1);
    return(fix2);
}

const Fixed &Fixed::min(const Fixed &fix1, const Fixed &fix2)
{
    if (fix1 < fix2)
        return (fix1);
    return(fix2);
}

Fixed &Fixed::min(Fixed &fix1, Fixed &fix2)
{
    if(fix1 < fix2)
        return (fix1);
    return(fix2);
}


