#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name): weapon(0), name(name){}

HumanB::~HumanB(){}

void HumanB::attack() const{
    if(weapon != 0)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " No Weapons!" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}