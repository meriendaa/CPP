#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
    private:
        int valp;
        static const int fracc = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed (const Fixed &fixed);
        Fixed (const int val);
        Fixed (const float val);
        Fixed & operator =(const Fixed &fixed);
        int getRawBits( void ) const;
        void setRawBits (int const raw );
        Fixed operator +(const Fixed &fixed);
        Fixed operator -(const Fixed &fixed);
        Fixed operator *(const Fixed &fixed);
        Fixed operator /(const Fixed &fixed);
        bool operator <(const Fixed &fixed) const;
        bool operator >(const Fixed &fixed) const;
        bool operator <=(const Fixed &fixed) const;
        bool operator >=(const Fixed &fixed) const;
        bool operator ==(const Fixed &fixed) const;
        bool operator !=(const Fixed &fixed) const;
        Fixed& operator ++(); //No lleva nada es el pre, ya que modificas el valor y quieres ver los cambios en el momento.
        Fixed operator ++(int); //lleva int es el post, porque haces una copia porq lo incrementas pero lo imprimiras luego 
        Fixed& operator --();
        Fixed operator --(int);
        static const Fixed &min(const Fixed &fix1, const Fixed &fix2);
        static Fixed &min(Fixed &fix1, Fixed &fix2);
        static const Fixed &max(const Fixed &fix1, const Fixed &fix2);
        static Fixed &max(Fixed &fix1, Fixed &fix2);
        int toInt() const;
        float toFloat() const;
};

std::ostream& operator<<(std::ostream& os, const Fixed &fixed);

#endif  