#include <iostream>
#include "Harl.hpp"

void Harl::complain(std::string level)
{
    std::string lvl[4] = {"DEBUG", "INFO", "ERROR", "WARNING"};
    arr arrf[4] = {&Harl::debug, &Harl::info, &Harl::error, &Harl::warning};
    for (int i = 0; i < 4; i++)
    {
        if(lvl[i] == level)
        {
            (this->*arrf[i])();
        }
    }
    
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;

}
void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}