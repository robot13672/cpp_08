#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "longest span: "<< sp.longestSpan() << std::endl;
    std::cout << "shortest span: "<< sp.shortestSpan() << std::endl;
}