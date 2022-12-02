#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"
#include <iostream>


class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm);
        ~RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm & operator =(const RobotomyRequestForm &robotomyRequestForm);
        std::string getTarget() const;
        void execute(const Bureaucrat & executor) const;
        
    private:
        std::string target;
};

#endif