#include "easyfind.hpp"
#include <vector>


int main()
{
    std::vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    int num = 3; 

    try 
	{
        int *result = easyfind(vec, num);
        std::cout << "Found: " << *result << ", with adress: " << result << std::endl;
    } 
	catch (const std::exception& e) 
	{
        std::cerr << "Error: " << e.what() << std::endl; 
    }

    return 0;
}