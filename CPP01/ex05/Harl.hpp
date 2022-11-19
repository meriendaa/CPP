#ifndef HARL_CPP
# define HARL_CPP

#include <iostream>

class Harl{
    public:
        void complain(std::string level);  
    private:
        typedef void (Harl::*arr)(void);
        void debug(void);
        void info(void);
        void error(void);
        void warning(void);
};

#endif