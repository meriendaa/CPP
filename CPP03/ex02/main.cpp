#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	ct1("Pepe");
	ClapTrap	ct2("Madre");
	ClapTrap	ct3("Payaso");
	ScavTrap	st1("Teo");
	ScavTrap	st2(st1);
	FragTrap	fr1("MARCOS");

	ct1.attack("Madre");
	ct2.takeDamage(ct1.getAttack());
	ct1.attack("Payaso");
	ct3.takeDamage(ct1.getAttack());
	ct3.attack("Madre");
	ct2.takeDamage(ct3.getAttack());
	ct2.beRepaired(10);
    st1.attack("Payaso");
    ct3.takeDamage(st1.getAttack());
    ct3.beRepaired(20);
	st1.guardGate();
	st2.guardGate();
	fr1.highFivesGuys();
	fr1.attack("Teo");
	st1.takeDamage(fr1.getAttack());
	return 0;
}