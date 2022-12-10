#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	ct1("Dios");
	ClapTrap	ct2("PEPE");
	ClapTrap	ct3("Marcos");
	ScavTrap	st1("Teo");
	ScavTrap	st2(st1);

	ct1.attack("PEPE");
	ct2.takeDamage(ct1.getAttack());
	ct1.attack("Marcos");
	ct3.takeDamage(ct1.getAttack());
	ct3.attack("PEPE");
	ct2.takeDamage(ct3.getAttack());
	ct2.beRepaired(10);
    st1.attack("Marcos");
    ct3.takeDamage(st1.getAttack());
    ct3.beRepaired(20);
	st1.guardGate();
	st2.guardGate();
	return 0;
}