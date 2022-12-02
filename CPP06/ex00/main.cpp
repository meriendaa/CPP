#include "cast.hpp"

int main(int argc, char **argv)
{
    Cast *cast;
    if (argc != 2)
    {
        std::cout << "Error numero de argumentos" << std::endl;
        std::cout << "----> ./<name> <value>" << std::endl;
        return (1);
    }
    try
    {
        cast = new Cast(argv[1]);
        std::cout << *cast << std::endl;
        delete cast;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }  
}