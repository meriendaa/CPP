#include "easyfind.hpp"
#include <algorithm>
#include <iostream>
#include <vector>

int main( void ) {
    std::vector<int> vect;
    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
    vect.push_back(40);
    vect.push_back(50);
    vect.push_back(60);
    vect.push_back(70);
    vect.push_back(80);
    vect.push_back(90);
    vect.push_back(100);
    for (size_t i = 0; i < vect.size(); i++)
    {
        std::cout << vect[i] << " ";
    }
    int search = 80;
    // try{
    //     std::cout << "BUSCAMOS EL 70" << std::endl;
    //     std::cout << "HEMOS ENCONTRADO EL NUMERO QUE BUSCAMOS, QUE ERA: " << *::easyfind(vect, 81) << std::endl;
    // }catch(std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }

    if (!(*::easyfind(vect, search)))
        std::cout << "ERROR QUE FLIPAS" << std::endl;
    else{
        std::cout << "BUSCAMOS EL NUMERO: " << search << std::endl;
        std::cout << "HEMOS ENCONTRADO EL NUMERO QUE BUSCAMOS, QUE ERA: " << *::easyfind(vect, search) << std::endl;
    }
    std::cout << std::endl;

}