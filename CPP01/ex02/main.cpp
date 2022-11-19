#include <iostream>

int main()
{
    std::string str1 = "HI THIS IS BRAIN";
    std::string &stringREF = str1;
    std::string *stringPTR = &str1;
    
    std::cout << "MemAddr of str " << &str1 << std::endl;
    std::cout << "MemAddr held by stringPTR " << stringPTR << std::endl;
    std::cout << "MemAddr held by stringREF " << &stringREF << std::endl;

    std::cout << "Value of str " << str1 << std::endl;
    std::cout << "Value pointed by stringPTR " << *stringPTR << std::endl;
    std::cout << "Value pointed by stringREF " << stringREF << std::endl;
}