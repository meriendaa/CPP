#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
int	main(void)
{
	{
		Bureaucrat	b1 = Bureaucrat("Teo", 1);
		b1.decrementGrade();
		b1.decrementGrade(); 
		Bureaucrat	b2 = b1;
		b1.decrementGrade(); //b1 = 4
		b2.incrementGrade(); //b2 = 2
		Bureaucrat	b3(b1);
		b3.incrementGrade(); //b3
		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;
		std::cout << b3 << std::endl;
	}
    {
        // try{
        //     Bureaucrat b1 = Bureaucrat("teo", 1);
        // } catch(Bureaucrat::GradeTooHighException &e)
        // {
        //     std::cout << e.what() << std::endl;
        // }

        // try{
        //     Bureaucrat b1 = Bureaucrat("Teo", 150);
        //     b1.decrementGrade();
        //     b1.decrementGrade();
        // } catch(Bureaucrat::GradeTooLowException &e)
        // {
        //     std::cout << e.what() << std::endl;
        // }
    }

    {
        try{
            Form f1 = Form("TeoFORM", 0, 12);
            Bureaucrat	b1 = Bureaucrat("TeoBUR", 1);
            std::cout << f1 << std::endl;
            f1.beSigned(b1);
            b1.signForm(f1);
            std::cout << f1 << std::endl;
        } catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }

    }
	
	return (0);

}