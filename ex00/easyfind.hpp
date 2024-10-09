#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

class VectorNotFound : public std::exception
{
    public:
        char const * what() const throw()
		{
			return "Could't find the int inside the container!";
		}
};

template<typename T>
int *easyfind(T &vector, int num)
{
    typename T::iterator it;
    if((it = std::find(vector.begin(), vector.end(), num)) == vector.end())
		throw VectorNotFound();
	return (&(*it));
}


#endif