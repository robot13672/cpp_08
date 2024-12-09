#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <stdexcept> 

template<typename T>
int *easyfind(T &container, int num)
{
    typename T::iterator it = std::find(container.begin(), container.end(), num);
    if (it == container.end())
        throw std::runtime_error("Couldn't find the int inside the container!");
    return &(*it);
}

#endif