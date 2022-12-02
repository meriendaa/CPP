#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
int	main(void)
{
	{
		Intern	intern;
		Form*	form;

		form = intern.makeForm("Shrubbery Creation Form", "Teo");
		if (form)
			delete form;
	}
	{
		Intern	intern;
		Form*	form;

		form = intern.makeForm("Robotomy Request Form", "Teo");
		if (form)
			delete form;
	}
	{
		Intern	intern;
		Form*	form;

		form = intern.makeForm("Presidential Pardon Form", "Teo");
		if (form)
			delete form;
	}
	{
		Intern	intern;
		Form*	form;

		form = intern.makeForm("Uno que no existee", "Teo");
		if (form)
			delete form;
	}
	return (0);

}