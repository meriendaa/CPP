#include "Iter.hpp"

#include <iostream>
int main( void ) 
{
    {
        std::string	strArr[3];
        strArr[0] = "Eres un tonto";
        strArr[1] = "Fumas porros?";
        strArr[2] = "jajjaa nose";
        ::iter(strArr, 3, &fun);
    }
    std::cout << std::endl;
    {
        int intArr[10];
        int i = 0;
        for (i = 0; i < 10; i++)
        {
            intArr[i] = i;
        }
        ::iter(intArr, i, &fun);
    }
}