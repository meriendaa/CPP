#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"
#include <iostream>


class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm);
        ~PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm & operator =(const PresidentialPardonForm &presidentialPardonForm);
        std::string getTarget() const;
        void execute(const Bureaucrat & executor) const;
        
    private:
        std::string target;
};

#endif