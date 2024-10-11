#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T> 
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        MutantStack() : std::stack<T>() {}
        MutantStack(const MutantStack<T>& other) : std::stack<T>(other) {} 

        MutantStack<T>& operator=(const MutantStack<T>& other) 
        { 
            if (this != &other) 
            {
                std::stack<T>::operator=(other); 
            }
        return *this;
    }
    ~MutantStack() {} 

    iterator begin() 
    {
        return std::stack<T>::c.begin(); 
    }

    iterator end() 
    {
        return std::stack<T>::c.end(); 
    }

    const_iterator begin() const 
    {
        return std::stack<T>::c.begin(); 
    }

    const_iterator end() const 
    {
        return std::stack<T>::c.end(); 
    }
};

#endif