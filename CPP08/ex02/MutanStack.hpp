#ifndef MutantStack_HPP
# define MutantStack_HPP
#include <stack>
#include <list>
#include <algorithm>
#include <iostream>

template <typename T>
class MutantStack: public std::stack<T>{
    public:
    	typedef typename std::stack<T>::container_type::iterator iterator;
        MutantStack(): std::stack<T>() {}
        ~MutantStack(){}
        MutantStack(const MutantStack &mutantStack): std::stack<T>(mutantStack) {}
        MutantStack &operator=(const MutantStack &mutantStack)
        {
            std::stack<T>::operator=(mutantStack);
            return *this;
        }
	iterator	begin(){return std::stack<T>::c.begin();}
	iterator	end(){return std::stack<T>::c.end();}   
};
#endif