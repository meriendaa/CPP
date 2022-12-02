#include "ShrubberyCreationForm.hpp"
#include <iostream>
# include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): Form::Form("shrubbery CreationForm", 145, 137)
{
    std::cout << "Default SHRUBBERY constructor" << std::endl;
    this->target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm): Form::Form(shrubberyCreationForm)
{
    std::cout << "Default Copy SHRUBBERY constructor" << std::endl;
    this->target = shrubberyCreationForm.getTarget();
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form::Form("shrubbery CreationForm", 145, 137)
{
    std::cout << "Default value SHRUBBERY constructor" << std::endl;
    this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Default ShrubberyCreationForm destructor" << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const
{
    return this->target;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubberyCreationForm)
{
    Form::operator=(shrubberyCreationForm);
    this->target = shrubberyCreationForm.getTarget();
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{

    Form::execute(executor);
    std::ofstream ficheroRep(this->target + "_shrubbery");
    if (!ficheroRep.is_open())
        std::cout << "Error al abrir" << std::endl;
    ficheroRep << "       _-_  " << std::endl;
    ficheroRep << "    /~~   ~~\"" << std::endl;
    ficheroRep << " /~~         ~~\"" << std::endl;
    ficheroRep << "{               }" << std::endl;
    ficheroRep << "'\'  _-     -_  /" << std::endl;
    ficheroRep << "   ~  \\ //  ~" << std::endl;
    ficheroRep << "_- -   | | _- _" << std::endl;
    ficheroRep << "  _ -  | |   -_" << std::endl;
    ficheroRep << "      // \\" << std::endl;
    ficheroRep << "" << std::endl;


    ficheroRep.close();
}
