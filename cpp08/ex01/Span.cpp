#include "Span.hpp"

Span::Span() : _N(0) {}

Span::Span(unsigned int n) : _N(n){}

Span::Span(const Span& other) : _N(other._N), _cntr(other._cntr){}

Span& Span::operator=(const Span& other) {
    if (this != &other)
    {
        _N = other._N;
        _cntr = other._cntr;
    }
    return *this;
}

Span::~Span() {}

const char * Span::ContainerFullException::what() const throw () {
    return "Container is Full!";
}

const char * Span::InsufficientElementException::what() const throw () {
    return "There is no enough element to do this process!";
}

void Span::addNumber(int num) {
    if (_cntr.size() >= _N)
        throw ContainerFullException();
    this->_cntr.push_back(num);
}
int Span::longestSpan() {
    if (_cntr.size() <= 1)
        throw InsufficientElementException();
    std::vector<int>::iterator it_min = std::min_element(_cntr.begin(), _cntr.end());
    std::vector<int>::iterator it_max = std::max_element(_cntr.begin(), _cntr.end());
    return *it_max - *it_min;
}
int Span::shortestSpan() {
    if (_cntr.size() <= 1)
        throw InsufficientElementException();

    std::vector<int> sorted = _cntr;
    std::sort(sorted.begin(), sorted.end());

    int shortest = sorted[1] - sorted[0];

    for (size_t i = 1; i < sorted.size() - 1; ++i)
    {
        int cur = sorted[i + 1] - sorted[i]; 
        if (cur < shortest)
            shortest = cur;
    }
    return shortest;
}



