#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(): Form::Form("Presidential PardonForm", 25, 5)
{
    std::cout << "Default Presidential constructor" << std::endl;
    this->target = "Default";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm): Form::Form(presidentialPardonForm)
{
    std::cout << "Default copy Presidential constructor" << std::endl;
    this->target = presidentialPardonForm.getTarget();
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form::Form("Presidential PardonForm", 25, 5)
{
    std::cout << "Default value Presidential constructor" << std::endl;
    this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Default PresidentialPardonForm  destructor" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
    return this->target;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &presidentialPardonForm)
{
    Form::operator=(presidentialPardonForm);
    this->target = presidentialPardonForm.getTarget();
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat & executor) const
{
    Form::execute(executor);
    std::cout << "Target: " << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
