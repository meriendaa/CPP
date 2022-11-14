#include <iostream>
#include "zombie.hpp"

void randomChump( std::string name );
Zombie* newZombie( std::string name );  

int main()
{
    Zombie zombie("Merienda");
    Zombie *nZombie = newZombie("TeoTeo");

    zombie.announce();
    nZombie->announce();
    randomChump("PepeYuela");
    delete nZombie;
    return (0);
}