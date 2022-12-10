#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
    private:
        int valp;
        static const int fracc = 8;
    public:
        Fixed();
        Fixed(int val);
        ~Fixed();
        Fixed (const Fixed &fixed);
        Fixed & operator =(const Fixed &fixed);
        int getRawBits( void ) const;
        void setRawBits (int const raw );
};

#endif