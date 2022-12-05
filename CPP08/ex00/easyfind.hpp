#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <algorithm>
#include <iostream>
template <typename T>
typename T::iterator easyfind(T &container, int search)
{
    typename T::iterator ite;
    ite = std::find(container.begin(), container.end(), search);
    if(ite != container.end())
        return ite;
    else
        return ite;
};
#endif