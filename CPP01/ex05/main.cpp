#include <iostream>
#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;
    if (argc < 2 || !argv[1][0])
    {
        std::cout << "Error Argumentos" << std::endl;
        exit(1);
    }

    harl.complain(argv[1]);
    return(0);
}