#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap ct1("Teo");
	ClapTrap ct2(ct1);

	ct1.takeDamage(3);
	ct1.attack(ct2.getName());
	ct2.beRepaired(6);
    return(0);
}