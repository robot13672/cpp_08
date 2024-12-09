#ifndef SPAN_HPP
# define SPAN_HPP


#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>


class Span
{
    private:
        unsigned int N;
        std::vector<int> numbers;
    public:
        Span(int n);
        ~Span();
        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
};

#endif