#include "Span.hpp"

int main()
{
    Span sp(19);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.longestSpan() << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
}