#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>


Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
    std::cout << "Default copy constructor" << std::endl;
    this->name = bureaucrat.getName();
    this->grade = bureaucrat.getGrade();
    *this = bureaucrat;
}
Bureaucrat::Bureaucrat(std::string name, int grade)
{
    std::cout << "Value constructor" << std::endl;
    this->name = name;
    this->grade = grade;
    if(this->grade > Lowest_Int)
    {
        throw GradeTooLowException();
    }
    if(this->grade < Highest_Int)
    {
        throw GradeTooHighException();
    }

}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
    this->grade = bureaucrat.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default destructor" << std::endl;
}

const std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::decrementGrade()
{
    std::cout << "Decrement..." << std::endl;
    if (this->grade == this->Lowest_Int)
        throw GradeTooLowException();
    this->grade++;
}

void Bureaucrat::incrementGrade()
{
    std::cout << "Increment..." << std::endl;
     if (this->grade == this->Highest_Int)
        throw GradeTooHighException();
    this->grade--;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
    os << bureaucrat.getName() << " have this grade: " << bureaucrat.getGrade() << std::endl;
    return os;
}

 void Bureaucrat::signForm(Form &form) const{
    if(form.getSign() == false)
        std::cout << this->name << " couldn’t sign " << form.getName() << " because nanana" << std::endl; 
    else
        std::cout << this->name << " signed " << form.getName() << std::endl; 

 }

