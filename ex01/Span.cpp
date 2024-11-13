#include "Span.hpp"

Span::Span(unsigned int n) : _size(n) {}

Span::Span(const Span &other) : _numbers(other._numbers), _size(other._size) {}

Span::~Span() {}

Span &Span::operator=(const Span &other)
{
    if (this == &other)
        return *this;
    _numbers = other._numbers;
    _size = other._size;
    return *this;
}

void Span::addNumber(int n)
{
    if (_numbers.size() >= _size)
        throw std::exception();
    _numbers.push_back(n);
}

void Span::addNumber(const std::vector<int>& numbers) {
    if (_numbers.size() + numbers.size() > _size) {
        throw std::exception();
    }
    _numbers.insert(_numbers.end(), numbers.begin(), numbers.end());
}

int Span::shortestSpan()
{
    if (_numbers.size() <= 1)
        throw std::exception();
    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());
    int min = sorted[1] - sorted[0];
    for (unsigned int i = 2; i < sorted.size(); i++)
    {
        int diff = sorted[i] - sorted[i - 1];
        if (diff < min)
            min = diff;
    }
    return min;
}

int Span::longestSpan()
{
    if (_numbers.size() <= 1)
        throw std::exception();
    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());
    return sorted[sorted.size() - 1] - sorted[0];
}

int Span::getSize() const
{
    return _size;
}
