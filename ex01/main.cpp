#include "Span.hpp"

//オーバーフロー対策をしていない
int main()
{
    try{
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        //addNumber with vector
        std::vector<int> v = {1, 2, 3, 4, 5};
        sp.addNumber(v);

        //overflows(will throw exception)
        // sp.addNumber(12);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}