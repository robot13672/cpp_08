#include "Span.hpp"

Span::Span(int n) : N(n) { };

Span::~Span() { numbers.clear(); };

int Span::longestSpan()
{
    if(N < 2)
        std::cout << "Impossible to find a span!" << std::endl;
    {
        std::vector<int> res;
        res = this->numbers;
        std::sort(res.begin(), res.end());
        return res.back() - res.front();
    }
}

int Span::shortestSpan()
{
    if(numbers.size() < 2)
        std::cout << "Impossible to find a span!" << std::endl;
    int shortest;
    {
        std::vector<int> res;
        res = this->numbers;
        std::sort(res.begin(), res.end());
        shortest = numbers[1] - numbers[0];
        for(int i = 2; i < numbers.size(); i++ )
        {
            if(numbers[i] - numbers[i - 1] < shortest)
                shortest = numbers[i] - numbers[i - 1];
        }
    }
    return shortest;
}

void Span::addNumber(int number)
{
    if(numbers.size() + 1 > N)
        throw std::out_of_range("Adding too many numbers, exceeds Span limit");
    numbers.push_back(number);
}