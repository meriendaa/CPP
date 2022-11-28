#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	ct1("Arthur");
	ClapTrap	ct2("Victor");
	ClapTrap	ct3("Thomas");
	ScavTrap	st1("Téo");
	ScavTrap	st2(st1);

	ct1.attack("Victor");
	ct2.takeDamage(ct1.getAttack());
	ct1.attack("Thomas");
	ct3.takeDamage(ct1.getAttack());
	ct3.attack("Victor");
	ct2.takeDamage(ct3.getAttack());
	ct2.beRepaired(10);
    st1.attack("Thomas");
    ct3.takeDamage(st1.getAttack());
    ct3.beRepaired(20);
	st1.guardGate();
	st2.guardGate();
	return 0;
}