#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <vector>

class Span
{
    private:
        std::vector<int> _numbers;
        unsigned int _size;
    public:
        Span(unsigned int n);
        Span(const Span &other);
        ~Span();
        Span &operator=(const Span &other);

        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        int getSize() const;
};

#endif