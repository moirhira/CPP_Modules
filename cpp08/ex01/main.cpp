#include "Span.hpp"
#include <list>


int main()
{
     std::cout << "-------Test 1--------" << std::endl;
    try
    {

        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        // sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }


    std::cout << "-------Test 2--------" << std::endl;
    try {
        Span lis(2);
        std::list<int> l;
        l.push_back(100);
        l.push_back(200);
        l.push_back(300);
        lis.addRange(l.begin(), l.end());
        std::cout << "Longest from list: " << lis.longestSpan() << " (Expected: 200)" << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "List test failed: " << e.what() << std::endl;
    }

    std::cout << "-------Test 3--------" << std::endl;
    try {
        std::cout << "\nTesting with 10,000 numbers:" << std::endl;
        Span bigSpan(10000);
        std::vector<int> bigVec;
        for (int i = 0; i < 10000; i++)
            bigVec.push_back(i * 2);
        
        bigSpan.addRange(bigVec.begin(), bigVec.end());
        std::cout << "Shortest span: " << bigSpan.shortestSpan() << std::endl;
        std::cout << "Longest span: " << bigSpan.longestSpan() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "Big test failed: " << e.what() << std::endl;
    }
    return 0;
}