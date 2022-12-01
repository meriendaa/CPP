#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"
#include <iostream>


class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm & operator =(const ShrubberyCreationForm &shrubberyCreationForm);
        std::string getTarget() const;
        void execute(const Bureaucrat & executor) const;
        
    private:
        std::string target;
};

#endif