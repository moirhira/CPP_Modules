#include <iostream>
#include <exception>
#include <algorithm>


class NotFoundException : public std::exception {

    const char * what() const throw ();
};

const char * NotFoundException::what() const throw() {
    return "The number provided not found!";
}

template <typename T>
typename T::iterator easyfind(T& ctnr, int n)
{
    typename T::iterator it = std::find(ctnr.begin(), ctnr.end(), n);

    if (it == ctnr.end())
        throw NotFoundException();

    return it;
}
