#include "PmergeMe.hpp"
#include <cstdlib>
#include <cstring>

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const std::vector<int> vec, std::deque<int> deq)
    : _vec(vec), _deq(deq) {}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
    if (this != &other)
    {
        this->_vec = other._vec;
        this->_deq = other._deq;
    }
    return *this;
}

PmergeMe::PmergeMe(const PmergeMe& other)
    : _vec(other._vec), _deq(other._deq) {}

PmergeMe::~PmergeMe() {}
