#include "MutantStack.hpp"

template<class T> inline MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &other)
{ 
    if (this != &other) 
    {
        std::stack<T>::operator=(other); 
    }
    return *this;
}