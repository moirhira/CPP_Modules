#include "PmergeMe.hpp"
#include <cstdlib>
#include <cstring>
#include <climits>

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



void PmergeMe::run(int len, char **argv) {

    for (int i = 1; i < len; i++)
    {
        std::string arg = argv[i];

        if (arg.find_first_not_of("012345679") != std::string::npos)
        {
            std::cerr << "Error: Invalid character found." << std::endl;
            return;
        }

        long value = std::atol(argv[i]);
        if (value < 0 || value > INT_MAX)
        {
            std::cerr << "Error: Number out of integer range." << std::endl;
            return;
        }
        _vec.push_back(static_cast<int>(value));
        _deq.push_back(static_cast<int>(value));
    }

    std::cout << "Before: ";
    for (size_t i = 0; i < _vec.size(); i++)
    {
        std::cout << _vec[i] << " ";
    }
    std::cout << std::endl;

    clock_t startTVec = clock();
    _sortVector(_vec);
    clock_t endTVec = clock();
    double timeVeq = double(endTVec - startTVec) / CLOCKS_PER_SEC * 1000000;

    clock_t startTDeq = clock();
    _sortDeque(_deq);
    clock_t endTDeq = clock();
    double timeDeq = double(endTDeq - startTDeq) / CLOCKS_PER_SEC * 1000000;


    std::cout << "After: ";
    for (size_t i = 0; i < _vec.size(); i++)
    {
        std::cout << _vec[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Time to process a range of " << _vec.size() << " elements with std::vector : " << timeVeq << " us" << std::endl;
    std::cout << "Time to process a range of " << _deq.size() << " elements with std::deque : " << timeDeq << " us" << std::endl;
    
}