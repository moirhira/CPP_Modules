#include "RPN.hpp"



int main(int ac, char **av) {
    if (ac != 2)
    {
        std::cerr << "missing input." << std::endl;
        return 1;
    }
    RPN::calculte(av[1]);
}