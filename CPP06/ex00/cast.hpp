#ifndef CAST_HPP
# define CAST_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>

enum type_en{
    TP_INT,
    TP_FLOAT,
    TP_DOUBLE,
    TP_INF_M,
    TP_NAN,
    TP_CHAR,
    TP_INF_P,
    TP_NOT
};

class Cast{
    private:
        int int_t;
        float float_t;
        double double_t;
        char char_t;
        int type_t;

    public:
        Cast();
        ~Cast();
        Cast(const Cast &cast);
        Cast(std::string value);    
        Cast & operator=(const Cast &cast);
        int getInt() const;
        float getFloat() const;
        double getDouble() const;
        char getChar() const;
        int getType() const;
        type_en find_type(std::string value);

        struct NonNumVal : public std::exception
        {
            const char * what () const throw ()
            {
                 return "VALUE IS NOT NUMERICAL";
            }
        };

};
std::ostream& operator<<(std::ostream& os, const Cast &cast);


#endif 