#include <iostream>

int main()
{
    std::string str1 = "HI THIS IS BRAIN";
    std::string &stringREF = str1;
    std::string *stringPTR = &str1;
    
    std::cout << str1 << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
}