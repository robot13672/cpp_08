#include <iostream>
#include "MutantStack.hpp"

// int main()
// {
//     MutantStack<int> stack1;
//     stack1.push(1);
//     stack1.push(2);
//     stack1.push(3);


//     MutantStack<int> stack2(stack1);

//     MutantStack<int> stack3;
//     stack3 = stack1;

//     for (MutantStack<int>::iterator it = stack1.begin(); it != stack1.end(); ++it) 
//     {
//         std::cout << *it << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}