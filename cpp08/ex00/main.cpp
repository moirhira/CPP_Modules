#include <list>
#include <vector>
#include "easyfind.hpp"


int main() {
    try {

        std::vector<int> v;
        // std::list<int> l;
        v.push_back(12);
        v.push_back(19);
        v.push_back(2);
        v.push_back(7);

        std::cout << "Loking for 12 : " << std::endl;
        std::vector<int>::iterator it = easyfind(v, 12);
        std::cout << "Found: " << *it << std::endl;

        std::cout << "Loking for 20 : " << std::endl;
        easyfind(v, 20);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}