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
        int toInt() const;
        float toFloat() const;
};

std::ostream& operator<<(std::ostream& os, const Fixed &fixed);

#endif  