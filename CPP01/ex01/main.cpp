#include <iostream>
#include "zombie.hpp"

Zombie* zombieHorde( int N, std::string name );
int main()
{
    Zombie *nZombie = zombieHorde(10, "Merienda");

    for (int i = 0; i < 10; i++)
    {
        nZombie[i].announce();
    }   
    delete [] nZombie;
    return (0);
}