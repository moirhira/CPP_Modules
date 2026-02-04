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




static std::vector<int> generateJacobsthal(int n) {
    std::vector<int> jacob;
    jacob.push_back(0);
    jacob.push_back(1);
    int prev = 1;
    int curr = 1;
    while (curr < n) {
        jacob.push_back(curr);
        int next = curr + 2 * prev;
        prev = curr;
        curr = next;
    }
    jacob.push_back(curr);
    return jacob;
}


void PmergeMe::_sortVector(std::vector<int> &veco){
    if (veco.size() <= 1)
        return;
    
    bool hasStraggler = false;
    int straggler = 0;
    if (veco.size() % 2 != 0)
    {
        hasStraggler = true;
        straggler = veco.back();
        veco.pop_back();
    }

    std::vector<std::pair<int, int> > pairs;
    for (size_t i = 0; i< veco.size(); i += 2)
    {
        if (veco[i] > veco[i + 1])
            pairs.push_back(std::make_pair(veco[i], veco[i + 1]));
        else
            pairs.push_back(std::make_pair(veco[i + 1], veco[i]));
    }


    std::vector<int> mainChain;
    for (size_t i = 0; i < pairs.size(); ++i){
        mainChain.push_back(pairs[i].first);
    }
    _sortVector(mainChain);


    std::vector<int> pendChain;
    std::vector<std::pair<int, int> > tempPairs = pairs;
    for (size_t i = 0; i< mainChain.size(); ++i)
    {
        for (size_t j = 0; j < tempPairs.size(); ++j)
        {
            if (tempPairs[j].first == mainChain[i])
            {
                pendChain.push_back(tempPairs[j].second);
                tempPairs.erase(tempPairs.begin() + j);
                break;
            }
        }
    }


    mainChain.insert(mainChain.begin(), pendChain[0]);

    std::vector<int> jacob = generateJacobsthal(pendChain.size());

    size_t k = 3;

    while (k < jacob.size()) {
        size_t cur_jacob = jacob[k];
        size_t prev_jacob = jacob[k - 1];

        if (cur_jacob >= pendChain.size())
            cur_jacob = pendChain.size();
        
        for (size_t i = cur_jacob; i > prev_jacob; --i) {
            if (i -1 >= pendChain.size())
                continue;
            int val = pendChain[i - 1];

            std::vector<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), val);
            mainChain.insert(pos, val);
        }
        k++;
        if (cur_jacob == pendChain.size())
            break;
    }

    if (hasStraggler)
    {
        std::vector<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), straggler);
        mainChain.insert(pos, straggler);
    }
    veco = mainChain;
}








void PmergeMe::_sortDeque(std::deque<int> &deqo){
    (void)deqo;
}





void PmergeMe::run(int len, char **argv) {

    for (int i = 1; i < len; i++)
    {
        std::string arg = argv[i];

        if (arg.find_first_not_of("0123456789") != std::string::npos)
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
    int printlimit;
    if (_vec.size() > 5)
        printlimit = 5;
    else
        printlimit = _vec.size();
    for (int i = 0; i < printlimit; i++)
    {
        std::cout << _vec[i] << " ";
    }
    if (_vec.size() > 5)
        std::cout << "[...]";
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
    for (int i = 0; i < printlimit; i++)
    {
        std::cout << _vec[i] << " ";
    }
    if (_vec.size() > 5)
        std::cout << "[...]";
    std::cout << std::endl;

    std::cout << "Time to process a range of " << _vec.size() << " elements with std::vector : " << timeVeq << " us" << std::endl;
    std::cout << "Time to process a range of " << _deq.size() << " elements with std::deque : " << timeDeq << " us" << std::endl;
    
}