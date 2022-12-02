#ifndef INTERN_HPP
# define INTERN_HPP


#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

class Intern{
    public:
        Intern();
        ~Intern();
        Intern(const Intern &intern);
        Intern & operator =(const Intern &intern);
        Form *makeForm(std::string formName, std::string target);

};

#endif