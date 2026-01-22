#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <algorithm>
#include <iostream>


class Span {
    private:
        unsigned int _N;
        std::vector<int> _cntr;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();

        void addNumber(int num);
        int shortestSpan();
        int longestSpan();
        template <typename T>
        void addRange(T beg, T end);
        class ContainerFullException : public std::exception {
            const char * what() const throw ();
        };

        class InsufficientElementException : public std::exception {
            const char * what() const throw ();
        };

};

template <typename T>
void Span::addRange(T beg, T end)
{
    if (_cntr.size() + std::distance(beg, end) > _N)
        throw ContainerFullException();
    _cntr.insert(_cntr.end(), beg, end);
}


#endif