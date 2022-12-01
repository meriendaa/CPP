#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
class Bureaucrat{
    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &bureaucrat);
        ~Bureaucrat();
        Bureaucrat & operator =(const Bureaucrat &bureaucrat);
        int getGrade() const ;
        const std::string getName() const;
        void incrementGrade();
        void decrementGrade();
        
        struct GradeTooHighException : public std::exception
        {
            const char * what () const throw ()
            {
                 return "Grade is TOO HIGH";
            }
        };

       struct GradeTooLowException : public std::exception
        {
            const char * what () const throw ()
            {
                 return "Grade is TOO LOW";
            }
        };
    private:
        std::string name;
        int grade;
        static const int Lowest_Int = 150;
        static const int Highest_Int = 1;
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat &bureaucrat);

#endif