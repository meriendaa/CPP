#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
template <typename T>
void fun(T &i)
{
    std::cout << "Values Array -> " << i << std::endl;
}

template <typename T, typename L>
void iter(T arr[], L len, void(*fun)(T &))
{   
    for (int i = 0; i < len; i++)
    {
        fun(arr[i]);
    }
}

#endif