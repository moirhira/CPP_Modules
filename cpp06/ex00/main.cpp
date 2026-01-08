#include "ScalarConverter.hpp"

int main(int ac, char **av) {
    if (ac == 2)
    {
        std::cout << av[1] << "\n";
        ScalarConverter::convert(av[1]);
        return 0;
    }
    std::cerr << "Usage : ./convert <Scalar arg>" << std::endl;
    return 1;
}