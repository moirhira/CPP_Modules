#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <vector>
#include <deque>
#include <iostream>



class PmergeMe {
    private:
        std::vector<int> _vec;
        std::deque<int> _deq;
    public:
        PmergeMe();
        PmergeMe(const std::vector<int> vec, std::deque<int> deq);
        PmergeMe(const PmergeMe& other);
        PmergeMe& operator=(const PmergeMe& other);
        ~PmergeMe();
        void sort(int len, char **argv);
        void _sortVector(std::vector<int> veco);
        void _sortDeque(std::deque<int> deqo);
        void run(int argc, char **argv);
};

#endif