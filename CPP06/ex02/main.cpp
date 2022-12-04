#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <string>

Base *generate()
{
    Base *base = NULL;
    int number = 0;
	srand(time(NULL));
	number = rand() % 3;
    switch (number)
    {
    case 0:
        base = new A();
        break;
    case 1:
        base = new B();
        break;
    case 2:
        base = new C();
        break;    
    default:
        base = NULL;
        break;
    }
    return (base);
}

void identify(Base *p)
{
    A *a = dynamic_cast<A*>(p);
    if (a != nullptr)
        std::cout << "A" << std::endl;
    B *b = dynamic_cast<B*>(p);
    if (b != nullptr)
        std::cout << "B" << std::endl;
    C *c = dynamic_cast<C*>(p);
    if (c != nullptr)
        std::cout << "C" << std::endl;
}

int main(){

    Base *base;
    base = generate();
    identify(base);
    return (0);
}