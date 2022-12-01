#include "RobotomyRequestForm.hpp"
#include <iostream>
# include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm(): Form::Form("Robotomy Request Form", 72, 45)
{
    std::cout << "Default ROBOT constructor" << std::endl;
    this->target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm): Form::Form(robotomyRequestForm)
{
    std::cout << "Default copy ROBOT constructor" << std::endl;
    this->target = robotomyRequestForm.getTarget();
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form::Form("robotomy RequestForm", 72, 45)
{
    std::cout << "Default value ROBOT constructor" << std::endl;
    this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Default RobotomyRequestForm destructor" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const
{
    return this->target;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomyRequestForm)
{
    Form::operator=(robotomyRequestForm);
    this->target = robotomyRequestForm.getTarget();
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat & executor) const
{
    Form::execute(executor);
    std::cout << "drilling noises..." << std::endl;
    srand(time(NULL));
    if (rand() % 2)
		std::cout << this->target << " has been robotomized" << std::endl;
	else
		std::cout << "The robotomy failed" << std::endl;
}
