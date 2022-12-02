#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
class Bureaucrat;
class Form{
    public:
        Form(std::string name, const int sign_grade, const int exec_grade);
        Form(const Form &form);
        ~Form();
        Form & operator =(const Form &form);
        int getSign_grade() const;
        bool getSign() const;
        int getExec_grade() const;
        const std::string getName() const;
        void beSigned(const Bureaucrat &bureaucrat);
        void execute(const Bureaucrat & executor) const;   
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
        struct FormNotSignedException : public std::exception
        {
            const char * what () const throw ()
            {
                 return "FORM IS NOT SIGNED";
            }
        };

    private:
        std::string name;
        bool sign;
        int sign_grade;
        int exec_grade;
        static const int Lowest_Int = 150;
        static const int Highest_Int = 1;
};
std::ostream& operator<<(std::ostream& os, const Form &form);

#endif