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
    public:
        std::vector<int> numbers;//change back to private
        Span(int n);
        ~Span();
        void addNumber(int number);
        //Add many numbers
        int shortestSpan();
        int longestSpan();
};

#endif