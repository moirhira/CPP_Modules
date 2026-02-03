#include "MutantStack.hpp"
#include <list>
#include <vector>
#include <algorithm>

int main() {
    std::cout << "--- MutantStack Basic Tests ---" << std::endl;
    MutantStack<int> mstack;
    
    mstack.push(77);
    mstack.push(17);
    
    std::cout << "Top: " << mstack.top() << std::endl; // Should be 17
    
    mstack.pop();
    std::cout << "Size after pop: " << mstack.size() << std::endl; // Should be 1
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    // Testing Iterators
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    
    std::cout << "Stack contents: ";
    while (it != ite) {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << "\n" << std::endl;

    // --- Reverse Iterator Test ---
    std::cout << "--- Reverse Iterator Test ---" << std::endl;
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    
    while (rit != rite) {
        std::cout << *rit << " ";
        ++rit;
    }
    std::cout << "\n" << std::endl;

    // --- Comparing with std::list \ ---
    std::cout << "--- std::list Comparison ---" << std::endl;
    std::list<int> lstack;
    lstack.push_back(77);
    lstack.push_back(3);
    lstack.push_back(5);
    lstack.push_back(737);
    lstack.push_back(0);

    std::list<int>::iterator lit = lstack.begin();
    std::list<int>::iterator lite = lstack.end();
    std::cout << "List contents:  ";
    while (lit != lite) {
        std::cout << *lit << " ";
        ++lit;
    }
    std::cout << "\n(Outputs should match)" << std::endl;

     // --- Const iterator Test ---
    const MutantStack<int> constStack(mstack);
    // MutantStack<int>::const_iterator cit = constStack.begin();
    // *cit = 10; // This should fail to compile!
    return 0;
}