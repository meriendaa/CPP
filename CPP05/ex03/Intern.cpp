#include "Form.hpp"
#include "Intern.hpp"


#include <iostream>

Intern::Intern(){}

Intern::~Intern(){}

Intern::Intern(const Intern &intern)
{
    (void)intern;
}

Intern & Intern::operator=(const Intern &intern)
{
    (void)intern;
    return *this;
}

Form *Intern::makeForm(std::string formName, std::string target)
{
    Form *form;
    int i = 0; 
    std::string names[3] = {"Presidential Pardon Form", "Robotomy Request Form", "Shrubbery Creation Form"};
    while (i < 3)
    {
        if(formName == names[i])
            break ;
        i++;
    }
    switch (i)
    {
        case 0:
            form = new PresidentialPardonForm(target); 
            break;
        case 1:
            form = new RobotomyRequestForm(target); 
            break;
        case 2:
            form = new ShrubberyCreationForm(target); 
            break;
        default:
            form = NULL;
            std::cout << "This type doesn't exist" << std::endl;
            break;
    }
    if(form)
        std::cout << "Intern creates: " << form->getName() << std::endl;
    return(form);   
}