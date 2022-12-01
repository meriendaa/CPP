#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>


Form::Form(std::string name, const int sign_grade, const int exec_grade)
{
    std::cout << "Value constructor" << std::endl;
    this->name = name;
    this->sign_grade = sign_grade;
    this->exec_grade = exec_grade;
    this->sign = false;
    if (this->sign_grade < this->Highest_Int || this->exec_grade < this->Highest_Int)
        throw GradeTooHighException();
    if (this->sign_grade > this->Lowest_Int || this->exec_grade > this->Lowest_Int)
        throw GradeTooLowException();
}

Form::Form(const Form &form)
{
    std::cout << "Copy constructor" << std::endl;
    this->name = form.name;
    this->sign = form.sign;
    this->sign_grade = form.sign_grade;
    this->exec_grade = form.exec_grade;
    *this = form;
}

Form::~Form()
{
    std::cout << "Default Destructor" << std::endl;
}

Form &Form::operator=(const Form &form)
{
    this->sign = form.getSign();
    return *this;
}

const std::string Form::getName() const
{
    return this->name;
}

int Form::getExec_grade() const
{
    return this->exec_grade;
}
int Form::getSign_grade() const {
    return this->sign_grade;
}
bool Form::getSign() const 
{
    return this->sign;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if(bureaucrat.getGrade() > this->sign_grade)
        throw GradeTooLowException();
    this->sign = true;
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
    os << form.getName() << " have the sign: " << form.getSign() << ", have the sign grade " << form.getSign_grade() << " and have the exec grade " << form.getExec_grade() << std::endl;
    return os;
}


